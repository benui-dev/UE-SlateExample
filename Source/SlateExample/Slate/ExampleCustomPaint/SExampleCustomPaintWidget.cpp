#include "SExampleCustomPaintWidget.h"
#include "SlateOptMacros.h"

BEGIN_SLATE_FUNCTION_BUILD_OPTIMIZATION

void SExampleCustomPaintWidget::Construct(const FArguments& InArgs)
{
	OnHitWall = InArgs._OnHitWall;
}

FVector2D SExampleCustomPaintWidget::ComputeDesiredSize(float Scale) const
{
	return FVector2D(200, 40);
}

int32 SExampleCustomPaintWidget::OnPaint(const FPaintArgs& Args, const FGeometry& AllottedGeometry,
                                         const FSlateRect& MyCullingRect, FSlateWindowElementList& OutDrawElements, int32 LayerId,
                                         const FWidgetStyle& InWidgetStyle, bool bParentEnabled) const
{
	FSlateDrawElement::MakeText(
		OutDrawElements,
		LayerId,
		AllottedGeometry.ToPaintGeometry(),
		Text,
		Font);

	return LayerId;
}

END_SLATE_FUNCTION_BUILD_OPTIMIZATION
