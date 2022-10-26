#pragma once

#include "CoreMinimal.h"
#include "Components/Widget.h"
#include "ExampleCustomPaintWidget.generated.h"

UCLASS()
class UExampleCustomPaintWidget : public UWidget
{
	GENERATED_BODY()
public:
	virtual void ReleaseSlateResources(bool bReleaseChildren) override;

protected:
	UPROPERTY(EditAnywhere)
	FText ExampleText;
	
	//~ Begin UWidget Interface
	virtual TSharedRef<SWidget> RebuildWidget() override;
	//~ End UWidget Interface
	
	TSharedPtr<class SExampleCustomPaintWidget> MyExampleCustomPaintWidget;
};
