#include "ExampleComplexWidget.h"
#include "SExampleComplexWidget.h"

void UExampleComplexWidget::ReleaseSlateResources(bool bReleaseChildren)
{
	Super::ReleaseSlateResources(bReleaseChildren);
	
	MyExampleComplexWidget.Reset();
}

void UExampleComplexWidget::SynchronizeProperties()
{
	Super::SynchronizeProperties();
}

TSharedRef<SWidget> UExampleComplexWidget::RebuildWidget()
{
	MyExampleComplexWidget = SNew(SExampleComplexWidget);
	
	return MyExampleComplexWidget.ToSharedRef();
}
