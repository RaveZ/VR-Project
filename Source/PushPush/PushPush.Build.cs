// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class PushPush : ModuleRules
{
	public PushPush(ReadOnlyTargetRules Target) : base(Target)
	{
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "NavigationSystem", "AIModule", "Niagara", "EnhancedInput", "UMG"});
        PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });
        DynamicallyLoadedModuleNames.Add("OnlineSubsystemNull");

        //if( Target.Platform == UnrealTargetPlatform.Win64 ||
        //	Target.Platform == UnrealTargetPlatform.Mac)
        //      {
        //	if(UEBuildConfiguration.bCompileSteamOSS == true)
        //          {
        //		DynamicallyLoadedModuleNames.Add("OnlineSubsystemSteam");
        //	}
        //      }
        //if(Target.Platform == UnrealTargetPlatform.IOS)
        //      {
        //	PrivateDependencyModulesNames.AddRange(new String[] { "Core", "CoreUObject", "Engine", "OnlineSubsystem" });
        //	DynamicallyLoadedModuleNames.Add("OnlineSubsystemFacebook");
        //	DynamicallyLoadedModuleNames.Add("OnlineSubsystemIOS");
        //	DynamicallyLoadedModuleNames.Add("IOSAdvertising");
        //}
        if (Target.Platform == UnrealTargetPlatform.Android)
        {
            PrivateDependencyModuleNames.Add("OnlineSubsystem");
            PrivateDependencyModuleNames.Add("OnlineSubsystemGooglePlay");
        }
    }
}
