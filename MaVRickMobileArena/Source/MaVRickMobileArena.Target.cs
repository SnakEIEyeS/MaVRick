// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class MaVRickMobileArenaTarget : TargetRules
{
	public MaVRickMobileArenaTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		ExtraModuleNames.Add("MaVRickMobileArena");
	}
}
