// Fill out your copyright notice in the Description page of Project Settings.
#include "AbilityWheel.h"
#include "Math/UnrealMathUtility.h"
void UAbilityWheel::InitButton(TArray<UAbility*> abilities)
{
    UE_LOG(LogTemp, Warning, TEXT("InitButton called with %d abilities"), abilities.Num());
    if (abilities.Num() == 0)
    {
        UE_LOG(LogTemp, Error, TEXT("No abilities provided!"));
        return;
    }
    UCanvasPanel* rootCanvas = Cast<UCanvasPanel>(GetRootWidget());
    if (!rootCanvas)
    {
        UE_LOG(LogTemp, Error, TEXT("No root canvas!"));
        return;
    }

    FVector2D center = FVector2D(0.f, 0.f);

    for (int32 i = 0; i < abilities.Num(); i++)
    {
        UAbility* ability = abilities[i];
        if (!ability || !ability->abilityIcon)
        {
            UE_LOG(LogTemp, Warning, TEXT("Issue with ability or icon"));
            continue;
        }
  
        float angle = (2.f * PI * i) / abilities.Num();

        FVector2D buttonPos;
        buttonPos.X = center.X + FMath::Cos(angle) * radius - (buttonSize / 2.f);
        buttonPos.Y = center.Y + FMath::Sin(angle) * radius - (buttonSize / 2.f);

        UButton* newButton = NewObject<UButton>(this);
        UImage* newImage = NewObject<UImage>(this);

        if (newButton && newImage)
        {

            newImage->SetBrushFromTexture(ability->abilityIcon);

            UButtonSlot* buttonSlot = Cast<UButtonSlot>(newButton->AddChild(newImage));
            if (buttonSlot)
            {
                buttonSlot->SetPadding(FMargin(0.f));
                buttonSlot->SetHorizontalAlignment(HAlign_Fill);
                buttonSlot->SetVerticalAlignment(VAlign_Fill);
            }

            UCanvasPanelSlot* canvasSlot = rootCanvas->AddChildToCanvas(newButton);
            if (canvasSlot)
            {
                canvasSlot->SetSize(FVector2D(buttonSize, buttonSize));
                canvasSlot->SetPosition(buttonPos);
                canvasSlot->SetAnchors(FAnchors(0.5f, 0.5f, 0.5f, 0.5f));
                canvasSlot->SetAlignment(FVector2D(0.5f, 0.5f));
            }
            newButton->OnHovered.AddDynamic(this, &UAbilityWheel::OnButtonHovered);
            newButton->OnUnhovered.AddDynamic(this, &UAbilityWheel::OnButtonUnhovered);

            buttons.Add(newButton);
            storedAbilities.Add(ability);
        }
    }
}
void UAbilityWheel::OnButtonHovered()
{
    UE_LOG(LogTemp, Warning, TEXT("Hovered!"));

    for (int i = 0; i < buttons.Num();  i++)
    {
        if (buttons[i]->IsHovered()) hoveredIndex = i;
    }
}
void UAbilityWheel::OnButtonUnhovered()
{
    UE_LOG(LogTemp, Warning, TEXT("Unhovered!"));
    selectedIndex = hoveredIndex;
}