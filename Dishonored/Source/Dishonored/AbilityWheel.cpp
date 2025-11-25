// Fill out your copyright notice in the Description page of Project Settings.


#include "AbilityWheel.h"

void UAbilityWheel::InitButton(UTexture2D* icon)
{
    UE_LOG(LogTemp, Warning, TEXT("InitButton called"));

    if (!icon)
    {
        UE_LOG(LogTemp, Error, TEXT("Icon is NULL!"));
        return;
    }

    buttonIcon = icon;

    button = NewObject<UButton>(this);

    buttonImage = NewObject<UImage>(this);

    if (buttonImage && buttonIcon)
    {
        buttonImage->SetBrushFromTexture(buttonIcon);
        UE_LOG(LogTemp, Warning, TEXT("Texture set on image"));
    }

    if (button && buttonImage)
    {
        UButtonSlot* ButtonSlot = Cast<UButtonSlot>(button->AddChild(buttonImage));
        if (ButtonSlot)
        {
            ButtonSlot->SetPadding(FMargin(0.f));
            ButtonSlot->SetHorizontalAlignment(HAlign_Fill);
            ButtonSlot->SetVerticalAlignment(VAlign_Fill);
        }
    }

    if (UCanvasPanel* RootCanvas = Cast<UCanvasPanel>(GetRootWidget()))
    {
        UE_LOG(LogTemp, Warning, TEXT("Adding to canvas"));
        UCanvasPanelSlot* CanvasSlot = RootCanvas->AddChildToCanvas(button);
        if (CanvasSlot)
        {
            CanvasSlot->SetSize(FVector2D(150.f, 125.f));
            CanvasSlot->SetPosition(FVector2D(100.f, 100.f));
        }
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("No root canvas!"));
    }
}
