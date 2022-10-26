#pragma once

#include "CoreMinimal.h"
#include "Components/Widget.h"
#include "ExampleWidget.generated.h"

UCLASS()
class UExampleWidget : public UWidget
{
private:
	GENERATED_BODY()
public:
	virtual void ReleaseSlateResources(bool bReleaseChildren) override;
	virtual void SynchronizeProperties() override;

protected:
	UPROPERTY(EditAnywhere)
	FText ExampleText;
	
	//~ Begin UWidget Interface
	virtual TSharedRef<SWidget> RebuildWidget() override;
	//~ End UWidget Interface
	
	TSharedPtr<class SExampleWidget> MyExampleWidget;
};
