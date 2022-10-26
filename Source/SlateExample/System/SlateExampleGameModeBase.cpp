#include "SlateExampleGameModeBase.h"

#include "BUIHUD.h"

ASlateExampleGameModeBase::ASlateExampleGameModeBase(const FObjectInitializer& ObjectInitializer)
: Super(ObjectInitializer)
{
	HUDClass = ABUIHUD::StaticClass();
}

void ASlateExampleGameModeBase::BeginPlay()
{
	Super::BeginPlay();

}
