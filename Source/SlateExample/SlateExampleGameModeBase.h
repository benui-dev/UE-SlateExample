#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "SlateExampleGameModeBase.generated.h"

UCLASS()
class ASlateExampleGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
public:
	ASlateExampleGameModeBase(const FObjectInitializer& ObjectInitializer);
	
protected:
	virtual void BeginPlay() override;
};
