# StereoPano plugin for Unreal Engine 4

This is fixed clone of Experimental StereoPanorama plugin for UE 4.11.
Provides console command to capture 360 Stereo Panorama in spherical format.
Result is two png images.

This version works with UE 4.10 and supports fading stereo effect for vertical top and bottom.

## Compile
01. Copy plugin into Plugins folder under you new C++ project or existing.
02. Compile project

## Workflow
01. Copy compiled plugin into Plugins forlder under you Project folder (BP or C++)
02. Run project
03. Ensure that you have PlayerController. Move it to point where you want to capture.
04. Start project in Editor with Play
05. Open Output Window in Editor. Options are available with prefix `SP.`, main command is `SP.PanoramicScreenshot`
06. Wait (with one degree step for horizontal and verticcal can took about 2 hours)
07. Find Left_00000.png and Right_00000.png in %PROJECT_PATH%/Saved/Screenshots/Windows/%DATE%/


##Authors
Authors of original plugin are `Kite & Lightning`