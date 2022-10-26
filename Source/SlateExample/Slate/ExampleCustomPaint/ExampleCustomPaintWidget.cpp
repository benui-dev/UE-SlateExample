#include "ExampleCustomPaintWidget.h"
#include "SExampleCustomPaintWidget.h"

void UExampleCustomPaintWidget::ReleaseSlateResources(bool bReleaseChildren)
{
	Super::ReleaseSlateResources(bReleaseChildren);
	
	MyExampleCustomPaintWidget.Reset();
}

TSharedRef<SWidget> UExampleCustomPaintWidget::RebuildWidget()
{
	MyExampleCustomPaintWidget = SNew(SExampleCustomPaintWidget);

	return MyExampleCustomPaintWidget.ToSharedRef();
}
