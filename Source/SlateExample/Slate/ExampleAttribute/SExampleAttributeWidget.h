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
		SLATE_ATTRIBUTE(FSlateColor, ColorSlateAttribute)
		SLATE_ATTRIBUTE(FSlateColor, ColorRegularAttribute)
	SLATE_END_ARGS()
	
	SExampleAttributeWidget();
	void Construct(const FArguments& InArgs);
protected:
	TSlateAttribute<FSlateColor> ColorSlateAttribute;
	TAttribute<FSlateColor> ColorRegularAttribute;

	TSharedPtr<SImage> RegularAttributeImage;
	TSharedPtr<SImage> SlateAttributeImage;
};
