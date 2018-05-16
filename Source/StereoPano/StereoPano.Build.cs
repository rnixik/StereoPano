// Copyright 2015 Kite & Lightning.  All rights reserved.

using UnrealBuildTool;

namespace UnrealBuildTool.Rules
{
	public class StereoPano : ModuleRules
	{
		public StereoPano(ReadOnlyTargetRules Target) : base(Target)
		{
			PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

			PrivateIncludePaths.Add("Runtime/StereoPano/Private");

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