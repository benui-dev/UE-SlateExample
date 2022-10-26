#pragma once

#include "CoreMinimal.h"
#include "Widgets/SLeafWidget.h"

class SExampleListWidget : public SCompoundWidget
{
public:
	SLATE_BEGIN_ARGS(SExampleListWidget)
		{}
		SLATE_ARGUMENT(int32, ButtonCount)
	SLATE_END_ARGS()

	void Construct(const FArguments& InArgs);

	void RebuildFromData();
	void SetButtonCount(int32 ButtonCount);
protected:
	TSharedPtr<SVerticalBox> ListBox;

	int32 ButtonCount = 0;
};
