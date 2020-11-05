// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class ExhibitionOfCrafts : ModuleRules
{
	public ExhibitionOfCrafts(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "PhysXVehicles" });
	}
}
