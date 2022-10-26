#pragma once

#include "CoreMinimal.h"
#include "Components/Widget.h"
#include "ExampleListWidget.generated.h"

UCLASS()
class UExampleListWidget : public UWidget
{
	GENERATED_BODY()
public:
	virtual void ReleaseSlateResources(bool bReleaseChildren) override;
	virtual void SynchronizeProperties() override;

protected:
	UPROPERTY(EditAnywhere, meta=(UIMin=0, ClampMin=0))
	int32 ButtonCount = 1;
	
	//~ Begin UWidget Interface
	virtual TSharedRef<SWidget> RebuildWidget() override;
	//~ End UWidget Interface
	
	TSharedPtr<class SExampleListWidget> MyExampleListWidget;
};
