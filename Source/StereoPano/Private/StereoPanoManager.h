// Copyright 2015 Kite & Lightning.  All rights reserved.

#pragma once
#include "SceneCapturer.h"

class FStereoPanoManager
{
private:
	FAutoConsoleCommand PanoramicScreenshotCommand;
	FAutoConsoleCommand PanoramicMovieCommand;
	FAutoConsoleCommand PanoramicQualityCommand;
    FAutoConsoleCommand PanoramicPauseCommand;

public:
    void PanoramicScreenshot( const TArray<FString>& Args );
	void PanoramicScreenshot( const int32 InStartFrame, const int32 InEndFrame, FStereoCaptureDoneDelegate& InStereoCaptureDoneDelegate);
	void PanoramicMovie( const TArray<FString>& Args );
	void PanoramicQuality( const TArray<FString>& Args );
    void PanoramicTogglePause(const TArray<FString>& Args);

	static IConsoleVariable* HorizontalAngularIncrement;
	static IConsoleVariable* VerticalAngularIncrement;
	static IConsoleVariable* StepCaptureWidth;
	static IConsoleVariable* EyeSeparation;
	static IConsoleVariable* ForceAlpha;
	static IConsoleVariable* GenerateDebugImages;
	static IConsoleVariable* ConcurrentCaptures;
    static IConsoleVariable* CaptureHorizontalFOV;
    static IConsoleVariable* CaptureSlicePixelWidth;
    static IConsoleVariable* EnableBilerp;
    static IConsoleVariable* SuperSamplingMethod;
    static IConsoleVariable* OutputDir;
    static IConsoleVariable* ShouldOverrideInitialYaw;
    static IConsoleVariable* ForcedInitialYaw;
  //  static IConsoleVariable* FadeStereoToZeroAtSides;
    static IConsoleVariable* FadeStereoToZeroByVertical;

	FStereoPanoManager()
		: PanoramicScreenshotCommand(
			TEXT( "SP.PanoramicScreenshot" ),
			*NSLOCTEXT( "StereoPano", "CommandText_ScreenShot", "Takes a panoramic screenshot" ).ToString(),
			FConsoleCommandWithArgsDelegate::CreateRaw( this, &FStereoPanoManager::PanoramicScreenshot ) )
		, PanoramicMovieCommand(
			TEXT( "SP.PanoramicMovie" ),
			*NSLOCTEXT( "StereoPano", "CommandText_MovieCapture", "Takes a sequence of panoramic screenshots" ).ToString(),
			FConsoleCommandWithArgsDelegate::CreateRaw( this, &FStereoPanoManager::PanoramicMovie ) )
		, PanoramicQualityCommand(
			TEXT( "SP.PanoramicQuality" ),
			*NSLOCTEXT( "StereoPano", "CommandText_Quality", "Sets the quality of the panoramic screenshot to 'preview | average | improved'" ).ToString(),
			FConsoleCommandWithArgsDelegate::CreateRaw( this, &FStereoPanoManager::PanoramicQuality ) )
		, PanoramicPauseCommand(
            TEXT( "SP.TogglePause" ),
			*NSLOCTEXT( "StereoPano", "CommandText_PauseGame", "Toggles Pausing/Unpausing of the game through StereoPano Plugin" ).ToString(),
			FConsoleCommandWithArgsDelegate::CreateRaw( this, &FStereoPanoManager::PanoramicTogglePause ) )
		, SceneCapturer( NULL )
	{
	}

	void Cleanup();

	UPROPERTY()
	class USceneCapturer* SceneCapturer;
};