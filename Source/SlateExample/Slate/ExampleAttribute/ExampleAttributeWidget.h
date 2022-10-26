#pragma once

#include "CoreMinimal.h"
#include "Components/Widget.h"
#include "ExampleAttributeWidget.generated.h"

UCLASS()
class UExampleAttributeWidget : public UWidget
{
	GENERATED_BODY()
public:
	virtual void ReleaseSlateResources(bool bReleaseChildren) override;

protected:
	//~ Begin UWidget Interface
	virtual TSharedRef<SWidget> RebuildWidget() override;
	//~ End UWidget Interface
	
	TSharedPtr<class SExampleAttributeWidget> MyExampleAttributeWidget;
};
