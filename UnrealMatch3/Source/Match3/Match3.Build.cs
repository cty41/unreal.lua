// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.IO;

public class Match3 : ModuleRules
{
     private string LuaLibPath
    {
        get { return Path.GetFullPath(Path.Combine(ModuleDirectory, "../../Lua/")); }
    }
	public Match3(TargetInfo Target)
	{
		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "Paper2D", "UMG" });

		//PrivateDependencyModuleNames.AddRange(new string[] {  });

		// Uncomment if you are using Slate UI
		PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });
		
        DynamicallyLoadedModuleNames.Add("OnlineSubsystemNull");

        if (Target.Platform == UnrealTargetPlatform.IOS)
        {
            PrivateDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "OnlineSubsystem" });
            DynamicallyLoadedModuleNames.Add("IOSAdvertising");
        }
        else if (Target.Platform == UnrealTargetPlatform.Android)
        {
            PrivateDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "OnlineSubsystem" });
            DynamicallyLoadedModuleNames.Add("AndroidAdvertising");
        }
        
        PublicIncludePaths.Add(Path.Combine(LuaLibPath, "Include"));
         if (Target.Platform == UnrealTargetPlatform.Win64)
        {
            PublicAdditionalLibraries.Add(Path.Combine(LuaLibPath, "Lib", "Win64", "Release", "lua.lib"));
        }
        else if (Target.Platform == UnrealTargetPlatform.Mac)
        {
            PublicAdditionalLibraries.Add(Path.Combine(LuaLibPath, "Lib", "Mac", "Release", "lua.a"));
        }
	}
}
