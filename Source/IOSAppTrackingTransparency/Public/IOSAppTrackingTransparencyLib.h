// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "IOSAppTrackingTransparencyLib.generated.h"

UENUM(BlueprintType)
enum class EIOSAppTrackingAuthStatus : uint8
{
	Restricted,
	NotDetermined,
	Denied,
	Authorized
};

UCLASS()
class IOSAPPTRACKINGTRANSPARENCY_API UIOSAppTrackingTransparencyLib : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintCallable)
	static EIOSAppTrackingAuthStatus RequestIOSAppTracking();

	UFUNCTION(BlueprintPure)
    static EIOSAppTrackingAuthStatus GetIOSAppTrackingAuthStatus();
	
};
