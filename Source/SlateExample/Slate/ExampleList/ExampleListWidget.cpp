#include "ExampleListWidget.h"
#include "SExampleListWidget.h"

void UExampleListWidget::ReleaseSlateResources(bool bReleaseChildren)
{
	Super::ReleaseSlateResources(bReleaseChildren);
	
	MyExampleListWidget.Reset();
}

void UExampleListWidget::SynchronizeProperties()
{
	Super::SynchronizeProperties();
	if (MyExampleListWidget)
	{
		MyExampleListWidget->SetButtonCount(ButtonCount);
	}
}

TSharedRef<SWidget> UExampleListWidget::RebuildWidget()
{
	MyExampleListWidget = SNew(SExampleListWidget)
		.ButtonCount(ButtonCount);

	return MyExampleListWidget.ToSharedRef();
}
