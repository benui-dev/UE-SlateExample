#pragma once

#include "CoreMinimal.h"
#include "Widgets/SCompoundWidget.h"

class SExampleWidget : public SCompoundWidget
{
public:
	SLATE_BEGIN_ARGS(SExampleWidget)
		{} //
		SLATE_ARGUMENT(FText, LabelText)
	SLATE_END_ARGS()

	void Construct(const FArguments& InArgs);

	void SetText(FText NewText);
protected:
	FText Text;
	
	FSlateFontInfo Font;

	TSharedPtr<STextBlock> TextBlock;
};
