// Copyright 2018 Sebastien Rombauts (sebastien.rombauts@gmail.com)

#pragma once

#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "CustomGameSettings.generated.h"

/**
 * Add a section int "Project Settings" - "Game" - "My Settings"
 *
 * Settings are saved in Config/DefaultGame.ini
 *
 * Settings values can be accessed using the CDO:
 *     GetDefault<UCustomGameSettings>()->bSampleBool;
 *
 */
UCLASS(config = Game, defaultconfig, meta = (DisplayName = "My Settings")) // default display name would be the class name, ie "Custom Game Settings"
class CUSTOMSETTINGS_API UCustomGameSettings : public UDeveloperSettings
{
	GENERATED_BODY()

public:
	/** Sample bool property */
	UPROPERTY(EditAnywhere, config, Category = "Variables")
	bool bSampleBool = false;

	/** Sample float property that requires a restart */
	UPROPERTY(EditAnywhere, config, Category = "Variables", meta = (ConfigRestartRequired = true))
	float SampleFloatRequireRestart = 0.f;

	/** Or use min, max or clamp values to the settings */
	UPROPERTY(config, EditAnywhere, Category = "Variables", meta = (UIMin = 1, ClampMin = 1))
	int32 ClampedIntSetting = 1;

	/** Sample string list */
	UPROPERTY(config, EditAnywhere, Category = "Variables")
	TArray<FString> SampleStringList;

	/** We can even use asset references */
	UPROPERTY(config, EditAnywhere, Category = "Materials", meta = (AllowedClasses = "MaterialInterface"))
	FStringAssetReference StringMaterialAssetReference;
};
