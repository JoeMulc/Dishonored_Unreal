// Copyright Epic Games, Inc. All Rights Reserved.

#include "DishonoredCharacter.h"
#include "DishonoredProjectile.h"
#include "Animation/AnimInstance.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "InputActionValue.h"
#include "Engine/LocalPlayer.h"

DEFINE_LOG_CATEGORY(LogTemplateCharacter);

//////////////////////////////////////////////////////////////////////////
// ADishonoredCharacter

ADishonoredCharacter::ADishonoredCharacter()
{
	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(55.f, 96.0f);
		
	// Create a CameraComponent	
	FirstPersonCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("FirstPersonCamera"));
	FirstPersonCameraComponent->SetupAttachment(GetCapsuleComponent());
	FirstPersonCameraComponent->SetRelativeLocation(FVector(-10.f, 0.f, 60.f)); // Position the camera
	FirstPersonCameraComponent->bUsePawnControlRotation = true;

	// Create a mesh component that will be used when being viewed from a '1st person' view (when controlling this pawn)
	Mesh1P = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("CharacterMesh1P"));
	Mesh1P->SetOnlyOwnerSee(true);
	Mesh1P->SetupAttachment(FirstPersonCameraComponent);
	Mesh1P->bCastDynamicShadow = false;
	Mesh1P->CastShadow = false;
	Mesh1P->SetRelativeLocation(FVector(-30.f, 0.f, -150.f));

	//Create ability component
	abilityManager = CreateDefaultSubobject<UAbilityManager_Component>(TEXT("AbilityComponent"));

	currentMana = maxMana;
}

void ADishonoredCharacter::BeginPlay()
{
	Super::BeginPlay();

	if (manaBarWidgetClass)
	{
		APlayerController* PlayerController = Cast<APlayerController>(GetController());
		if (PlayerController)
		{
			manaBarWidget = CreateWidget<UManaBarWidget>(PlayerController, manaBarWidgetClass);
			if (manaBarWidget)
			{
				manaBarWidget->AddToViewport();
				manaBarWidget->UpdateManaBar(currentMana, maxMana);
			}
		}
	}
}

void ADishonoredCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (currentMana < maxMana && !IsManaOnCoolDown())
	{
		currentMana += manaRegenRate * DeltaTime;
		currentMana = FMath::Clamp(currentMana, 0.f, maxMana);
	}

	if (IsManaOnCoolDown())
	{
		//UE_LOG(LogTemp, Warning, TEXT("Ability on cooldown! %.2f seconds remaining"), currentCooldown);
		currentManaRegenCooldown = FMath::Max(0, currentManaRegenCooldown - DeltaTime);
	}

	// Update UI
	if (manaBarWidget)
	{
		manaBarWidget->UpdateManaBar(currentMana, maxMana);
	}

	//UE_LOG(LogTemplateCharacter, Warning, TEXT("Mana : %f"), currentMana);
}

//////////////////////////////////////////////////////////////////////////// Input

void ADishonoredCharacter::NotifyControllerChanged()
{
	Super::NotifyControllerChanged();

	// Add Input Mapping Context
	if (APlayerController* PlayerController = Cast<APlayerController>(Controller))
	{
		if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PlayerController->GetLocalPlayer()))
		{
			Subsystem->AddMappingContext(DefaultMappingContext, 0);
		}
	}
}

void ADishonoredCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{	
	// Set up action bindings
	if (UEnhancedInputComponent* EnhancedInputComponent = Cast<UEnhancedInputComponent>(PlayerInputComponent))
	{
		// Jumping
		EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Started, this, &ACharacter::Jump);
		EnhancedInputComponent->BindAction(JumpAction, ETriggerEvent::Completed, this, &ACharacter::StopJumping);

		// Moving
		EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Triggered, this, &ADishonoredCharacter::Move);

		// Looking
		EnhancedInputComponent->BindAction(LookAction, ETriggerEvent::Triggered, this, &ADishonoredCharacter::Look);

		EnhancedInputComponent->BindAction(AbilityAction, ETriggerEvent::Started , this, &ADishonoredCharacter::StartAbility);
		EnhancedInputComponent->BindAction(AbilityAction, ETriggerEvent::Completed, this, &ADishonoredCharacter::StopAbility);
	}
	else
	{
		UE_LOG(LogTemplateCharacter, Error, TEXT("'%s' Failed to find an Enhanced Input Component! This template is built to use the Enhanced Input system. If you intend to use the legacy system, then you will need to update this C++ file."), *GetNameSafe(this));
	}
}


void ADishonoredCharacter::Move(const FInputActionValue& Value)
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

void ADishonoredCharacter::Look(const FInputActionValue& Value)
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

void ADishonoredCharacter::StartAbility(const FInputActionValue& Value)
{
	if (abilityManager->abilityArray[0]) abilityManager->abilityArray[0]->Activate();
}

void ADishonoredCharacter::StopAbility(const FInputActionValue& Value)
{
	if (abilityManager->abilityArray[0]) abilityManager->abilityArray[0]->Deactivate();
}

bool ADishonoredCharacter::IsManaOnCoolDown()
{
	return currentManaRegenCooldown > 0;
}