#pragma once

#include "CoreMinimal.h"
#include "Widgets/SCompoundWidget.h"

class SExampleComplexWidget : public SCompoundWidget
{
public:
	SLATE_BEGIN_ARGS(SExampleComplexWidget)
		{} //
	SLATE_END_ARGS()

	void Construct(const FArguments& InArgs);
protected:
	FSlateFontInfo Font;

	TSharedPtr<STextBlock> TextBlock;
};
