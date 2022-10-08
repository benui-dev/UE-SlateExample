// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "BUIHUD.generated.h"

UCLASS()
class ABUIHUD : public AHUD
{
	GENERATED_BODY()
public:
	ABUIHUD(const FObjectInitializer& ObjectInitializer);
	//virtual void ShowHUD() override;
	//virtual void DrawHUD() override;
protected:
	virtual void BeginPlay() override;
	
	TSharedPtr<class SExampleWidget> MyWidget;
};
