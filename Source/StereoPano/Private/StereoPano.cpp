// Copyright 2015 Kite & Lightning.  All rights reserved.

#include "StereoPanoPrivatePCH.h"

TSharedPtr<FStereoPanoManager> StereoPanoManager;

/** IModuleInterface - initialize the module */
void FStereoPanoModule::StartupModule()
{
	StereoPanoManager = MakeShareable( new FStereoPanoManager() );
}

/** IModuleInterface - shutdown the module */
void FStereoPanoModule::ShutdownModule()
{
	if( StereoPanoManager.IsValid() )
	{
		StereoPanoManager.Reset();
	}
}

TSharedPtr<FStereoPanoManager> FStereoPanoModule::Get()
{
	check( StereoPanoManager.IsValid() );
	return StereoPanoManager;
}

IMPLEMENT_MODULE( FStereoPanoModule, StereoPano )
