// Gradess & Novaturion Company. All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "InputControllable.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UInputControllable : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class MOVEMENTPACK_API IInputControllable
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Movement Pack")
	void AddForward(const float AxisValue);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Movement Pack")
	void AddRight(const float AxisValue);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Movement Pack")
	void AddUp(const float AxisValue);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Movement Pack")
	void AddTurnAround(const float AxisValue);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Movement Pack")
	void AddLookUp(const float AxisValue);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Movement Pack")
	void AddScroll(const float AxisValue);
	
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Movement Pack")
	void Fire();
	
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Movement Pack")
	void Interact();
	
};
