// Copyright 2018 Sebastien Rombauts (sebastien.rombauts@gmail.com)

using UnrealBuildTool;
using System.Collections.Generic;

public class CustomSettingsTarget : TargetRules
{
	public CustomSettingsTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;

		ExtraModuleNames.AddRange( new string[] { "CustomSettings" } );
	}
}
