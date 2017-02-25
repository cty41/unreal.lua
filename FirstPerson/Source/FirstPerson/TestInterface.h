#pragma once
#include "TestInterface.generated.h"

UINTERFACE(minimalapi)
class UTestInterface : public UInterface
{
	GENERATED_UINTERFACE_BODY()
};

class ITestInterface
{
	GENERATED_IINTERFACE_BODY()
public:
	UFUNCTION(BlueprintNativeEvent)
	bool TestInterface(int i);
};
