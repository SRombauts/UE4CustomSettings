// Copyright 2018 Sebastien Rombauts (sebastien.rombauts@gmail.com)

#include "CustomSettingsGameModeBase.h"
#include "CustomGameSettings.h"


void ACustomSettingsGameModeBase::StartPlay()
{
	Super::StartPlay();

	UE_LOG(LogTemp, Warning, TEXT("UCustomGameSettings::bSampleBool=%d"), GetDefault<UCustomGameSettings>()->bSampleBool);
	UE_LOG(LogTemp, Warning, TEXT("UCustomGameSettings::SampleFloatRequireRestart=%s"), *FString::SanitizeFloat(GetDefault<UCustomGameSettings>()->SampleFloatRequireRestart));
	const TArray<FString>& SampleStringList = GetDefault<UCustomGameSettings>()->SampleStringList;
	for (const FString& SampleString : SampleStringList)
	{
		UE_LOG(LogTemp, Warning, TEXT("UCustomGameSettings::SampleString=%s"), *SampleString);
	}
}