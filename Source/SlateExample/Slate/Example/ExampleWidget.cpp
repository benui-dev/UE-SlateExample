#include "ExampleWidget.h"
#include "SExampleWidget.h"

void UExampleWidget::ReleaseSlateResources(bool bReleaseChildren)
{
	Super::ReleaseSlateResources(bReleaseChildren);
	
	MyExampleWidget.Reset();
}

void UExampleWidget::SynchronizeProperties()
{
	Super::SynchronizeProperties();
	
	if (MyExampleWidget)
	{
		MyExampleWidget->SetText(ExampleText);
	}
}

TSharedRef<SWidget> UExampleWidget::RebuildWidget()
{
	MyExampleWidget = SNew(SExampleWidget)
		.LabelText(ExampleText);

	return MyExampleWidget.ToSharedRef();
}
