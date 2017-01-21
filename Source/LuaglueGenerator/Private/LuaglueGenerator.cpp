// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.
#define _projectname "ShooterGame"
#include "LuaglueGeneratorPrivatePCH.h"
#include "ScriptCodeGeneratorBase.h"
#include "LuaScriptCodeGenerator.h"
#include "IProjectManager.h"
#include "Runtime/Core/Public/Features/IModularFeatures.h"

DEFINE_LOG_CATEGORY(LogScriptGenerator);

class FLuaglueGenerator : public ILuaglueGenerator
{
	/** Specialized script code generator */
	TAutoPtr<FScriptCodeGeneratorBase> CodeGenerator;

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;

	/** ILuaglueGenerator interface */
	virtual FString GetGeneratedCodeModuleName() const override { return TEXT(_projectname); }
	virtual bool ShouldExportClassesForModule(const FString& ModuleName, EBuildModuleType::Type ModuleType, const FString& ModuleGeneratedIncludeDirectory) const override;
	virtual bool SupportsTarget(const FString& TargetName) const override;
	virtual void Initialize(const FString& RootLocalPath, const FString& RootBuildPath, const FString& OutputDirectory, const FString& IncludeBase) override;
	virtual void ExportClass(UClass* Class, const FString& SourceHeaderFilename, const FString& GeneratedHeaderFilename, bool bHasChanged) override;
	virtual void FinishExport() override;
	virtual FString GetGeneratorName() const override;
};

IMPLEMENT_MODULE( FLuaglueGenerator, LuaglueGenerator )


void FLuaglueGenerator::StartupModule()
{
	// Register ourselves as an editor feature
	IModularFeatures::Get().RegisterModularFeature(TEXT("ScriptGenerator"), this);
}

void FLuaglueGenerator::ShutdownModule()
{
	CodeGenerator.Reset();

	// Unregister our feature
	IModularFeatures::Get().UnregisterModularFeature(TEXT("ScriptGenerator"), this);
}

FString FLuaglueGenerator::GetGeneratorName() const
{
	return TEXT("Lua Code Generator Plugin");
}

void FLuaglueGenerator::Initialize(const FString& RootLocalPath, const FString& RootBuildPath, const FString& OutputDirectory, const FString& IncludeBase)
{
	UE_LOG(LogScriptGenerator, Log, TEXT("Using Lua Script Generator."));
	CodeGenerator = new FLuaScriptCodeGenerator(RootLocalPath, RootBuildPath, OutputDirectory, IncludeBase);
}

bool FLuaglueGenerator::ShouldExportClassesForModule(const FString& ModuleName, EBuildModuleType::Type ModuleType, const FString& ModuleGeneratedIncludeDirectory) const
{ 
	bool bCanExport = (ModuleType == EBuildModuleType::EngineRuntime || ModuleType == EBuildModuleType::GameRuntime);
	if (bCanExport)
	{
		// Only export functions from selected modules
		static struct FSupportedModules
		{
			TArray<FString> SupportedScriptModules;
			FSupportedModules()
			{
				GConfig->GetArray(TEXT("Plugins"), TEXT("ScriptSupportedModules"), SupportedScriptModules, GEngineIni);
			}
		} SupportedModules;
		bCanExport = SupportedModules.SupportedScriptModules.Num() == 0 || SupportedModules.SupportedScriptModules.Contains(ModuleName);
	}
	return bCanExport;
}

void FLuaglueGenerator::ExportClass(UClass* Class, const FString& SourceHeaderFilename, const FString& GeneratedHeaderFilename, bool bHasChanged)
{
	CodeGenerator->ExportClass(Class, SourceHeaderFilename, GeneratedHeaderFilename, bHasChanged);
}

void FLuaglueGenerator::FinishExport()
{
	CodeGenerator->FinishExport();
}

bool FLuaglueGenerator::SupportsTarget(const FString& TargetName) const
{
	return true;
}