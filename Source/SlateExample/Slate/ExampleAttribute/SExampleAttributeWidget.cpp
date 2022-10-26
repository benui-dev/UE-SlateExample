#include "SExampleAttributeWidget.h"
#include "Widgets/SBoxPanel.h"
#include "SlateOptMacros.h"
#include "Widgets/Images/SImage.h"

BEGIN_SLATE_FUNCTION_BUILD_OPTIMIZATION

SLATE_IMPLEMENT_WIDGET(SExampleAttributeWidget)
void SExampleAttributeWidget::PrivateRegisterAttributes(FSlateAttributeInitializer& AttributeInitializer)
{
	SLATE_ADD_MEMBER_ATTRIBUTE_DEFINITION(AttributeInitializer, ColorSlateAttribute, EInvalidateWidgetReason::Paint);
}


SExampleAttributeWidget::SExampleAttributeWidget()
	: ColorSlateAttribute(*this)
{
	
}

void SExampleAttributeWidget::Construct(const FArguments& InArgs)
{
	ColorRegularAttribute = InArgs._ColorRegularAttribute;
	ColorSlateAttribute.Assign(*this, InArgs._ColorSlateAttribute);

	ChildSlot
	[
		SNew(SHorizontalBox)
		+ SHorizontalBox::Slot()
		[
			SAssignNew(RegularAttributeImage, SImage)
		]
		+ SHorizontalBox::Slot()
		[
			SAssignNew(SlateAttributeImage, SImage)
		]
	];

}

END_SLATE_FUNCTION_BUILD_OPTIMIZATION
