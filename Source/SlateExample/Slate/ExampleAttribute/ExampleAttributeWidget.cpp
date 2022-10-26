#include "ExampleAttributeWidget.h"
#include "SExampleAttributeWidget.h"

void UExampleAttributeWidget::ReleaseSlateResources(bool bReleaseChildren)
{
	Super::ReleaseSlateResources(bReleaseChildren);
	
	MyExampleAttributeWidget.Reset();
}

TSharedRef<SWidget> UExampleAttributeWidget::RebuildWidget()
{
	MyExampleAttributeWidget = SNew(SExampleAttributeWidget);

	return MyExampleAttributeWidget.ToSharedRef();
}
