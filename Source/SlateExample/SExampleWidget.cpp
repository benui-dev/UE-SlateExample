#include "SExampleWidget.h"
#include "SlateOptMacros.h"

BEGIN_SLATE_FUNCTION_BUILD_OPTIMIZATION

void SExampleWidget::Construct(const FArguments& InArgs)
{
	ChildSlot
	[
		SNew(STextBlock)
		//.Text(NSLOCTEXT("Example", "HelloWorld", "Hello world!"))
		.Text(InArgs._LabelText)
	];
}

END_SLATE_FUNCTION_BUILD_OPTIMIZATION
