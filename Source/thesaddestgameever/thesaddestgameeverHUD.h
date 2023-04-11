// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "thesaddestgameeverHUD.generated.h"

UCLASS()
class AthesaddestgameeverHUD : public AHUD
{
	GENERATED_BODY()

public:
	AthesaddestgameeverHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

