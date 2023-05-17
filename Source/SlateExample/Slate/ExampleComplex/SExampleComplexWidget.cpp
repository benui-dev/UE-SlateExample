#include "SExampleComplexWidget.h"
#include "SlateOptMacros.h"
#include "Widgets/Images/SImage.h"

BEGIN_SLATE_FUNCTION_BUILD_OPTIMIZATION

void SExampleComplexWidget::Construct(const FArguments& InArgs)
{
	TSharedPtr<SHorizontalBox> Box = SNew(SHorizontalBox);
	ChildSlot
	[
		Box.ToSharedRef()
	];

	auto& FirstSlot = Box->AddSlot()
		.AutoWidth()
		.Padding(5);
	
	FirstSlot[ SNew(SImage) ];

	/*
	ChildSlot
	[
		SNew(SHorizontalBox)
		+ SHorizontalBox::Slot()
		.AutoWidth()
		.Padding(5)
		[
			SNew(SImage)
		]
		+ SHorizontalBox::Slot()
		.FillWidth(1.0f)
		.Padding(10)
		[
			SNew(SBox)
			.MinDesiredWidth(200)
			[
				SNew(SButton)
				.Text(NSLOCTEXT("Ex","Click","Click me"))
			]
		]
	];
	*/
}

END_SLATE_FUNCTION_BUILD_OPTIMIZATION
