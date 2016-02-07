// Copyright 2015 Kite & Lightning.  All rights reserved.

namespace UnrealBuildTool.Rules
{
	public class StereoPano : ModuleRules
	{
		public StereoPano( TargetInfo Target )
		{
			PrivateIncludePaths.AddRange(
				new string[] {
					"Runtime/StereoPano/Private",
				}
			);

			PrivateDependencyModuleNames.AddRange(
				new string[] {
					"Core",
					"CoreUObject",
					"Engine",
					"ImageWrapper",
					"InputCore",
					"RenderCore",
					"ShaderCore",
					"RHI",
				}
			);
		}
	}
}