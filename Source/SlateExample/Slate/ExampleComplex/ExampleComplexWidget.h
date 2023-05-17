#pragma once

#include "CoreMinimal.h"
#include "Components/Widget.h"
#include "ExampleComplexWidget.generated.h"

UCLASS()
class UExampleComplexWidget : public UWidget
{
private:
	GENERATED_BODY()
public:
	virtual void ReleaseSlateResources(bool bReleaseChildren) override;
	virtual void SynchronizeProperties() override;

protected:
	//~ Begin UWidget Interface
	virtual TSharedRef<SWidget> RebuildWidget() override;
	//~ End UWidget Interface
	
	TSharedPtr<class SExampleComplexWidget> MyExampleComplexWidget;
};
