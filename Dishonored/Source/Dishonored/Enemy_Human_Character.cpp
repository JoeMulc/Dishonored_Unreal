// Fill out your copyright notice in the Description page of Project Settings.


#include "Enemy_Human_Character.h"
#include "GameFramework/CharacterMovementComponent.h"

// Sets default values
AEnemy_Human_Character::AEnemy_Human_Character()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(55.f, 96.0f);

	// Create a CameraComponent	
	FirstPersonCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("FirstPersonCamera"));
	FirstPersonCameraComponent->SetupAttachment(GetCapsuleComponent());
	FirstPersonCameraComponent->SetRelativeLocation(FVector(-10.f, 0.f, 60.f)); // Position the camera
	FirstPersonCameraComponent->bUsePawnControlRotation = true;

	// Create a mesh component that will be used when being viewed from a '1st person' view (when controlling this pawn)
	Mesh1P = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("CharacterMesh1P"));
	Mesh1P->SetupAttachment(FirstPersonCameraComponent);
	Mesh1P->SetRelativeLocation(FVector(-30.f, 0.f, -150.f));


	static ConstructorHelpers::FObjectFinder<UAnimSequence> AnimAsset(TEXT("/Script/Engine.AnimSequence'/Game/Characters/Mannequins/Animations/Manny/Jogging_Stumble_Anim.Jogging_Stumble_Anim'"));

	if (AnimAsset.Succeeded())
	{
		stumbleAnimation = AnimAsset.Object;
	}

	Tags.Add(FName("Posses"));
}

// Called when the game starts or when spawned
void AEnemy_Human_Character::BeginPlay()
{
	Super::BeginPlay();
	playerCharacter = Cast<ADishonoredCharacter>(UGameplayStatics::GetPlayerCharacter(GetWorld(), 0));
}

// Called every frame
void AEnemy_Human_Character::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AEnemy_Human_Character::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	// Set up action bindings
	if (UEnhancedInputComponent* EnhancedInputComponent = Cast<UEnhancedInputComponent>(PlayerInputComponent))
	{
		// Jumping
		EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Started, this, &ACharacter::Jump);
		EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Completed, this, &ACharacter::StopJumping);

		// Moving
		EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Triggered, this, &AEnemy_Human_Character::Move);

		// Looking
		EnhancedInputComponent->BindAction(LookAction, ETriggerEvent::Triggered, this, &AEnemy_Human_Character::Look);

		//Disposses
		EnhancedInputComponent->BindAction(DispossesAction, ETriggerEvent::Completed, this, &AEnemy_Human_Character::Disposses);
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("'%s' Failed to find an Enhanced Input Component! This template is built to use the Enhanced Input system. If you intend to use the legacy system, then you will need to update this C++ file."), *GetNameSafe(this));
	}

}

void AEnemy_Human_Character::Move(const FInputActionValue& Value)
{
	// input is a Vector2D
	FVector2D MovementVector = Value.Get<FVector2D>();

	if (Controller != nullptr)
	{
		// add movement 
		AddMovementInput(GetActorForwardVector(), MovementVector.Y);
		AddMovementInput(GetActorRightVector(), MovementVector.X);
	}
}

void AEnemy_Human_Character::Look(const FInputActionValue& Value)
{
	// input is a Vector2D
	FVector2D LookAxisVector = Value.Get<FVector2D>();

	if (Controller != nullptr)
	{
		// add yaw and pitch input to controller
		AddControllerYawInput(LookAxisVector.X);
		AddControllerPitchInput(LookAxisVector.Y);
	}
}

void AEnemy_Human_Character::Disposses(const FInputActionValue& Value)
{
	APlayerController* playerController = Cast<APlayerController>(GetController());
	GetCapsuleComponent()->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	playerCharacter->SetActorLocation(GetActorLocation());
	playerCharacter->SetActorRotation(GetActorRotation());

	UCameraComponent* targetCamera = playerCharacter->FindComponentByClass<UCameraComponent>();
	FRotator targetRotation = targetCamera->GetComponentRotation();

	if (GetMesh() && stumbleAnimation)
	{
		GetMesh()->PlayAnimation(stumbleAnimation, false); 
	}

	playerController->SetViewTargetWithBlend(
		playerCharacter,
		0.5f,
		EViewTargetBlendFunction::VTBlend_Cubic
	);

	//Delay possesion
	FTimerHandle possessTimer;
	GetWorld()->GetTimerManager().SetTimer(
		possessTimer,
		[this, playerController, targetRotation]()
		{
			if (UCharacterMovementComponent* movementComp = playerCharacter->GetCharacterMovement())
			{
				movementComp->SetMovementMode(MOVE_Walking);
				movementComp->SetComponentTickEnabled(true);
			}
			playerCharacter->SetActorTickEnabled(true);
			playerCharacter->SetActorHiddenInGame(false);
			playerCharacter->SetActorEnableCollision(true);

			playerController->Possess(playerCharacter);
			playerCharacter->EnableInput(playerController);
			playerController->SetControlRotation(targetRotation);
		},
		0.5f,
		false
	);
}