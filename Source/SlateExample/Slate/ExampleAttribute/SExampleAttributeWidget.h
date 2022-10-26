#pragma once

#include "CoreMinimal.h"
#include "Misc/Attribute.h"
#include "Widgets/SCompoundWidget.h"

class SExampleAttributeWidget : public SCompoundWidget
{
	SLATE_DECLARE_WIDGET(SExampleAttributeWidget, SCompoundWidget);
public:
	SLATE_BEGIN_ARGS(SExampleAttributeWidget)
		{}
		SLATE_ATTRIBUTE(FColor, ColorSlateAttribute)
		SLATE_ATTRIBUTE(FColor, ColorRegularAttribute)
	SLATE_END_ARGS()
	
	SExampleAttributeWidget();
	void Construct(const FArguments& InArgs);
protected:
	TSlateAttribute<FColor> ColorSlateAttribute;
	TAttribute<FColor> ColorRegularAttribute;

	TSharedPtr<SImage> RegularAttributeImage;
	TSharedPtr<SImage> SlateAttributeImage;
};
