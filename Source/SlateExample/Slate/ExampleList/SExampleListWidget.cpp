#include "SExampleListWidget.h"
#include "SlateOptMacros.h"

BEGIN_SLATE_FUNCTION_BUILD_OPTIMIZATION

void SExampleListWidget::Construct(const FArguments& InArgs)
{
	ButtonCount = FMath::Clamp<int32>(InArgs._ButtonCount, 0, 20);

	ChildSlot
	[
		SAssignNew(ListBox, SVerticalBox)
	];

	RebuildFromData();
}

void SExampleListWidget::RebuildFromData()
{
	ListBox->ClearChildren();
	for (int32 i = 0; i < ButtonCount; ++i)
	{
		ListBox->AddSlot()
		[
			SNew(SButton)
			.Text(FText::FromString(FString::Printf(TEXT("%d"), i)))
		];
	}
}

void SExampleListWidget::SetButtonCount(int32 InButtonCount)
{
	ButtonCount = FMath::Clamp<int32>(InButtonCount,0,20);
	
	RebuildFromData();
}

END_SLATE_FUNCTION_BUILD_OPTIMIZATION
