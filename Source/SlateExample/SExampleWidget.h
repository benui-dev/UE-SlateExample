#pragma once

#include "CoreMinimal.h"
#include "Widgets/SCompoundWidget.h"

class SExampleWidget : public SCompoundWidget
{
public:
	SLATE_BEGIN_ARGS(SExampleWidget)
		// : _Text(FText::GetEmpty()) // optional
		{} //
		SLATE_ARGUMENT(FText, LabelText)
	SLATE_END_ARGS()

	void Construct(const FArguments& InArgs);
protected:
	FText LabelText;
};
