﻿#include "BUIHUD.h"
#include "SExampleWidget.h"
#include "Widgets/SViewport.h"

ABUIHUD::ABUIHUD(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

void ABUIHUD::BeginPlay()
{
	Super::BeginPlay();

	MyWidget = SNew(SExampleWidget)
		.LabelText(NSLOCTEXT("Example","OhNo","OhNo"));

	UGameViewportClient* ViewportClient = GetWorld()->GetGameViewport();
	ViewportClient->AddViewportWidgetContent(MyWidget.ToSharedRef());
}
