#include "SExampleWidget.h"
#include "SlateOptMacros.h"

BEGIN_SLATE_FUNCTION_BUILD_OPTIMIZATION

void SExampleWidget::Construct(const FArguments& InArgs)
{
	Text = InArgs._LabelText;
	
	ChildSlot
	[
		SAssignNew(TextBlock, STextBlock)
		.Text(InArgs._LabelText)
	];
}

void SExampleWidget::SetText(FText NewText)
{
	Text = NewText;
	TextBlock->SetText(Text);
}

END_SLATE_FUNCTION_BUILD_OPTIMIZATION
