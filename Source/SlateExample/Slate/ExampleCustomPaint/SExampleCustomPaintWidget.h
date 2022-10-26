#pragma once

#include "CoreMinimal.h"
#include "Widgets/SLeafWidget.h"

class SExampleCustomPaintWidget : public SLeafWidget
{
public:
	SLATE_BEGIN_ARGS(SExampleCustomPaintWidget)
		{}
		SLATE_EVENT(FSimpleDelegate, OnHitWall)
	SLATE_END_ARGS()

	void Construct(const FArguments& InArgs);
	
	virtual FVector2D ComputeDesiredSize(float Scale) const override;
	
	virtual int32 OnPaint(const FPaintArgs& Args, const FGeometry& AllottedGeometry, const FSlateRect& MyCullingRect,
		FSlateWindowElementList& OutDrawElements, int32 LayerId, const FWidgetStyle& InWidgetStyle,
		bool bParentEnabled) const override;
protected:
	FText Text;
	
	FSlateFontInfo Font;
	
	FSimpleDelegate OnHitWall;

	TSharedPtr<STextBlock> TextBlock;
};
