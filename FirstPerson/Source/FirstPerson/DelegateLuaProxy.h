#pragma once
#include "FirstPerson.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/SlateCore/Public/Fonts/FontBulkData.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/SlateCore/Public/Fonts/FontProviderInterface.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/SlateCore/Public/Styling/SlateWidgetStyleAsset.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/SlateCore/Public/Styling/SlateWidgetStyleContainerBase.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/SlateCore/Public/Styling/SlateWidgetStyleContainerInterface.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Slate/Public/Framework/Styling/ButtonWidgetStyle.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Slate/Public/Framework/Styling/CheckBoxWidgetStyle.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Slate/Public/Framework/Styling/ComboBoxWidgetStyle.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Slate/Public/Framework/Styling/ComboButtonWidgetStyle.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Slate/Public/Framework/Styling/EditableTextBoxWidgetStyle.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Slate/Public/Framework/Styling/EditableTextWidgetStyle.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Slate/Public/Framework/Styling/ProgressWidgetStyle.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Slate/Public/Framework/Styling/ScrollBarWidgetStyle.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Slate/Public/Framework/Styling/ScrollBoxWidgetStyle.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Slate/Public/Framework/Styling/SpinBoxWidgetStyle.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Slate/Public/Framework/Styling/TextBlockWidgetStyle.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/GameFramework/Actor.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Components/ActorComponent.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/AI/AISystemBase.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Animation/AnimationAsset.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Animation/AnimClassData.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Animation/AnimClassInterface.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Animation/AnimCompress.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Animation/AnimInstance.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Animation/AnimMetaData.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Animation/AnimNotifies/AnimNotify.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Animation/AnimNotifies/AnimNotifyState.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Animation/AnimSet.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/EditorFramework/AssetImportData.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Animation/AssetMappingTable.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Engine/AssetUserData.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Tests/AutomationTestSettings.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/AI/Navigation/AvoidanceManager.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Engine/BlendableInterface.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Animation/BlendProfile.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Kismet/BlueprintAsyncActionBase.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Engine/BlueprintCore.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Kismet/BlueprintFunctionLibrary.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Engine/BlueprintGeneratedClass.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/PhysicsEngine/BodySetup.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Animation/AnimData/BoneMaskFilter.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Engine/BookMark.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Engine/Breakpoint.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Engine/BrushBuilder.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Slate/ButtonStyleAsset.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Camera/CameraAnim.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Camera/CameraAnimInst.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Camera/CameraModifier.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Camera/CameraShake.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Engine/Canvas.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Engine/Channel.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/GameFramework/CheatManager.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Slate/CheckboxStyleAsset.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Commandlets/Commandlet.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Engine/Console.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Curves/CurveBase.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Engine/CurveTable.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/GameFramework/DamageType.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Engine/DataAsset.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Engine/DataTable.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Engine/DestructibleFractureSettings.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Engine/DeveloperSettings.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/DeviceProfiles/DeviceProfileManager.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Sound/DialogueVoice.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Sound/DialogueWave.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Distributions/Distribution.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Engine/DPICustomScalingRule.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Engine/DynamicBlueprintBinding.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/EdGraph/EdGraph.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/EdGraph/EdGraphNode.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/EdGraph/EdGraphPin.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/EdGraph/EdGraphSchema.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Engine/EndUserSettings.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Engine/Engine.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Exporters/Exporter.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Engine/Font.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Engine/FontImportOptions.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/GameFramework/ForceFeedbackEffect.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Engine/GameInstance.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/GameFramework/GameUserSettings.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Haptics/HapticFeedbackEffect_Base.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Engine/ImportantToggleSettingInterface.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Engine/InheritableComponentHandler.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/GameFramework/InputSettings.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Interfaces/Interface_AssetUserData.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Interfaces/Interface_PostProcessVolume.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Engine/InterpCurveEdSetup.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Matinee/InterpData.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Matinee/InterpGroup.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Matinee/InterpGroupInst.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Matinee/InterpTrack.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Matinee/InterpTrackInst.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Engine/IntSerialization.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Layers/Layer.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Engine/Level.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Engine/LevelStreaming.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Lightmass/LightmappedSurfaceCollection.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Lightmass/LightmassPrimitiveSettingsObject.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/GameFramework/LocalMessage.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Engine/MapBuildDataRegistry.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Materials/MaterialExpression.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Materials/MaterialFunction.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Materials/MaterialInterface.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Materials/MaterialParameterCollection.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Materials/MaterialParameterCollectionInstance.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Matinee/MatineeAnimInterface.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Animation/MorphTarget.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/AI/Navigation/NavAgentInterface.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/AI/Navigation/NavAreas/NavArea.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/AI/Navigation/NavCollision.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/AI/Navigation/NavEdgeProviderInterface.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/AI/Navigation/NavigationDataChunk.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/AI/Navigation/NavigationPath.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/AI/Navigation/NavigationPathGenerator.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/AI/Navigation/NavFilters/NavigationQueryFilter.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/AI/Navigation/NavLinkCustomInterface.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/AI/Navigation/NavLinkDefinition.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/AI/Navigation/NavLinkHostInterface.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/AI/Navigation/NavNodeInterface.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/AI/Navigation/NavPathObserverInterface.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/AI/Navigation/NavRelevantInterface.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Engine/NetDriver.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Interfaces/NetworkPredictionInterface.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Engine/ObjectLibrary.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Public/Net/OnlineBlueprintCallProxyBase.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Public/Net/OnlineEngineInterface.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/GameFramework/OnlineSession.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Engine/PackageMapClient.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Particles/ParticleEmitter.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Particles/ParticleLODLevel.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Particles/ParticleModule.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Particles/ParticleSystem.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/PhysicalMaterials/PhysicalMaterial.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/PhysicalMaterials/PhysicalMaterialPropertyBase.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/PhysicsEngine/PhysicsAsset.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/PhysicsEngine/PhysicsCollisionHandler.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/PhysicsEngine/PhysicsConstraintTemplate.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Public/PhysicsSerializer.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Engine/PlatformInterfaceBase.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Engine/PlatformInterfaceWebResponse.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Engine/Player.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/GameFramework/PlayerInput.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Engine/Polys.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Engine/PoseWatch.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Sound/ReverbEffect.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Animation/Rig.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Public/AI/RVOAvoidanceInterface.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/GameFramework/SaveGame.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Engine/SCS_Node.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Engine/Selection.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Engine/SimpleConstructionScript.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Engine/SkeletalMesh.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Engine/SkeletalMeshReductionSettings.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Engine/SkeletalMeshSocket.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Animation/Skeleton.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Slate/SlateBrushAsset.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Public/Slate/SlateTextureAtlasInterface.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Sound/SoundAttenuation.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Sound/SoundBase.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Sound/SoundClass.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Sound/SoundConcurrency.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Sound/SoundEffectBase.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Sound/SoundEffectPreset.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Sound/SoundMix.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Sound/SoundNode.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Sound/SoundSubmix.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Engine/StaticMesh.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Engine/StaticMeshSocket.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Engine/SubDSurface.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Engine/SubsurfaceProfile.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Particles/SubUVAnimation.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Engine/Texture.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Engine/TextureLODSettings.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/EditorFramework/ThumbnailInfo.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Engine/TimelineTemplate.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/GameFramework/TouchInterface.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Engine/UserDefinedEnum.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Engine/UserDefinedStruct.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/VectorField/VectorField.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Vehicles/VehicleWheel.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Public/VisualLogger/VisualLoggerDebugSnapshotInterface.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Engine/World.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Engine/WorldComposition.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Sound/AmbientSound.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Engine/Brush.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Camera/CameraActor.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/GameFramework/Controller.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Engine/DecalActor.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/PhysicsEngine/DestructibleActor.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Engine/DocumentationActor.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Particles/Emitter.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/GameFramework/HUD.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/GameFramework/Info.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Engine/LevelBounds.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Engine/LevelScriptActor.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Engine/Light.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Lightmass/LightmassPortal.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Engine/LODActor.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Materials/MaterialInstanceActor.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Matinee/MatineeActor.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/AI/Navigation/NavigationData.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/AI/Navigation/NavigationGraphNode.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Engine/NavigationObjectBase.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/AI/Navigation/NavigationTestingActor.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/AI/Navigation/NavLinkProxy.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Engine/Note.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/GameFramework/Pawn.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Camera/PlayerCameraManager.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Engine/ReflectionCapture.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/PhysicsEngine/RigidBodyBase.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Engine/SceneCapture.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Animation/SkeletalMeshActor.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Engine/SplineMeshActor.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Engine/StaticMeshActor.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Engine/SubDSurfaceActor.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Engine/TargetPoint.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Engine/TextRenderActor.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Engine/TriggerBase.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/VectorField/VectorFieldVolume.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Engine/BrushShape.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/GameFramework/Volume.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Sound/AudioVolume.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Engine/BlockingVolume.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/GameFramework/CameraBlockingVolume.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Engine/LevelStreamingVolume.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Lightmass/LightmassCharacterIndirectDetailVolume.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Lightmass/LightmassImportanceVolume.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Engine/MeshMergeCullingVolume.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/AI/Navigation/NavMeshBoundsVolume.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/AI/Navigation/NavModifierVolume.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/GameFramework/PhysicsVolume.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Engine/PostProcessVolume.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Lightmass/PrecomputedVisibilityOverrideVolume.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Lightmass/PrecomputedVisibilityVolume.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Engine/PreCullTrianglesVolume.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Engine/TriggerVolume.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/GameFramework/DefaultPhysicsVolume.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/GameFramework/KillZVolume.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/GameFramework/PainCausingVolume.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/GameFramework/PlayerController.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Engine/DebugCameraController.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Particles/EmitterCameraLensEffectBase.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Engine/DebugCameraHUD.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Atmosphere/AtmosphericFog.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Engine/ExponentialHeightFog.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/GameFramework/GameModeBase.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/GameFramework/GameNetworkManager.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/GameFramework/GameSession.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/GameFramework/GameStateBase.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/GameFramework/PlayerState.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Engine/SkyLight.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Engine/WindDirectionalSource.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/GameFramework/WorldSettings.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/GameFramework/GameMode.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/GameFramework/GameState.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Engine/DirectionalLight.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Engine/PointLight.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Engine/SpotLight.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Engine/GeneratedMeshAreaLight.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Matinee/MatineeActorCameraAnim.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/AI/Navigation/AbstractNavData.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/AI/Navigation/NavigationGraph.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/AI/Navigation/RecastNavMesh.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/GameFramework/PlayerStart.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Engine/PlayerStartPIE.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/GameFramework/Character.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/GameFramework/DefaultPawn.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/GameFramework/WheeledVehicle.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/GameFramework/SpectatorPawn.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Engine/BoxReflectionCapture.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Engine/PlaneReflectionCapture.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Engine/SphereReflectionCapture.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/PhysicsEngine/PhysicsConstraintActor.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/PhysicsEngine/RadialForceActor.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Engine/PlanarReflection.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Engine/SceneCapture2D.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Engine/SceneCaptureCube.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Engine/TriggerBox.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Engine/TriggerCapsule.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Engine/TriggerSphere.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Components/ApplicationLifecycleComponent.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Components/InputComponent.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/GameFramework/MovementComponent.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/AI/Navigation/NavigationInvokerComponent.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/AI/Navigation/NavRelevantComponent.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Components/PawnNoiseEmitterComponent.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/PhysicsEngine/PhysicalAnimationComponent.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/PhysicsEngine/PhysicsHandleComponent.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Components/PlatformEventsComponent.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Components/SceneComponent.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Components/TimelineComponent.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Components/InterpToMovementComponent.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/GameFramework/NavMovementComponent.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/GameFramework/ProjectileMovementComponent.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/GameFramework/RotatingMovementComponent.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Vehicles/WheeledVehicleMovementComponent.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/GameFramework/PawnMovementComponent.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/GameFramework/CharacterMovementComponent.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/GameFramework/FloatingPawnMovement.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/GameFramework/SpectatorPawnMovement.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Vehicles/SimpleWheeledVehicleMovementComponent.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Vehicles/WheeledVehicleMovementComponent4W.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/AI/Navigation/NavLinkCustomComponent.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/AI/Navigation/NavModifierComponent.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Atmosphere/AtmosphericFogComponent.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Components/AudioComponent.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Camera/CameraComponent.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Components/ChildActorComponent.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Components/DecalComponent.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Components/ExponentialHeightFogComponent.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Components/LightComponentBase.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Components/LightmassPortalComponent.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/AI/Navigation/NavigationGraphNodeComponent.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/PhysicsEngine/PhysicsConstraintComponent.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/PhysicsEngine/PhysicsSpringComponent.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/PhysicsEngine/PhysicsThrusterComponent.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Components/PostProcessComponent.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Components/PrimitiveComponent.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/PhysicsEngine/RadialForceComponent.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Components/ReflectionCaptureComponent.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Components/SceneCaptureComponent.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/GameFramework/SpringArmComponent.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Components/StereoLayerComponent.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Components/WindDirectionalSourceComponent.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Components/LightComponent.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Components/SkyLightComponent.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Components/DirectionalLightComponent.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Components/PointLightComponent.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Components/SpotLightComponent.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Components/ArrowComponent.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Components/BillboardComponent.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Components/BrushComponent.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Components/DrawFrustumComponent.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Components/LineBatchComponent.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Components/MaterialBillboardComponent.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Components/MeshComponent.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Components/ModelComponent.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/AI/Navigation/NavLinkRenderingComponent.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/AI/Navigation/NavMeshRenderingComponent.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Particles/ParticleSystemComponent.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Components/ShapeComponent.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Components/SplineComponent.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Components/SubDSurfaceComponent.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Components/TextRenderComponent.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Components/VectorFieldComponent.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Components/SkinnedMeshComponent.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Components/StaticMeshComponent.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Components/DestructibleComponent.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Components/PoseableMeshComponent.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Components/InstancedStaticMeshComponent.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Components/SplineMeshComponent.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Components/HierarchicalInstancedStaticMeshComponent.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Components/BoxComponent.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Components/CapsuleComponent.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Components/SphereComponent.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Components/DrawSphereComponent.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Components/BoxReflectionCaptureComponent.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Components/PlaneReflectionCaptureComponent.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Components/SphereReflectionCaptureComponent.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Components/PlanarReflectionComponent.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Components/SceneCaptureComponent2D.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Components/SceneCaptureComponentCube.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Animation/AnimSequenceBase.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Animation/BlendSpaceBase.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Animation/PoseAsset.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Animation/AnimCompositeBase.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Animation/AnimSequence.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Animation/AnimComposite.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Animation/AnimMontage.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Animation/BlendSpace.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Animation/BlendSpace1D.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Animation/AimOffsetBlendSpace.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Animation/AimOffsetBlendSpace1D.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Animation/AnimCompress_Automatic.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Animation/AnimCompress_BitwiseCompressOnly.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Animation/AnimCompress_RemoveEverySecondKey.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Animation/AnimCompress_RemoveLinearKeys.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Animation/AnimCompress_RemoveTrivialKeys.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Animation/AnimSingleNodeInstance.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Vehicles/VehicleAnimInstance.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Animation/AnimNotifies/AnimNotify_PlayParticleEffect.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Animation/AnimNotifies/AnimNotify_PlaySound.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Animation/AnimNotifies/AnimNotifyState_TimedParticleEffect.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Animation/AnimNotifies/AnimNotifyState_Trail.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Engine/Blueprint.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Animation/AnimBlueprint.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Engine/LevelScriptBlueprint.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Kismet/BlueprintPlatformLibrary.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Kismet/BlueprintSetLibrary.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Kismet/DataTableFunctionLibrary.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Debug/DebugDrawService.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Kismet/GameplayStatics.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Kismet/HeadMountedDisplayFunctionLibrary.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Kismet/KismetGuidLibrary.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Kismet/KismetInputLibrary.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Kismet/KismetMaterialLibrary.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Kismet/KismetMathLibrary.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Kismet/KismetNodeHelperLibrary.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Kismet/KismetRenderingLibrary.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Kismet/KismetStringLibrary.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Kismet/KismetSystemLibrary.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Kismet/KismetTextLibrary.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/MeshVertexPainter/MeshVertexPainterKismetLibrary.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/AI/Navigation/NavigationSystem.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Kismet/StereoLayerFunctionLibrary.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/VisualLogger/VisualLoggerKismetLibrary.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Animation/AnimBlueprintGeneratedClass.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/PhysicsEngine/BodySetup2D.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Camera/CameraModifier_CameraShake.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Engine/ActorChannel.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Engine/ControlChannel.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Engine/VoiceChannel.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Curves/CurveFloat.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Curves/CurveLinearColor.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Curves/CurveVector.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Engine/PreviewMeshCollection.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Vehicles/TireType.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Animation/AnimationSettings.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Sound/AudioSettings.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Engine/CollisionProfile.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Engine/CoreSettings.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Engine/NetworkSettings.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/PhysicsEngine/PhysicsSettings.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Engine/RendererSettings.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Engine/UserInterfaceSettings.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Distributions/DistributionFloat.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Distributions/DistributionVector.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Distributions/DistributionFloatConstant.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Distributions/DistributionFloatConstantCurve.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Distributions/DistributionFloatUniform.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Distributions/DistributionFloatUniformCurve.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Distributions/DistributionFloatParticleParameter.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Distributions/DistributionVectorConstant.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Distributions/DistributionVectorConstantCurve.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Distributions/DistributionVectorUniform.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Distributions/DistributionVectorUniformCurve.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Distributions/DistributionVectorParticleParameter.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Engine/ComponentDelegateBinding.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Engine/InputDelegateBinding.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Engine/InputActionDelegateBinding.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Engine/InputAxisDelegateBinding.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Engine/InputAxisKeyDelegateBinding.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Engine/InputKeyDelegateBinding.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Engine/InputTouchDelegateBinding.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Engine/InputVectorAxisDelegateBinding.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/EdGraph/EdGraphNode_Documentation.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Engine/GameEngine.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Haptics/HapticFeedbackEffect_Buffer.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Haptics/HapticFeedbackEffect_Curve.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Haptics/HapticFeedbackEffect_SoundWave.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Matinee/InterpFilter_Custom.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Matinee/InterpGroupCamera.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Matinee/InterpGroupDirector.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Matinee/InterpGroupInstDirector.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Matinee/InterpTrackBoolProp.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Matinee/InterpTrackDirector.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Matinee/InterpTrackEvent.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Matinee/InterpTrackFloatBase.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Matinee/InterpTrackLinearColorBase.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Matinee/InterpTrackMove.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Matinee/InterpTrackParticleReplay.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Matinee/InterpTrackToggle.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Matinee/InterpTrackVectorBase.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Matinee/InterpTrackVisibility.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Matinee/InterpTrackAnimControl.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Matinee/InterpTrackFloatProp.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Matinee/InterpTrackMoveAxis.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Matinee/InterpTrackLinearColorProp.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Matinee/InterpTrackAudioMaster.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Matinee/InterpTrackColorProp.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Matinee/InterpTrackSound.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Matinee/InterpTrackVectorMaterialParam.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Matinee/InterpTrackVectorProp.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Matinee/InterpTrackInstAnimControl.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Matinee/InterpTrackInstDirector.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Matinee/InterpTrackInstEvent.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Matinee/InterpTrackInstMove.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Matinee/InterpTrackInstFloatProp.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Engine/LevelStreamingAlwaysLoaded.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Engine/LevelStreamingKismet.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/GameFramework/EngineMessage.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Materials/MaterialExpressionAdd.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Materials/MaterialExpressionBlendMaterialAttributes.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Materials/MaterialExpressionBreakMaterialAttributes.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Materials/MaterialExpressionBumpOffset.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Materials/MaterialExpressionClamp.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Materials/MaterialExpressionCollectionParameter.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Materials/MaterialExpressionComment.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Materials/MaterialExpressionComponentMask.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Materials/MaterialExpressionConstant.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Materials/MaterialExpressionConstant2Vector.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Materials/MaterialExpressionConstant3Vector.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Materials/MaterialExpressionConstant4Vector.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Materials/MaterialExpressionConstantBiasScale.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Materials/MaterialExpressionCustom.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Materials/MaterialExpressionCustomOutput.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Materials/MaterialExpressionDivide.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Materials/MaterialExpressionDynamicParameter.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Materials/MaterialExpressionFeatureLevelSwitch.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Materials/MaterialExpressionFontSample.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Materials/MaterialExpressionFunctionInput.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Materials/MaterialExpressionFunctionOutput.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Materials/MaterialExpressionGetMaterialAttributes.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Materials/MaterialExpressionIf.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Materials/MaterialExpressionLinearInterpolate.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Materials/MaterialExpressionLogarithm2.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Materials/MaterialExpressionMakeMaterialAttributes.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Materials/MaterialExpressionMaterialFunctionCall.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Materials/MaterialExpressionMax.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Materials/MaterialExpressionMin.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Materials/MaterialExpressionMultiply.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Materials/MaterialExpressionNormalize.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Materials/MaterialExpressionObjectOrientation.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Materials/MaterialExpressionOneMinus.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Materials/MaterialExpressionPanner.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Materials/MaterialExpressionParameter.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Materials/MaterialExpressionPower.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Materials/MaterialExpressionPreSkinnedPosition.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Materials/MaterialExpressionQualitySwitch.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Materials/MaterialExpressionReflectionVectorWS.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Materials/MaterialExpressionRotateAboutAxis.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Materials/MaterialExpressionSetMaterialAttributes.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Materials/MaterialExpressionSpeedTree.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Materials/MaterialExpressionStaticBool.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Materials/MaterialExpressionStaticSwitch.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Materials/MaterialExpressionSubtract.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Materials/MaterialExpressionTextureBase.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Materials/MaterialExpressionTextureCoordinate.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Materials/MaterialExpressionTextureProperty.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Materials/MaterialExpressionTransformPosition.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Materials/MaterialExpressionTwoSidedSign.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Materials/MaterialExpressionVertexColor.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Materials/MaterialExpressionViewProperty.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Materials/MaterialExpressionWorldPosition.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Materials/MaterialExpressionTangentOutput.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Materials/MaterialExpressionFontSampleParameter.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Materials/MaterialExpressionScalarParameter.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Materials/MaterialExpressionStaticBoolParameter.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Materials/MaterialExpressionStaticComponentMaskParameter.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Materials/MaterialExpressionVectorParameter.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Materials/MaterialExpressionStaticSwitchParameter.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Materials/MaterialExpressionTextureObject.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Materials/MaterialExpressionTextureSample.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Materials/MaterialExpressionParticleSubUV.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Materials/MaterialExpressionTextureSampleParameter.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Materials/MaterialExpressionTextureSampleParameter2D.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Materials/MaterialExpressionTextureSampleParameterCube.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Materials/MaterialExpressionAntialiasedTextureMask.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Materials/MaterialExpressionTextureSampleParameterSubUV.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Materials/Material.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Materials/MaterialInstance.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Materials/MaterialInstanceConstant.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Materials/MaterialInstanceDynamic.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/AI/Navigation/NavAreas/NavArea_Default.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/AI/Navigation/NavAreas/NavArea_LowHeight.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/AI/Navigation/NavAreas/NavArea_Null.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/AI/Navigation/NavAreas/NavArea_Obstacle.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/AI/Navigation/NavAreas/NavAreaMeta.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/AI/Navigation/NavAreas/NavAreaMeta_SwitchByAgent.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/AI/Navigation/RecastNavMeshDataChunk.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/AI/Navigation/NavFilters/RecastFilter_UseDefaultArea.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/AI/Navigation/NavLinkTrivial.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Particles/ParticleSpriteEmitter.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Particles/Location/ParticleModuleLocationBase.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Particles/ParticleModuleRequired.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Particles/TypeData/ParticleModuleTypeDataBase.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Particles/Acceleration/ParticleModuleAcceleration.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Particles/Acceleration/ParticleModuleAccelerationDrag.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Particles/Acceleration/ParticleModuleAccelerationDragScaleOverLife.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Particles/Acceleration/ParticleModuleAccelerationOverLifetime.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Particles/Attractor/ParticleModuleAttractorLine.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Particles/Attractor/ParticleModuleAttractorParticle.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Particles/Attractor/ParticleModuleAttractorPoint.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Particles/Beam/ParticleModuleBeamNoise.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Particles/Beam/ParticleModuleBeamSource.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Particles/Beam/ParticleModuleBeamTarget.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Particles/Collision/ParticleModuleCollision.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Particles/Collision/ParticleModuleCollisionGPU.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Particles/Color/ParticleModuleColor.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Particles/Color/ParticleModuleColorOverLife.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Particles/Color/ParticleModuleColorScaleOverLife.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Particles/Event/ParticleModuleEventGenerator.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Particles/Lifetime/ParticleModuleLifetime.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Particles/Light/ParticleModuleLight.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Particles/Light/ParticleModuleLight_Seeded.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Particles/Location/ParticleModuleLocation.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Particles/Location/ParticleModuleLocationBoneSocket.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Particles/Location/ParticleModuleLocationDirect.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Particles/Location/ParticleModuleLocationEmitter.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Particles/Location/ParticleModuleLocationEmitterDirect.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Particles/Location/ParticleModuleLocationPrimitiveBase.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Particles/Location/ParticleModuleLocationPrimitiveTriangle.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Particles/Location/ParticleModuleLocationSkelVertSurface.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Particles/Modules/Location/ParticleModulePivotOffset.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Particles/Location/ParticleModuleSourceMovement.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Particles/Location/ParticleModuleLocation_Seeded.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Particles/Location/ParticleModuleLocationWorldOffset.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Particles/Location/ParticleModuleLocationWorldOffset_Seeded.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Particles/Location/ParticleModuleLocationPrimitiveCylinder.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Particles/Location/ParticleModuleLocationPrimitiveSphere.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Particles/Location/ParticleModuleLocationPrimitiveCylinder_Seeded.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Particles/Location/ParticleModuleLocationPrimitiveSphere_Seeded.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Particles/Material/ParticleModuleMeshMaterial.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Particles/Orbit/ParticleModuleOrbit.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Particles/Orientation/ParticleModuleOrientationAxisLock.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Particles/Parameter/ParticleModuleParameterDynamic.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Particles/Rotation/ParticleModuleMeshRotation.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Particles/Rotation/ParticleModuleRotation.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Particles/Rotation/ParticleModuleRotationOverLifetime.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Particles/RotationRate/ParticleModuleMeshRotationRate.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Particles/RotationRate/ParticleModuleRotationRate.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Particles/RotationRate/ParticleModuleRotationRateMultiplyLife.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Particles/Size/ParticleModuleSize.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Particles/Size/ParticleModuleSizeMultiplyLife.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Particles/Size/ParticleModuleSizeScale.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Particles/Spawn/ParticleModuleSpawn.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Particles/Spawn/ParticleModuleSpawnPerUnit.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Particles/SubUV/ParticleModuleSubUV.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Particles/Trail/ParticleModuleTrailSource.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Particles/TypeData/ParticleModuleTypeDataAnimTrail.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Particles/TypeData/ParticleModuleTypeDataBeam2.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Particles/TypeData/ParticleModuleTypeDataGpu.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Particles/TypeData/ParticleModuleTypeDataMesh.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Particles/TypeData/ParticleModuleTypeDataRibbon.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Particles/VectorField/ParticleModuleVectorFieldLocal.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Particles/VectorField/ParticleModuleVectorFieldScale.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Particles/VectorField/ParticleModuleVectorFieldScaleOverLife.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Particles/Velocity/ParticleModuleVelocity.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Particles/Velocity/ParticleModuleVelocityCone.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Particles/Velocity/ParticleModuleVelocityInheritParent.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Particles/Velocity/ParticleModuleVelocityOverLifetime.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Engine/LocalPlayer.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Engine/NetConnection.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Engine/ChildConnection.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Engine/DemoNetConnection.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Debug/ReporterGraph.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Engine/GameViewportClient.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Engine/DestructibleMesh.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Sound/SoundCue.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Sound/SoundWave.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Sound/SoundWaveProcedural.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Sound/SoundEffectSource.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Sound/SoundEffectSubmix.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Sound/SoundNodeAssetReferencer.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Sound/SoundNodeAttenuation.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Sound/SoundNodeBranch.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Sound/SoundNodeConcatenator.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Sound/SoundNodeDelay.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Sound/SoundNodeDialoguePlayer.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Sound/SoundNodeDistanceCrossFade.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Sound/SoundNodeEnveloper.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Sound/SoundNodeGroupControl.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Sound/SoundNodeLooping.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Sound/SoundNodeMature.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Sound/SoundNodeMixer.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Sound/SoundNodeModulator.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Sound/SoundNodeQualityLevel.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Sound/SoundNodeRandom.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Sound/SoundNodeSoundClass.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Sound/SoundNodeSwitch.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Sound/SoundNodeWaveParam.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Sound/SoundNodeWavePlayer.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Sound/SoundNodeParamCrossFade.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Engine/Texture2D.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Engine/Texture2DDynamic.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Engine/TextureCube.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Engine/TextureRenderTarget.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Engine/LightMapTexture2D.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Engine/ShadowMapTexture2D.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Engine/TextureLightProfile.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Engine/TextureRenderTarget2D.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Engine/TextureRenderTargetCube.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/Engine/CanvasRenderTarget2D.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/DeviceProfiles/DeviceProfile.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/VectorField/VectorFieldAnimated.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/Engine/Classes/VectorField/VectorFieldStatic.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/UMG/Public/Blueprint/AsyncTaskDownloadImage.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/UMG/Public/Blueprint/DragDropOperation.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/UMG/Public/Animation/MovieScene2DTransformSection.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/UMG/Public/Animation/MovieScene2DTransformTrack.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/UMG/Public/Animation/MovieSceneMarginSection.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/UMG/Public/Animation/MovieSceneMarginTrack.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/UMG/Public/Animation/MovieSceneWidgetMaterialTrack.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/UMG/Public/Components/NamedSlotInterface.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/UMG/Public/Binding/PropertyBinding.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/UMG/Public/Components/RichTextBlockDecorator.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/UMG/Public/Blueprint/SlateBlueprintLibrary.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/UMG/Public/Slate/SlateDataSheet.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/UMG/Public/Slate/SlateVectorArtData.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/UMG/Public/Animation/UMGSequencePlayer.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/UMG/Public/Components/Visual.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/UMG/Public/Animation/WidgetAnimation.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/UMG/Public/Blueprint/WidgetBlueprintGeneratedClass.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/UMG/Public/Blueprint/WidgetBlueprintLibrary.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/UMG/Public/Components/WidgetComponent.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/UMG/Public/Components/WidgetInteractionComponent.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/UMG/Public/Blueprint/WidgetLayoutLibrary.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/UMG/Public/Blueprint/WidgetNavigation.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/UMG/Public/Blueprint/WidgetTree.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/UMG/Public/Binding/BoolBinding.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/UMG/Public/Binding/BrushBinding.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/UMG/Public/Binding/CheckedStateBinding.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/UMG/Public/Binding/ColorBinding.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/UMG/Public/Binding/FloatBinding.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/UMG/Public/Binding/Int32Binding.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/UMG/Public/Binding/MouseCursorBinding.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/UMG/Public/Binding/TextBinding.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/UMG/Public/Binding/VisibilityBinding.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/UMG/Public/Binding/WidgetBinding.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/UMG/Public/Components/PanelSlot.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/UMG/Public/Components/Widget.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/UMG/Public/Components/BorderSlot.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/UMG/Public/Components/ButtonSlot.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/UMG/Public/Components/CanvasPanelSlot.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/UMG/Public/Components/GridSlot.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/UMG/Public/Components/HorizontalBoxSlot.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/UMG/Public/Components/OverlaySlot.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/UMG/Public/Components/ScaleBoxSlot.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/UMG/Public/Components/ScrollBoxSlot.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/UMG/Public/Components/SizeBoxSlot.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/UMG/Public/Components/UniformGridSlot.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/UMG/Public/Components/VerticalBoxSlot.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/UMG/Public/Components/WidgetSwitcherSlot.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/UMG/Public/Components/WindowTitleBarAreaSlot.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/UMG/Public/Components/WrapBoxSlot.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/UMG/Public/Components/CircularThrobber.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/UMG/Public/Components/ComboBox.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/UMG/Public/Components/ComboBoxString.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/UMG/Public/Components/EditableText.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/UMG/Public/Components/EditableTextBox.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/UMG/Public/Components/ExpandableArea.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/UMG/Public/Components/Image.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/UMG/Public/Components/InputKeySelector.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/UMG/Public/Components/NativeWidgetHost.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/UMG/Public/Components/PanelWidget.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/UMG/Public/Components/ProgressBar.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/UMG/Public/Components/ScrollBar.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/UMG/Public/Components/Slider.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/UMG/Public/Components/Spacer.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/UMG/Public/Components/SpinBox.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/UMG/Public/Components/TableViewBase.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/UMG/Public/Components/TextWidgetTypes.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/UMG/Public/Components/Throbber.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/UMG/Public/Blueprint/UserWidget.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/UMG/Public/Components/CanvasPanel.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/UMG/Public/Components/ContentWidget.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/UMG/Public/Components/GridPanel.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/UMG/Public/Components/HorizontalBox.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/UMG/Public/Components/Overlay.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/UMG/Public/Components/ScrollBox.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/UMG/Public/Components/UniformGridPanel.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/UMG/Public/Components/VerticalBox.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/UMG/Public/Components/WidgetSwitcher.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/UMG/Public/Components/WrapBox.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/UMG/Public/Components/Border.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/UMG/Public/Components/Button.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/UMG/Public/Components/CheckBox.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/UMG/Public/Components/InvalidationBox.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/UMG/Public/Components/MenuAnchor.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/UMG/Public/Components/NamedSlot.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/UMG/Public/Components/RetainerBox.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/UMG/Public/Components/SafeZone.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/UMG/Public/Components/ScaleBox.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/UMG/Public/Components/SizeBox.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/UMG/Public/Components/Viewport.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/UMG/Public/Components/WindowTitleBarArea.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/UMG/Public/Components/ListView.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/UMG/Public/Components/TileView.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/UMG/Public/Components/MultiLineEditableText.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/UMG/Public/Components/MultiLineEditableTextBox.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/UMG/Public/Components/RichTextBlock.h"
#include "../../../../../UnrealEngine4.14/Engine/Source/Runtime/UMG/Public/Components/TextBlock.h"
#include "FirstPersonCharacter.h"
#include "FirstPersonGameMode.h"
#include "FirstPersonProjectile.h"
#include "Luautils.h"
#include "MyObject.h"
#include "TableUtil.h"
#include "DelegateLuaProxy.generated.h"
UCLASS(meta=(Lua=1))
class UDelegate_AActor_OnTakeAnyDamage : public UObject{
	GENERATED_BODY()
public:
	TSet<int> LuaCallBacks;
	UDelegate_AActor_OnTakeAnyDamage() {};
	using delegatetype = decltype(((AActor*)0)->OnTakeAnyDamage);
	void Init(delegatetype& theDelegate){
		UTableUtil::addgcref((UObject*)this);
		theDelegate.AddDynamic(this, &UDelegate_AActor_OnTakeAnyDamage::CallBack);
	}

	UFUNCTION()
	void CallBack( AActor* DamagedActor, float Damage, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser){
		for (auto v : LuaCallBacks){
			UTableUtil::callid(v,  DamagedActor, Damage, DamageType, InstigatedBy, DamageCauser);
		}
	}

	UFUNCTION()
	int Add() {int r = UTableUtil::pushluafunc(-1);LuaCallBacks.Add(r);return r;}
	UFUNCTION()
	void Remove(int32 r)
	{
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void RemoveByF()
	{
		int r = UTableUtil::popluafunc(-1);
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void Destroy() { LuaCallBacks.Reset(); UTableUtil::rmgcref(this);}
};

UCLASS(meta=(Lua=1))
class UDelegate_AActor_OnTakePointDamage : public UObject{
	GENERATED_BODY()
public:
	TSet<int> LuaCallBacks;
	UDelegate_AActor_OnTakePointDamage() {};
	using delegatetype = decltype(((AActor*)0)->OnTakePointDamage);
	void Init(delegatetype& theDelegate){
		UTableUtil::addgcref((UObject*)this);
		theDelegate.AddDynamic(this, &UDelegate_AActor_OnTakePointDamage::CallBack);
	}

	UFUNCTION()
	void CallBack( AActor* DamagedActor, float Damage, AController* InstigatedBy, FVector HitLocation, UPrimitiveComponent* FHitComponent, FName BoneName, FVector ShotFromDirection, const UDamageType* DamageType, AActor* DamageCauser){
		for (auto v : LuaCallBacks){
			UTableUtil::callid(v,  DamagedActor, Damage, InstigatedBy, HitLocation, FHitComponent, BoneName, ShotFromDirection, DamageType, DamageCauser);
		}
	}

	UFUNCTION()
	int Add() {int r = UTableUtil::pushluafunc(-1);LuaCallBacks.Add(r);return r;}
	UFUNCTION()
	void Remove(int32 r)
	{
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void RemoveByF()
	{
		int r = UTableUtil::popluafunc(-1);
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void Destroy() { LuaCallBacks.Reset(); UTableUtil::rmgcref(this);}
};

UCLASS(meta=(Lua=1))
class UDelegate_AActor_OnActorBeginOverlap : public UObject{
	GENERATED_BODY()
public:
	TSet<int> LuaCallBacks;
	UDelegate_AActor_OnActorBeginOverlap() {};
	using delegatetype = decltype(((AActor*)0)->OnActorBeginOverlap);
	void Init(delegatetype& theDelegate){
		UTableUtil::addgcref((UObject*)this);
		theDelegate.AddDynamic(this, &UDelegate_AActor_OnActorBeginOverlap::CallBack);
	}

	UFUNCTION()
	void CallBack( AActor* OverlappedActor, AActor* OtherActor){
		for (auto v : LuaCallBacks){
			UTableUtil::callid(v,  OverlappedActor, OtherActor);
		}
	}

	UFUNCTION()
	int Add() {int r = UTableUtil::pushluafunc(-1);LuaCallBacks.Add(r);return r;}
	UFUNCTION()
	void Remove(int32 r)
	{
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void RemoveByF()
	{
		int r = UTableUtil::popluafunc(-1);
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void Destroy() { LuaCallBacks.Reset(); UTableUtil::rmgcref(this);}
};

UCLASS(meta=(Lua=1))
class UDelegate_AActor_OnActorEndOverlap : public UObject{
	GENERATED_BODY()
public:
	TSet<int> LuaCallBacks;
	UDelegate_AActor_OnActorEndOverlap() {};
	using delegatetype = decltype(((AActor*)0)->OnActorEndOverlap);
	void Init(delegatetype& theDelegate){
		UTableUtil::addgcref((UObject*)this);
		theDelegate.AddDynamic(this, &UDelegate_AActor_OnActorEndOverlap::CallBack);
	}

	UFUNCTION()
	void CallBack( AActor* OverlappedActor, AActor* OtherActor){
		for (auto v : LuaCallBacks){
			UTableUtil::callid(v,  OverlappedActor, OtherActor);
		}
	}

	UFUNCTION()
	int Add() {int r = UTableUtil::pushluafunc(-1);LuaCallBacks.Add(r);return r;}
	UFUNCTION()
	void Remove(int32 r)
	{
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void RemoveByF()
	{
		int r = UTableUtil::popluafunc(-1);
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void Destroy() { LuaCallBacks.Reset(); UTableUtil::rmgcref(this);}
};

UCLASS(meta=(Lua=1))
class UDelegate_AActor_OnBeginCursorOver : public UObject{
	GENERATED_BODY()
public:
	TSet<int> LuaCallBacks;
	UDelegate_AActor_OnBeginCursorOver() {};
	using delegatetype = decltype(((AActor*)0)->OnBeginCursorOver);
	void Init(delegatetype& theDelegate){
		UTableUtil::addgcref((UObject*)this);
		theDelegate.AddDynamic(this, &UDelegate_AActor_OnBeginCursorOver::CallBack);
	}

	UFUNCTION()
	void CallBack( AActor* TouchedActor){
		for (auto v : LuaCallBacks){
			UTableUtil::callid(v,  TouchedActor);
		}
	}

	UFUNCTION()
	int Add() {int r = UTableUtil::pushluafunc(-1);LuaCallBacks.Add(r);return r;}
	UFUNCTION()
	void Remove(int32 r)
	{
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void RemoveByF()
	{
		int r = UTableUtil::popluafunc(-1);
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void Destroy() { LuaCallBacks.Reset(); UTableUtil::rmgcref(this);}
};

UCLASS(meta=(Lua=1))
class UDelegate_AActor_OnEndCursorOver : public UObject{
	GENERATED_BODY()
public:
	TSet<int> LuaCallBacks;
	UDelegate_AActor_OnEndCursorOver() {};
	using delegatetype = decltype(((AActor*)0)->OnEndCursorOver);
	void Init(delegatetype& theDelegate){
		UTableUtil::addgcref((UObject*)this);
		theDelegate.AddDynamic(this, &UDelegate_AActor_OnEndCursorOver::CallBack);
	}

	UFUNCTION()
	void CallBack( AActor* TouchedActor){
		for (auto v : LuaCallBacks){
			UTableUtil::callid(v,  TouchedActor);
		}
	}

	UFUNCTION()
	int Add() {int r = UTableUtil::pushluafunc(-1);LuaCallBacks.Add(r);return r;}
	UFUNCTION()
	void Remove(int32 r)
	{
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void RemoveByF()
	{
		int r = UTableUtil::popluafunc(-1);
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void Destroy() { LuaCallBacks.Reset(); UTableUtil::rmgcref(this);}
};

UCLASS(meta=(Lua=1))
class UDelegate_AActor_OnClicked : public UObject{
	GENERATED_BODY()
public:
	TSet<int> LuaCallBacks;
	UDelegate_AActor_OnClicked() {};
	using delegatetype = decltype(((AActor*)0)->OnClicked);
	void Init(delegatetype& theDelegate){
		UTableUtil::addgcref((UObject*)this);
		theDelegate.AddDynamic(this, &UDelegate_AActor_OnClicked::CallBack);
	}

	UFUNCTION()
	void CallBack( AActor* TouchedActor, FKey ButtonPressed){
		for (auto v : LuaCallBacks){
			UTableUtil::callid(v,  TouchedActor, ButtonPressed);
		}
	}

	UFUNCTION()
	int Add() {int r = UTableUtil::pushluafunc(-1);LuaCallBacks.Add(r);return r;}
	UFUNCTION()
	void Remove(int32 r)
	{
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void RemoveByF()
	{
		int r = UTableUtil::popluafunc(-1);
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void Destroy() { LuaCallBacks.Reset(); UTableUtil::rmgcref(this);}
};

UCLASS(meta=(Lua=1))
class UDelegate_AActor_OnReleased : public UObject{
	GENERATED_BODY()
public:
	TSet<int> LuaCallBacks;
	UDelegate_AActor_OnReleased() {};
	using delegatetype = decltype(((AActor*)0)->OnReleased);
	void Init(delegatetype& theDelegate){
		UTableUtil::addgcref((UObject*)this);
		theDelegate.AddDynamic(this, &UDelegate_AActor_OnReleased::CallBack);
	}

	UFUNCTION()
	void CallBack( AActor* TouchedActor, FKey ButtonReleased){
		for (auto v : LuaCallBacks){
			UTableUtil::callid(v,  TouchedActor, ButtonReleased);
		}
	}

	UFUNCTION()
	int Add() {int r = UTableUtil::pushluafunc(-1);LuaCallBacks.Add(r);return r;}
	UFUNCTION()
	void Remove(int32 r)
	{
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void RemoveByF()
	{
		int r = UTableUtil::popluafunc(-1);
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void Destroy() { LuaCallBacks.Reset(); UTableUtil::rmgcref(this);}
};

UCLASS(meta=(Lua=1))
class UDelegate_AActor_OnInputTouchBegin : public UObject{
	GENERATED_BODY()
public:
	TSet<int> LuaCallBacks;
	UDelegate_AActor_OnInputTouchBegin() {};
	using delegatetype = decltype(((AActor*)0)->OnInputTouchBegin);
	void Init(delegatetype& theDelegate){
		UTableUtil::addgcref((UObject*)this);
		theDelegate.AddDynamic(this, &UDelegate_AActor_OnInputTouchBegin::CallBack);
	}

	UFUNCTION()
	void CallBack( ETouchIndex::Type FingerIndex, AActor* TouchedActor){
		for (auto v : LuaCallBacks){
			UTableUtil::callid(v,  (int)(FingerIndex), TouchedActor);
		}
	}

	UFUNCTION()
	int Add() {int r = UTableUtil::pushluafunc(-1);LuaCallBacks.Add(r);return r;}
	UFUNCTION()
	void Remove(int32 r)
	{
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void RemoveByF()
	{
		int r = UTableUtil::popluafunc(-1);
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void Destroy() { LuaCallBacks.Reset(); UTableUtil::rmgcref(this);}
};

UCLASS(meta=(Lua=1))
class UDelegate_AActor_OnInputTouchEnd : public UObject{
	GENERATED_BODY()
public:
	TSet<int> LuaCallBacks;
	UDelegate_AActor_OnInputTouchEnd() {};
	using delegatetype = decltype(((AActor*)0)->OnInputTouchEnd);
	void Init(delegatetype& theDelegate){
		UTableUtil::addgcref((UObject*)this);
		theDelegate.AddDynamic(this, &UDelegate_AActor_OnInputTouchEnd::CallBack);
	}

	UFUNCTION()
	void CallBack( ETouchIndex::Type FingerIndex, AActor* TouchedActor){
		for (auto v : LuaCallBacks){
			UTableUtil::callid(v,  (int)(FingerIndex), TouchedActor);
		}
	}

	UFUNCTION()
	int Add() {int r = UTableUtil::pushluafunc(-1);LuaCallBacks.Add(r);return r;}
	UFUNCTION()
	void Remove(int32 r)
	{
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void RemoveByF()
	{
		int r = UTableUtil::popluafunc(-1);
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void Destroy() { LuaCallBacks.Reset(); UTableUtil::rmgcref(this);}
};

UCLASS(meta=(Lua=1))
class UDelegate_AActor_OnInputTouchEnter : public UObject{
	GENERATED_BODY()
public:
	TSet<int> LuaCallBacks;
	UDelegate_AActor_OnInputTouchEnter() {};
	using delegatetype = decltype(((AActor*)0)->OnInputTouchEnter);
	void Init(delegatetype& theDelegate){
		UTableUtil::addgcref((UObject*)this);
		theDelegate.AddDynamic(this, &UDelegate_AActor_OnInputTouchEnter::CallBack);
	}

	UFUNCTION()
	void CallBack( ETouchIndex::Type FingerIndex, AActor* TouchedActor){
		for (auto v : LuaCallBacks){
			UTableUtil::callid(v,  (int)(FingerIndex), TouchedActor);
		}
	}

	UFUNCTION()
	int Add() {int r = UTableUtil::pushluafunc(-1);LuaCallBacks.Add(r);return r;}
	UFUNCTION()
	void Remove(int32 r)
	{
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void RemoveByF()
	{
		int r = UTableUtil::popluafunc(-1);
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void Destroy() { LuaCallBacks.Reset(); UTableUtil::rmgcref(this);}
};

UCLASS(meta=(Lua=1))
class UDelegate_AActor_OnInputTouchLeave : public UObject{
	GENERATED_BODY()
public:
	TSet<int> LuaCallBacks;
	UDelegate_AActor_OnInputTouchLeave() {};
	using delegatetype = decltype(((AActor*)0)->OnInputTouchLeave);
	void Init(delegatetype& theDelegate){
		UTableUtil::addgcref((UObject*)this);
		theDelegate.AddDynamic(this, &UDelegate_AActor_OnInputTouchLeave::CallBack);
	}

	UFUNCTION()
	void CallBack( ETouchIndex::Type FingerIndex, AActor* TouchedActor){
		for (auto v : LuaCallBacks){
			UTableUtil::callid(v,  (int)(FingerIndex), TouchedActor);
		}
	}

	UFUNCTION()
	int Add() {int r = UTableUtil::pushluafunc(-1);LuaCallBacks.Add(r);return r;}
	UFUNCTION()
	void Remove(int32 r)
	{
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void RemoveByF()
	{
		int r = UTableUtil::popluafunc(-1);
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void Destroy() { LuaCallBacks.Reset(); UTableUtil::rmgcref(this);}
};

UCLASS(meta=(Lua=1))
class UDelegate_AActor_OnActorHit : public UObject{
	GENERATED_BODY()
public:
	TSet<int> LuaCallBacks;
	UDelegate_AActor_OnActorHit() {};
	using delegatetype = decltype(((AActor*)0)->OnActorHit);
	void Init(delegatetype& theDelegate){
		UTableUtil::addgcref((UObject*)this);
		theDelegate.AddDynamic(this, &UDelegate_AActor_OnActorHit::CallBack);
	}

	UFUNCTION()
	void CallBack( AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit){
		for (auto v : LuaCallBacks){
			UTableUtil::callid(v,  SelfActor, OtherActor, NormalImpulse, Hit);
		}
	}

	UFUNCTION()
	int Add() {int r = UTableUtil::pushluafunc(-1);LuaCallBacks.Add(r);return r;}
	UFUNCTION()
	void Remove(int32 r)
	{
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void RemoveByF()
	{
		int r = UTableUtil::popluafunc(-1);
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void Destroy() { LuaCallBacks.Reset(); UTableUtil::rmgcref(this);}
};

UCLASS(meta=(Lua=1))
class UDelegate_AActor_OnDestroyed : public UObject{
	GENERATED_BODY()
public:
	TSet<int> LuaCallBacks;
	UDelegate_AActor_OnDestroyed() {};
	using delegatetype = decltype(((AActor*)0)->OnDestroyed);
	void Init(delegatetype& theDelegate){
		UTableUtil::addgcref((UObject*)this);
		theDelegate.AddDynamic(this, &UDelegate_AActor_OnDestroyed::CallBack);
	}

	UFUNCTION()
	void CallBack( AActor* DestroyedActor){
		for (auto v : LuaCallBacks){
			UTableUtil::callid(v,  DestroyedActor);
		}
	}

	UFUNCTION()
	int Add() {int r = UTableUtil::pushluafunc(-1);LuaCallBacks.Add(r);return r;}
	UFUNCTION()
	void Remove(int32 r)
	{
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void RemoveByF()
	{
		int r = UTableUtil::popluafunc(-1);
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void Destroy() { LuaCallBacks.Reset(); UTableUtil::rmgcref(this);}
};

UCLASS(meta=(Lua=1))
class UDelegate_AActor_OnEndPlay : public UObject{
	GENERATED_BODY()
public:
	TSet<int> LuaCallBacks;
	UDelegate_AActor_OnEndPlay() {};
	using delegatetype = decltype(((AActor*)0)->OnEndPlay);
	void Init(delegatetype& theDelegate){
		UTableUtil::addgcref((UObject*)this);
		theDelegate.AddDynamic(this, &UDelegate_AActor_OnEndPlay::CallBack);
	}

	UFUNCTION()
	void CallBack( AActor* Actor, EEndPlayReason::Type EndPlayReason){
		for (auto v : LuaCallBacks){
			UTableUtil::callid(v,  Actor, (int)(EndPlayReason));
		}
	}

	UFUNCTION()
	int Add() {int r = UTableUtil::pushluafunc(-1);LuaCallBacks.Add(r);return r;}
	UFUNCTION()
	void Remove(int32 r)
	{
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void RemoveByF()
	{
		int r = UTableUtil::popluafunc(-1);
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void Destroy() { LuaCallBacks.Reset(); UTableUtil::rmgcref(this);}
};

UCLASS(meta=(Lua=1))
class UDelegate_UActorComponent_OnComponentActivated : public UObject{
	GENERATED_BODY()
public:
	TSet<int> LuaCallBacks;
	UDelegate_UActorComponent_OnComponentActivated() {};
	using delegatetype = decltype(((UActorComponent*)0)->OnComponentActivated);
	void Init(delegatetype& theDelegate){
		UTableUtil::addgcref((UObject*)this);
		theDelegate.AddDynamic(this, &UDelegate_UActorComponent_OnComponentActivated::CallBack);
	}

	UFUNCTION()
	void CallBack( UActorComponent* Component, bool bReset){
		for (auto v : LuaCallBacks){
			UTableUtil::callid(v,  Component, bReset);
		}
	}

	UFUNCTION()
	int Add() {int r = UTableUtil::pushluafunc(-1);LuaCallBacks.Add(r);return r;}
	UFUNCTION()
	void Remove(int32 r)
	{
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void RemoveByF()
	{
		int r = UTableUtil::popluafunc(-1);
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void Destroy() { LuaCallBacks.Reset(); UTableUtil::rmgcref(this);}
};

UCLASS(meta=(Lua=1))
class UDelegate_UActorComponent_OnComponentDeactivated : public UObject{
	GENERATED_BODY()
public:
	TSet<int> LuaCallBacks;
	UDelegate_UActorComponent_OnComponentDeactivated() {};
	using delegatetype = decltype(((UActorComponent*)0)->OnComponentDeactivated);
	void Init(delegatetype& theDelegate){
		UTableUtil::addgcref((UObject*)this);
		theDelegate.AddDynamic(this, &UDelegate_UActorComponent_OnComponentDeactivated::CallBack);
	}

	UFUNCTION()
	void CallBack( UActorComponent* Component){
		for (auto v : LuaCallBacks){
			UTableUtil::callid(v,  Component);
		}
	}

	UFUNCTION()
	int Add() {int r = UTableUtil::pushluafunc(-1);LuaCallBacks.Add(r);return r;}
	UFUNCTION()
	void Remove(int32 r)
	{
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void RemoveByF()
	{
		int r = UTableUtil::popluafunc(-1);
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void Destroy() { LuaCallBacks.Reset(); UTableUtil::rmgcref(this);}
};

UCLASS(meta=(Lua=1))
class UDelegate_UAnimInstance_OnMontageBlendingOut : public UObject{
	GENERATED_BODY()
public:
	TSet<int> LuaCallBacks;
	UDelegate_UAnimInstance_OnMontageBlendingOut() {};
	using delegatetype = decltype(((UAnimInstance*)0)->OnMontageBlendingOut);
	void Init(delegatetype& theDelegate){
		UTableUtil::addgcref((UObject*)this);
		theDelegate.AddDynamic(this, &UDelegate_UAnimInstance_OnMontageBlendingOut::CallBack);
	}

	UFUNCTION()
	void CallBack( UAnimMontage* Montage, bool bInterrupted){
		for (auto v : LuaCallBacks){
			UTableUtil::callid(v,  Montage, bInterrupted);
		}
	}

	UFUNCTION()
	int Add() {int r = UTableUtil::pushluafunc(-1);LuaCallBacks.Add(r);return r;}
	UFUNCTION()
	void Remove(int32 r)
	{
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void RemoveByF()
	{
		int r = UTableUtil::popluafunc(-1);
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void Destroy() { LuaCallBacks.Reset(); UTableUtil::rmgcref(this);}
};

UCLASS(meta=(Lua=1))
class UDelegate_UAnimInstance_OnMontageStarted : public UObject{
	GENERATED_BODY()
public:
	TSet<int> LuaCallBacks;
	UDelegate_UAnimInstance_OnMontageStarted() {};
	using delegatetype = decltype(((UAnimInstance*)0)->OnMontageStarted);
	void Init(delegatetype& theDelegate){
		UTableUtil::addgcref((UObject*)this);
		theDelegate.AddDynamic(this, &UDelegate_UAnimInstance_OnMontageStarted::CallBack);
	}

	UFUNCTION()
	void CallBack( UAnimMontage* Montage){
		for (auto v : LuaCallBacks){
			UTableUtil::callid(v,  Montage);
		}
	}

	UFUNCTION()
	int Add() {int r = UTableUtil::pushluafunc(-1);LuaCallBacks.Add(r);return r;}
	UFUNCTION()
	void Remove(int32 r)
	{
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void RemoveByF()
	{
		int r = UTableUtil::popluafunc(-1);
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void Destroy() { LuaCallBacks.Reset(); UTableUtil::rmgcref(this);}
};

UCLASS(meta=(Lua=1))
class UDelegate_UAnimInstance_OnMontageEnded : public UObject{
	GENERATED_BODY()
public:
	TSet<int> LuaCallBacks;
	UDelegate_UAnimInstance_OnMontageEnded() {};
	using delegatetype = decltype(((UAnimInstance*)0)->OnMontageEnded);
	void Init(delegatetype& theDelegate){
		UTableUtil::addgcref((UObject*)this);
		theDelegate.AddDynamic(this, &UDelegate_UAnimInstance_OnMontageEnded::CallBack);
	}

	UFUNCTION()
	void CallBack( UAnimMontage* Montage, bool bInterrupted){
		for (auto v : LuaCallBacks){
			UTableUtil::callid(v,  Montage, bInterrupted);
		}
	}

	UFUNCTION()
	int Add() {int r = UTableUtil::pushluafunc(-1);LuaCallBacks.Add(r);return r;}
	UFUNCTION()
	void Remove(int32 r)
	{
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void RemoveByF()
	{
		int r = UTableUtil::popluafunc(-1);
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void Destroy() { LuaCallBacks.Reset(); UTableUtil::rmgcref(this);}
};

UCLASS(meta=(Lua=1))
class UDelegate_ULevelStreaming_OnLevelLoaded : public UObject{
	GENERATED_BODY()
public:
	TSet<int> LuaCallBacks;
	UDelegate_ULevelStreaming_OnLevelLoaded() {};
	using delegatetype = decltype(((ULevelStreaming*)0)->OnLevelLoaded);
	void Init(delegatetype& theDelegate){
		UTableUtil::addgcref((UObject*)this);
		theDelegate.AddDynamic(this, &UDelegate_ULevelStreaming_OnLevelLoaded::CallBack);
	}

	UFUNCTION()
	void CallBack(){
		for (auto v : LuaCallBacks){
			UTableUtil::callid(v);
		}
	}

	UFUNCTION()
	int Add() {int r = UTableUtil::pushluafunc(-1);LuaCallBacks.Add(r);return r;}
	UFUNCTION()
	void Remove(int32 r)
	{
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void RemoveByF()
	{
		int r = UTableUtil::popluafunc(-1);
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void Destroy() { LuaCallBacks.Reset(); UTableUtil::rmgcref(this);}
};

UCLASS(meta=(Lua=1))
class UDelegate_ULevelStreaming_OnLevelUnloaded : public UObject{
	GENERATED_BODY()
public:
	TSet<int> LuaCallBacks;
	UDelegate_ULevelStreaming_OnLevelUnloaded() {};
	using delegatetype = decltype(((ULevelStreaming*)0)->OnLevelUnloaded);
	void Init(delegatetype& theDelegate){
		UTableUtil::addgcref((UObject*)this);
		theDelegate.AddDynamic(this, &UDelegate_ULevelStreaming_OnLevelUnloaded::CallBack);
	}

	UFUNCTION()
	void CallBack(){
		for (auto v : LuaCallBacks){
			UTableUtil::callid(v);
		}
	}

	UFUNCTION()
	int Add() {int r = UTableUtil::pushluafunc(-1);LuaCallBacks.Add(r);return r;}
	UFUNCTION()
	void Remove(int32 r)
	{
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void RemoveByF()
	{
		int r = UTableUtil::popluafunc(-1);
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void Destroy() { LuaCallBacks.Reset(); UTableUtil::rmgcref(this);}
};

UCLASS(meta=(Lua=1))
class UDelegate_ULevelStreaming_OnLevelShown : public UObject{
	GENERATED_BODY()
public:
	TSet<int> LuaCallBacks;
	UDelegate_ULevelStreaming_OnLevelShown() {};
	using delegatetype = decltype(((ULevelStreaming*)0)->OnLevelShown);
	void Init(delegatetype& theDelegate){
		UTableUtil::addgcref((UObject*)this);
		theDelegate.AddDynamic(this, &UDelegate_ULevelStreaming_OnLevelShown::CallBack);
	}

	UFUNCTION()
	void CallBack(){
		for (auto v : LuaCallBacks){
			UTableUtil::callid(v);
		}
	}

	UFUNCTION()
	int Add() {int r = UTableUtil::pushluafunc(-1);LuaCallBacks.Add(r);return r;}
	UFUNCTION()
	void Remove(int32 r)
	{
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void RemoveByF()
	{
		int r = UTableUtil::popluafunc(-1);
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void Destroy() { LuaCallBacks.Reset(); UTableUtil::rmgcref(this);}
};

UCLASS(meta=(Lua=1))
class UDelegate_ULevelStreaming_OnLevelHidden : public UObject{
	GENERATED_BODY()
public:
	TSet<int> LuaCallBacks;
	UDelegate_ULevelStreaming_OnLevelHidden() {};
	using delegatetype = decltype(((ULevelStreaming*)0)->OnLevelHidden);
	void Init(delegatetype& theDelegate){
		UTableUtil::addgcref((UObject*)this);
		theDelegate.AddDynamic(this, &UDelegate_ULevelStreaming_OnLevelHidden::CallBack);
	}

	UFUNCTION()
	void CallBack(){
		for (auto v : LuaCallBacks){
			UTableUtil::callid(v);
		}
	}

	UFUNCTION()
	int Add() {int r = UTableUtil::pushluafunc(-1);LuaCallBacks.Add(r);return r;}
	UFUNCTION()
	void Remove(int32 r)
	{
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void RemoveByF()
	{
		int r = UTableUtil::popluafunc(-1);
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void Destroy() { LuaCallBacks.Reset(); UTableUtil::rmgcref(this);}
};

UCLASS(meta=(Lua=1))
class UDelegate_ADestructibleActor_OnActorFracture : public UObject{
	GENERATED_BODY()
public:
	TSet<int> LuaCallBacks;
	UDelegate_ADestructibleActor_OnActorFracture() {};
	using delegatetype = decltype(((ADestructibleActor*)0)->OnActorFracture);
	void Init(delegatetype& theDelegate){
		UTableUtil::addgcref((UObject*)this);
		theDelegate.AddDynamic(this, &UDelegate_ADestructibleActor_OnActorFracture::CallBack);
	}

	UFUNCTION()
	void CallBack( const FVector& HitPoint, const FVector& HitDirection){
		for (auto v : LuaCallBacks){
			UTableUtil::callid(v,  HitPoint, HitDirection);
		}
	}

	UFUNCTION()
	int Add() {int r = UTableUtil::pushluafunc(-1);LuaCallBacks.Add(r);return r;}
	UFUNCTION()
	void Remove(int32 r)
	{
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void RemoveByF()
	{
		int r = UTableUtil::popluafunc(-1);
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void Destroy() { LuaCallBacks.Reset(); UTableUtil::rmgcref(this);}
};

UCLASS(meta=(Lua=1))
class UDelegate_AEmitter_OnParticleSpawn : public UObject{
	GENERATED_BODY()
public:
	TSet<int> LuaCallBacks;
	UDelegate_AEmitter_OnParticleSpawn() {};
	using delegatetype = decltype(((AEmitter*)0)->OnParticleSpawn);
	void Init(delegatetype& theDelegate){
		UTableUtil::addgcref((UObject*)this);
		theDelegate.AddDynamic(this, &UDelegate_AEmitter_OnParticleSpawn::CallBack);
	}

	UFUNCTION()
	void CallBack( FName EventName, float EmitterTime, FVector Location, FVector Velocity){
		for (auto v : LuaCallBacks){
			UTableUtil::callid(v,  EventName, EmitterTime, Location, Velocity);
		}
	}

	UFUNCTION()
	int Add() {int r = UTableUtil::pushluafunc(-1);LuaCallBacks.Add(r);return r;}
	UFUNCTION()
	void Remove(int32 r)
	{
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void RemoveByF()
	{
		int r = UTableUtil::popluafunc(-1);
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void Destroy() { LuaCallBacks.Reset(); UTableUtil::rmgcref(this);}
};

UCLASS(meta=(Lua=1))
class UDelegate_AEmitter_OnParticleBurst : public UObject{
	GENERATED_BODY()
public:
	TSet<int> LuaCallBacks;
	UDelegate_AEmitter_OnParticleBurst() {};
	using delegatetype = decltype(((AEmitter*)0)->OnParticleBurst);
	void Init(delegatetype& theDelegate){
		UTableUtil::addgcref((UObject*)this);
		theDelegate.AddDynamic(this, &UDelegate_AEmitter_OnParticleBurst::CallBack);
	}

	UFUNCTION()
	void CallBack( FName EventName, float EmitterTime, int32 ParticleCount){
		for (auto v : LuaCallBacks){
			UTableUtil::callid(v,  EventName, EmitterTime, ParticleCount);
		}
	}

	UFUNCTION()
	int Add() {int r = UTableUtil::pushluafunc(-1);LuaCallBacks.Add(r);return r;}
	UFUNCTION()
	void Remove(int32 r)
	{
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void RemoveByF()
	{
		int r = UTableUtil::popluafunc(-1);
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void Destroy() { LuaCallBacks.Reset(); UTableUtil::rmgcref(this);}
};

UCLASS(meta=(Lua=1))
class UDelegate_AEmitter_OnParticleDeath : public UObject{
	GENERATED_BODY()
public:
	TSet<int> LuaCallBacks;
	UDelegate_AEmitter_OnParticleDeath() {};
	using delegatetype = decltype(((AEmitter*)0)->OnParticleDeath);
	void Init(delegatetype& theDelegate){
		UTableUtil::addgcref((UObject*)this);
		theDelegate.AddDynamic(this, &UDelegate_AEmitter_OnParticleDeath::CallBack);
	}

	UFUNCTION()
	void CallBack( FName EventName, float EmitterTime, int32 ParticleTime, FVector Location, FVector Velocity, FVector Direction){
		for (auto v : LuaCallBacks){
			UTableUtil::callid(v,  EventName, EmitterTime, ParticleTime, Location, Velocity, Direction);
		}
	}

	UFUNCTION()
	int Add() {int r = UTableUtil::pushluafunc(-1);LuaCallBacks.Add(r);return r;}
	UFUNCTION()
	void Remove(int32 r)
	{
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void RemoveByF()
	{
		int r = UTableUtil::popluafunc(-1);
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void Destroy() { LuaCallBacks.Reset(); UTableUtil::rmgcref(this);}
};

UCLASS(meta=(Lua=1))
class UDelegate_AEmitter_OnParticleCollide : public UObject{
	GENERATED_BODY()
public:
	TSet<int> LuaCallBacks;
	UDelegate_AEmitter_OnParticleCollide() {};
	using delegatetype = decltype(((AEmitter*)0)->OnParticleCollide);
	void Init(delegatetype& theDelegate){
		UTableUtil::addgcref((UObject*)this);
		theDelegate.AddDynamic(this, &UDelegate_AEmitter_OnParticleCollide::CallBack);
	}

	UFUNCTION()
	void CallBack( FName EventName, float EmitterTime, int32 ParticleTime, FVector Location, FVector Velocity, FVector Direction, FVector Normal, FName BoneName, UPhysicalMaterial* PhysMat){
		for (auto v : LuaCallBacks){
			UTableUtil::callid(v,  EventName, EmitterTime, ParticleTime, Location, Velocity, Direction, Normal, BoneName, PhysMat);
		}
	}

	UFUNCTION()
	int Add() {int r = UTableUtil::pushluafunc(-1);LuaCallBacks.Add(r);return r;}
	UFUNCTION()
	void Remove(int32 r)
	{
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void RemoveByF()
	{
		int r = UTableUtil::popluafunc(-1);
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void Destroy() { LuaCallBacks.Reset(); UTableUtil::rmgcref(this);}
};

UCLASS(meta=(Lua=1))
class UDelegate_AMatineeActor_OnPlay : public UObject{
	GENERATED_BODY()
public:
	TSet<int> LuaCallBacks;
	UDelegate_AMatineeActor_OnPlay() {};
	using delegatetype = decltype(((AMatineeActor*)0)->OnPlay);
	void Init(delegatetype& theDelegate){
		UTableUtil::addgcref((UObject*)this);
		theDelegate.AddDynamic(this, &UDelegate_AMatineeActor_OnPlay::CallBack);
	}

	UFUNCTION()
	void CallBack(){
		for (auto v : LuaCallBacks){
			UTableUtil::callid(v);
		}
	}

	UFUNCTION()
	int Add() {int r = UTableUtil::pushluafunc(-1);LuaCallBacks.Add(r);return r;}
	UFUNCTION()
	void Remove(int32 r)
	{
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void RemoveByF()
	{
		int r = UTableUtil::popluafunc(-1);
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void Destroy() { LuaCallBacks.Reset(); UTableUtil::rmgcref(this);}
};

UCLASS(meta=(Lua=1))
class UDelegate_AMatineeActor_OnStop : public UObject{
	GENERATED_BODY()
public:
	TSet<int> LuaCallBacks;
	UDelegate_AMatineeActor_OnStop() {};
	using delegatetype = decltype(((AMatineeActor*)0)->OnStop);
	void Init(delegatetype& theDelegate){
		UTableUtil::addgcref((UObject*)this);
		theDelegate.AddDynamic(this, &UDelegate_AMatineeActor_OnStop::CallBack);
	}

	UFUNCTION()
	void CallBack(){
		for (auto v : LuaCallBacks){
			UTableUtil::callid(v);
		}
	}

	UFUNCTION()
	int Add() {int r = UTableUtil::pushluafunc(-1);LuaCallBacks.Add(r);return r;}
	UFUNCTION()
	void Remove(int32 r)
	{
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void RemoveByF()
	{
		int r = UTableUtil::popluafunc(-1);
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void Destroy() { LuaCallBacks.Reset(); UTableUtil::rmgcref(this);}
};

UCLASS(meta=(Lua=1))
class UDelegate_AMatineeActor_OnPause : public UObject{
	GENERATED_BODY()
public:
	TSet<int> LuaCallBacks;
	UDelegate_AMatineeActor_OnPause() {};
	using delegatetype = decltype(((AMatineeActor*)0)->OnPause);
	void Init(delegatetype& theDelegate){
		UTableUtil::addgcref((UObject*)this);
		theDelegate.AddDynamic(this, &UDelegate_AMatineeActor_OnPause::CallBack);
	}

	UFUNCTION()
	void CallBack(){
		for (auto v : LuaCallBacks){
			UTableUtil::callid(v);
		}
	}

	UFUNCTION()
	int Add() {int r = UTableUtil::pushluafunc(-1);LuaCallBacks.Add(r);return r;}
	UFUNCTION()
	void Remove(int32 r)
	{
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void RemoveByF()
	{
		int r = UTableUtil::popluafunc(-1);
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void Destroy() { LuaCallBacks.Reset(); UTableUtil::rmgcref(this);}
};

UCLASS(meta=(Lua=1))
class UDelegate_ACharacter_OnReachedJumpApex : public UObject{
	GENERATED_BODY()
public:
	TSet<int> LuaCallBacks;
	UDelegate_ACharacter_OnReachedJumpApex() {};
	using delegatetype = decltype(((ACharacter*)0)->OnReachedJumpApex);
	void Init(delegatetype& theDelegate){
		UTableUtil::addgcref((UObject*)this);
		theDelegate.AddDynamic(this, &UDelegate_ACharacter_OnReachedJumpApex::CallBack);
	}

	UFUNCTION()
	void CallBack(){
		for (auto v : LuaCallBacks){
			UTableUtil::callid(v);
		}
	}

	UFUNCTION()
	int Add() {int r = UTableUtil::pushluafunc(-1);LuaCallBacks.Add(r);return r;}
	UFUNCTION()
	void Remove(int32 r)
	{
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void RemoveByF()
	{
		int r = UTableUtil::popluafunc(-1);
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void Destroy() { LuaCallBacks.Reset(); UTableUtil::rmgcref(this);}
};

UCLASS(meta=(Lua=1))
class UDelegate_ACharacter_OnCharacterMovementUpdated : public UObject{
	GENERATED_BODY()
public:
	TSet<int> LuaCallBacks;
	UDelegate_ACharacter_OnCharacterMovementUpdated() {};
	using delegatetype = decltype(((ACharacter*)0)->OnCharacterMovementUpdated);
	void Init(delegatetype& theDelegate){
		UTableUtil::addgcref((UObject*)this);
		theDelegate.AddDynamic(this, &UDelegate_ACharacter_OnCharacterMovementUpdated::CallBack);
	}

	UFUNCTION()
	void CallBack( float DeltaSeconds, FVector OldLocation, FVector OldVelocity){
		for (auto v : LuaCallBacks){
			UTableUtil::callid(v,  DeltaSeconds, OldLocation, OldVelocity);
		}
	}

	UFUNCTION()
	int Add() {int r = UTableUtil::pushluafunc(-1);LuaCallBacks.Add(r);return r;}
	UFUNCTION()
	void Remove(int32 r)
	{
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void RemoveByF()
	{
		int r = UTableUtil::popluafunc(-1);
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void Destroy() { LuaCallBacks.Reset(); UTableUtil::rmgcref(this);}
};

UCLASS(meta=(Lua=1))
class UDelegate_UApplicationLifecycleComponent_ApplicationWillDeactivateDelegate : public UObject{
	GENERATED_BODY()
public:
	TSet<int> LuaCallBacks;
	UDelegate_UApplicationLifecycleComponent_ApplicationWillDeactivateDelegate() {};
	using delegatetype = decltype(((UApplicationLifecycleComponent*)0)->ApplicationWillDeactivateDelegate);
	void Init(delegatetype& theDelegate){
		UTableUtil::addgcref((UObject*)this);
		theDelegate.AddDynamic(this, &UDelegate_UApplicationLifecycleComponent_ApplicationWillDeactivateDelegate::CallBack);
	}

	UFUNCTION()
	void CallBack(){
		for (auto v : LuaCallBacks){
			UTableUtil::callid(v);
		}
	}

	UFUNCTION()
	int Add() {int r = UTableUtil::pushluafunc(-1);LuaCallBacks.Add(r);return r;}
	UFUNCTION()
	void Remove(int32 r)
	{
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void RemoveByF()
	{
		int r = UTableUtil::popluafunc(-1);
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void Destroy() { LuaCallBacks.Reset(); UTableUtil::rmgcref(this);}
};

UCLASS(meta=(Lua=1))
class UDelegate_UApplicationLifecycleComponent_ApplicationHasReactivatedDelegate : public UObject{
	GENERATED_BODY()
public:
	TSet<int> LuaCallBacks;
	UDelegate_UApplicationLifecycleComponent_ApplicationHasReactivatedDelegate() {};
	using delegatetype = decltype(((UApplicationLifecycleComponent*)0)->ApplicationHasReactivatedDelegate);
	void Init(delegatetype& theDelegate){
		UTableUtil::addgcref((UObject*)this);
		theDelegate.AddDynamic(this, &UDelegate_UApplicationLifecycleComponent_ApplicationHasReactivatedDelegate::CallBack);
	}

	UFUNCTION()
	void CallBack(){
		for (auto v : LuaCallBacks){
			UTableUtil::callid(v);
		}
	}

	UFUNCTION()
	int Add() {int r = UTableUtil::pushluafunc(-1);LuaCallBacks.Add(r);return r;}
	UFUNCTION()
	void Remove(int32 r)
	{
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void RemoveByF()
	{
		int r = UTableUtil::popluafunc(-1);
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void Destroy() { LuaCallBacks.Reset(); UTableUtil::rmgcref(this);}
};

UCLASS(meta=(Lua=1))
class UDelegate_UApplicationLifecycleComponent_ApplicationWillEnterBackgroundDelegate : public UObject{
	GENERATED_BODY()
public:
	TSet<int> LuaCallBacks;
	UDelegate_UApplicationLifecycleComponent_ApplicationWillEnterBackgroundDelegate() {};
	using delegatetype = decltype(((UApplicationLifecycleComponent*)0)->ApplicationWillEnterBackgroundDelegate);
	void Init(delegatetype& theDelegate){
		UTableUtil::addgcref((UObject*)this);
		theDelegate.AddDynamic(this, &UDelegate_UApplicationLifecycleComponent_ApplicationWillEnterBackgroundDelegate::CallBack);
	}

	UFUNCTION()
	void CallBack(){
		for (auto v : LuaCallBacks){
			UTableUtil::callid(v);
		}
	}

	UFUNCTION()
	int Add() {int r = UTableUtil::pushluafunc(-1);LuaCallBacks.Add(r);return r;}
	UFUNCTION()
	void Remove(int32 r)
	{
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void RemoveByF()
	{
		int r = UTableUtil::popluafunc(-1);
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void Destroy() { LuaCallBacks.Reset(); UTableUtil::rmgcref(this);}
};

UCLASS(meta=(Lua=1))
class UDelegate_UApplicationLifecycleComponent_ApplicationHasEnteredForegroundDelegate : public UObject{
	GENERATED_BODY()
public:
	TSet<int> LuaCallBacks;
	UDelegate_UApplicationLifecycleComponent_ApplicationHasEnteredForegroundDelegate() {};
	using delegatetype = decltype(((UApplicationLifecycleComponent*)0)->ApplicationHasEnteredForegroundDelegate);
	void Init(delegatetype& theDelegate){
		UTableUtil::addgcref((UObject*)this);
		theDelegate.AddDynamic(this, &UDelegate_UApplicationLifecycleComponent_ApplicationHasEnteredForegroundDelegate::CallBack);
	}

	UFUNCTION()
	void CallBack(){
		for (auto v : LuaCallBacks){
			UTableUtil::callid(v);
		}
	}

	UFUNCTION()
	int Add() {int r = UTableUtil::pushluafunc(-1);LuaCallBacks.Add(r);return r;}
	UFUNCTION()
	void Remove(int32 r)
	{
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void RemoveByF()
	{
		int r = UTableUtil::popluafunc(-1);
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void Destroy() { LuaCallBacks.Reset(); UTableUtil::rmgcref(this);}
};

UCLASS(meta=(Lua=1))
class UDelegate_UApplicationLifecycleComponent_ApplicationWillTerminateDelegate : public UObject{
	GENERATED_BODY()
public:
	TSet<int> LuaCallBacks;
	UDelegate_UApplicationLifecycleComponent_ApplicationWillTerminateDelegate() {};
	using delegatetype = decltype(((UApplicationLifecycleComponent*)0)->ApplicationWillTerminateDelegate);
	void Init(delegatetype& theDelegate){
		UTableUtil::addgcref((UObject*)this);
		theDelegate.AddDynamic(this, &UDelegate_UApplicationLifecycleComponent_ApplicationWillTerminateDelegate::CallBack);
	}

	UFUNCTION()
	void CallBack(){
		for (auto v : LuaCallBacks){
			UTableUtil::callid(v);
		}
	}

	UFUNCTION()
	int Add() {int r = UTableUtil::pushluafunc(-1);LuaCallBacks.Add(r);return r;}
	UFUNCTION()
	void Remove(int32 r)
	{
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void RemoveByF()
	{
		int r = UTableUtil::popluafunc(-1);
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void Destroy() { LuaCallBacks.Reset(); UTableUtil::rmgcref(this);}
};

UCLASS(meta=(Lua=1))
class UDelegate_UPlatformEventsComponent_PlatformChangedToLaptopModeDelegate : public UObject{
	GENERATED_BODY()
public:
	TSet<int> LuaCallBacks;
	UDelegate_UPlatformEventsComponent_PlatformChangedToLaptopModeDelegate() {};
	using delegatetype = decltype(((UPlatformEventsComponent*)0)->PlatformChangedToLaptopModeDelegate);
	void Init(delegatetype& theDelegate){
		UTableUtil::addgcref((UObject*)this);
		theDelegate.AddDynamic(this, &UDelegate_UPlatformEventsComponent_PlatformChangedToLaptopModeDelegate::CallBack);
	}

	UFUNCTION()
	void CallBack(){
		for (auto v : LuaCallBacks){
			UTableUtil::callid(v);
		}
	}

	UFUNCTION()
	int Add() {int r = UTableUtil::pushluafunc(-1);LuaCallBacks.Add(r);return r;}
	UFUNCTION()
	void Remove(int32 r)
	{
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void RemoveByF()
	{
		int r = UTableUtil::popluafunc(-1);
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void Destroy() { LuaCallBacks.Reset(); UTableUtil::rmgcref(this);}
};

UCLASS(meta=(Lua=1))
class UDelegate_UPlatformEventsComponent_PlatformChangedToTabletModeDelegate : public UObject{
	GENERATED_BODY()
public:
	TSet<int> LuaCallBacks;
	UDelegate_UPlatformEventsComponent_PlatformChangedToTabletModeDelegate() {};
	using delegatetype = decltype(((UPlatformEventsComponent*)0)->PlatformChangedToTabletModeDelegate);
	void Init(delegatetype& theDelegate){
		UTableUtil::addgcref((UObject*)this);
		theDelegate.AddDynamic(this, &UDelegate_UPlatformEventsComponent_PlatformChangedToTabletModeDelegate::CallBack);
	}

	UFUNCTION()
	void CallBack(){
		for (auto v : LuaCallBacks){
			UTableUtil::callid(v);
		}
	}

	UFUNCTION()
	int Add() {int r = UTableUtil::pushluafunc(-1);LuaCallBacks.Add(r);return r;}
	UFUNCTION()
	void Remove(int32 r)
	{
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void RemoveByF()
	{
		int r = UTableUtil::popluafunc(-1);
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void Destroy() { LuaCallBacks.Reset(); UTableUtil::rmgcref(this);}
};

UCLASS(meta=(Lua=1))
class UDelegate_USceneComponent_PhysicsVolumeChangedDelegate : public UObject{
	GENERATED_BODY()
public:
	TSet<int> LuaCallBacks;
	UDelegate_USceneComponent_PhysicsVolumeChangedDelegate() {};
	using delegatetype = decltype(((USceneComponent*)0)->PhysicsVolumeChangedDelegate);
	void Init(delegatetype& theDelegate){
		UTableUtil::addgcref((UObject*)this);
		theDelegate.AddDynamic(this, &UDelegate_USceneComponent_PhysicsVolumeChangedDelegate::CallBack);
	}

	UFUNCTION()
	void CallBack( APhysicsVolume* NewVolume){
		for (auto v : LuaCallBacks){
			UTableUtil::callid(v,  NewVolume);
		}
	}

	UFUNCTION()
	int Add() {int r = UTableUtil::pushluafunc(-1);LuaCallBacks.Add(r);return r;}
	UFUNCTION()
	void Remove(int32 r)
	{
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void RemoveByF()
	{
		int r = UTableUtil::popluafunc(-1);
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void Destroy() { LuaCallBacks.Reset(); UTableUtil::rmgcref(this);}
};

UCLASS(meta=(Lua=1))
class UDelegate_UInterpToMovementComponent_OnInterpToReverse : public UObject{
	GENERATED_BODY()
public:
	TSet<int> LuaCallBacks;
	UDelegate_UInterpToMovementComponent_OnInterpToReverse() {};
	using delegatetype = decltype(((UInterpToMovementComponent*)0)->OnInterpToReverse);
	void Init(delegatetype& theDelegate){
		UTableUtil::addgcref((UObject*)this);
		theDelegate.AddDynamic(this, &UDelegate_UInterpToMovementComponent_OnInterpToReverse::CallBack);
	}

	UFUNCTION()
	void CallBack( const FHitResult& ImpactResult, float Time){
		for (auto v : LuaCallBacks){
			UTableUtil::callid(v,  ImpactResult, Time);
		}
	}

	UFUNCTION()
	int Add() {int r = UTableUtil::pushluafunc(-1);LuaCallBacks.Add(r);return r;}
	UFUNCTION()
	void Remove(int32 r)
	{
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void RemoveByF()
	{
		int r = UTableUtil::popluafunc(-1);
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void Destroy() { LuaCallBacks.Reset(); UTableUtil::rmgcref(this);}
};

UCLASS(meta=(Lua=1))
class UDelegate_UInterpToMovementComponent_OnInterpToStop : public UObject{
	GENERATED_BODY()
public:
	TSet<int> LuaCallBacks;
	UDelegate_UInterpToMovementComponent_OnInterpToStop() {};
	using delegatetype = decltype(((UInterpToMovementComponent*)0)->OnInterpToStop);
	void Init(delegatetype& theDelegate){
		UTableUtil::addgcref((UObject*)this);
		theDelegate.AddDynamic(this, &UDelegate_UInterpToMovementComponent_OnInterpToStop::CallBack);
	}

	UFUNCTION()
	void CallBack( const FHitResult& ImpactResult, float Time){
		for (auto v : LuaCallBacks){
			UTableUtil::callid(v,  ImpactResult, Time);
		}
	}

	UFUNCTION()
	int Add() {int r = UTableUtil::pushluafunc(-1);LuaCallBacks.Add(r);return r;}
	UFUNCTION()
	void Remove(int32 r)
	{
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void RemoveByF()
	{
		int r = UTableUtil::popluafunc(-1);
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void Destroy() { LuaCallBacks.Reset(); UTableUtil::rmgcref(this);}
};

UCLASS(meta=(Lua=1))
class UDelegate_UInterpToMovementComponent_OnWaitBeginDelegate : public UObject{
	GENERATED_BODY()
public:
	TSet<int> LuaCallBacks;
	UDelegate_UInterpToMovementComponent_OnWaitBeginDelegate() {};
	using delegatetype = decltype(((UInterpToMovementComponent*)0)->OnWaitBeginDelegate);
	void Init(delegatetype& theDelegate){
		UTableUtil::addgcref((UObject*)this);
		theDelegate.AddDynamic(this, &UDelegate_UInterpToMovementComponent_OnWaitBeginDelegate::CallBack);
	}

	UFUNCTION()
	void CallBack( const FHitResult& ImpactResult, float Time){
		for (auto v : LuaCallBacks){
			UTableUtil::callid(v,  ImpactResult, Time);
		}
	}

	UFUNCTION()
	int Add() {int r = UTableUtil::pushluafunc(-1);LuaCallBacks.Add(r);return r;}
	UFUNCTION()
	void Remove(int32 r)
	{
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void RemoveByF()
	{
		int r = UTableUtil::popluafunc(-1);
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void Destroy() { LuaCallBacks.Reset(); UTableUtil::rmgcref(this);}
};

UCLASS(meta=(Lua=1))
class UDelegate_UInterpToMovementComponent_OnWaitEndDelegate : public UObject{
	GENERATED_BODY()
public:
	TSet<int> LuaCallBacks;
	UDelegate_UInterpToMovementComponent_OnWaitEndDelegate() {};
	using delegatetype = decltype(((UInterpToMovementComponent*)0)->OnWaitEndDelegate);
	void Init(delegatetype& theDelegate){
		UTableUtil::addgcref((UObject*)this);
		theDelegate.AddDynamic(this, &UDelegate_UInterpToMovementComponent_OnWaitEndDelegate::CallBack);
	}

	UFUNCTION()
	void CallBack( const FHitResult& ImpactResult, float Time){
		for (auto v : LuaCallBacks){
			UTableUtil::callid(v,  ImpactResult, Time);
		}
	}

	UFUNCTION()
	int Add() {int r = UTableUtil::pushluafunc(-1);LuaCallBacks.Add(r);return r;}
	UFUNCTION()
	void Remove(int32 r)
	{
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void RemoveByF()
	{
		int r = UTableUtil::popluafunc(-1);
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void Destroy() { LuaCallBacks.Reset(); UTableUtil::rmgcref(this);}
};

UCLASS(meta=(Lua=1))
class UDelegate_UInterpToMovementComponent_OnResetDelegate : public UObject{
	GENERATED_BODY()
public:
	TSet<int> LuaCallBacks;
	UDelegate_UInterpToMovementComponent_OnResetDelegate() {};
	using delegatetype = decltype(((UInterpToMovementComponent*)0)->OnResetDelegate);
	void Init(delegatetype& theDelegate){
		UTableUtil::addgcref((UObject*)this);
		theDelegate.AddDynamic(this, &UDelegate_UInterpToMovementComponent_OnResetDelegate::CallBack);
	}

	UFUNCTION()
	void CallBack( const FHitResult& ImpactResult, float Time){
		for (auto v : LuaCallBacks){
			UTableUtil::callid(v,  ImpactResult, Time);
		}
	}

	UFUNCTION()
	int Add() {int r = UTableUtil::pushluafunc(-1);LuaCallBacks.Add(r);return r;}
	UFUNCTION()
	void Remove(int32 r)
	{
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void RemoveByF()
	{
		int r = UTableUtil::popluafunc(-1);
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void Destroy() { LuaCallBacks.Reset(); UTableUtil::rmgcref(this);}
};

UCLASS(meta=(Lua=1))
class UDelegate_UProjectileMovementComponent_OnProjectileBounce : public UObject{
	GENERATED_BODY()
public:
	TSet<int> LuaCallBacks;
	UDelegate_UProjectileMovementComponent_OnProjectileBounce() {};
	using delegatetype = decltype(((UProjectileMovementComponent*)0)->OnProjectileBounce);
	void Init(delegatetype& theDelegate){
		UTableUtil::addgcref((UObject*)this);
		theDelegate.AddDynamic(this, &UDelegate_UProjectileMovementComponent_OnProjectileBounce::CallBack);
	}

	UFUNCTION()
	void CallBack( const FHitResult& ImpactResult, const FVector& ImpactVelocity){
		for (auto v : LuaCallBacks){
			UTableUtil::callid(v,  ImpactResult, ImpactVelocity);
		}
	}

	UFUNCTION()
	int Add() {int r = UTableUtil::pushluafunc(-1);LuaCallBacks.Add(r);return r;}
	UFUNCTION()
	void Remove(int32 r)
	{
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void RemoveByF()
	{
		int r = UTableUtil::popluafunc(-1);
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void Destroy() { LuaCallBacks.Reset(); UTableUtil::rmgcref(this);}
};

UCLASS(meta=(Lua=1))
class UDelegate_UProjectileMovementComponent_OnProjectileStop : public UObject{
	GENERATED_BODY()
public:
	TSet<int> LuaCallBacks;
	UDelegate_UProjectileMovementComponent_OnProjectileStop() {};
	using delegatetype = decltype(((UProjectileMovementComponent*)0)->OnProjectileStop);
	void Init(delegatetype& theDelegate){
		UTableUtil::addgcref((UObject*)this);
		theDelegate.AddDynamic(this, &UDelegate_UProjectileMovementComponent_OnProjectileStop::CallBack);
	}

	UFUNCTION()
	void CallBack( const FHitResult& ImpactResult){
		for (auto v : LuaCallBacks){
			UTableUtil::callid(v,  ImpactResult);
		}
	}

	UFUNCTION()
	int Add() {int r = UTableUtil::pushluafunc(-1);LuaCallBacks.Add(r);return r;}
	UFUNCTION()
	void Remove(int32 r)
	{
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void RemoveByF()
	{
		int r = UTableUtil::popluafunc(-1);
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void Destroy() { LuaCallBacks.Reset(); UTableUtil::rmgcref(this);}
};

UCLASS(meta=(Lua=1))
class UDelegate_UAudioComponent_OnAudioFinished : public UObject{
	GENERATED_BODY()
public:
	TSet<int> LuaCallBacks;
	UDelegate_UAudioComponent_OnAudioFinished() {};
	using delegatetype = decltype(((UAudioComponent*)0)->OnAudioFinished);
	void Init(delegatetype& theDelegate){
		UTableUtil::addgcref((UObject*)this);
		theDelegate.AddDynamic(this, &UDelegate_UAudioComponent_OnAudioFinished::CallBack);
	}

	UFUNCTION()
	void CallBack(){
		for (auto v : LuaCallBacks){
			UTableUtil::callid(v);
		}
	}

	UFUNCTION()
	int Add() {int r = UTableUtil::pushluafunc(-1);LuaCallBacks.Add(r);return r;}
	UFUNCTION()
	void Remove(int32 r)
	{
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void RemoveByF()
	{
		int r = UTableUtil::popluafunc(-1);
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void Destroy() { LuaCallBacks.Reset(); UTableUtil::rmgcref(this);}
};

UCLASS(meta=(Lua=1))
class UDelegate_UAudioComponent_OnAudioPlaybackPercent : public UObject{
	GENERATED_BODY()
public:
	TSet<int> LuaCallBacks;
	UDelegate_UAudioComponent_OnAudioPlaybackPercent() {};
	using delegatetype = decltype(((UAudioComponent*)0)->OnAudioPlaybackPercent);
	void Init(delegatetype& theDelegate){
		UTableUtil::addgcref((UObject*)this);
		theDelegate.AddDynamic(this, &UDelegate_UAudioComponent_OnAudioPlaybackPercent::CallBack);
	}

	UFUNCTION()
	void CallBack( const USoundWave* PlayingSoundWave, const float PlaybackPercent){
		for (auto v : LuaCallBacks){
			UTableUtil::callid(v,  PlayingSoundWave, PlaybackPercent);
		}
	}

	UFUNCTION()
	int Add() {int r = UTableUtil::pushluafunc(-1);LuaCallBacks.Add(r);return r;}
	UFUNCTION()
	void Remove(int32 r)
	{
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void RemoveByF()
	{
		int r = UTableUtil::popluafunc(-1);
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void Destroy() { LuaCallBacks.Reset(); UTableUtil::rmgcref(this);}
};

UCLASS(meta=(Lua=1))
class UDelegate_UPhysicsConstraintComponent_OnConstraintBroken : public UObject{
	GENERATED_BODY()
public:
	TSet<int> LuaCallBacks;
	UDelegate_UPhysicsConstraintComponent_OnConstraintBroken() {};
	using delegatetype = decltype(((UPhysicsConstraintComponent*)0)->OnConstraintBroken);
	void Init(delegatetype& theDelegate){
		UTableUtil::addgcref((UObject*)this);
		theDelegate.AddDynamic(this, &UDelegate_UPhysicsConstraintComponent_OnConstraintBroken::CallBack);
	}

	UFUNCTION()
	void CallBack( int32 ConstraintIndex){
		for (auto v : LuaCallBacks){
			UTableUtil::callid(v,  ConstraintIndex);
		}
	}

	UFUNCTION()
	int Add() {int r = UTableUtil::pushluafunc(-1);LuaCallBacks.Add(r);return r;}
	UFUNCTION()
	void Remove(int32 r)
	{
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void RemoveByF()
	{
		int r = UTableUtil::popluafunc(-1);
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void Destroy() { LuaCallBacks.Reset(); UTableUtil::rmgcref(this);}
};

UCLASS(meta=(Lua=1))
class UDelegate_UPrimitiveComponent_OnComponentHit : public UObject{
	GENERATED_BODY()
public:
	TSet<int> LuaCallBacks;
	UDelegate_UPrimitiveComponent_OnComponentHit() {};
	using delegatetype = decltype(((UPrimitiveComponent*)0)->OnComponentHit);
	void Init(delegatetype& theDelegate){
		UTableUtil::addgcref((UObject*)this);
		theDelegate.AddDynamic(this, &UDelegate_UPrimitiveComponent_OnComponentHit::CallBack);
	}

	UFUNCTION()
	void CallBack( UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit){
		for (auto v : LuaCallBacks){
			UTableUtil::callid(v,  HitComponent, OtherActor, OtherComp, NormalImpulse, Hit);
		}
	}

	UFUNCTION()
	int Add() {int r = UTableUtil::pushluafunc(-1);LuaCallBacks.Add(r);return r;}
	UFUNCTION()
	void Remove(int32 r)
	{
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void RemoveByF()
	{
		int r = UTableUtil::popluafunc(-1);
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void Destroy() { LuaCallBacks.Reset(); UTableUtil::rmgcref(this);}
};

UCLASS(meta=(Lua=1))
class UDelegate_UPrimitiveComponent_OnComponentBeginOverlap : public UObject{
	GENERATED_BODY()
public:
	TSet<int> LuaCallBacks;
	UDelegate_UPrimitiveComponent_OnComponentBeginOverlap() {};
	using delegatetype = decltype(((UPrimitiveComponent*)0)->OnComponentBeginOverlap);
	void Init(delegatetype& theDelegate){
		UTableUtil::addgcref((UObject*)this);
		theDelegate.AddDynamic(this, &UDelegate_UPrimitiveComponent_OnComponentBeginOverlap::CallBack);
	}

	UFUNCTION()
	void CallBack( UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult){
		for (auto v : LuaCallBacks){
			UTableUtil::callid(v,  OverlappedComponent, OtherActor, OtherComp, OtherBodyIndex, bFromSweep, SweepResult);
		}
	}

	UFUNCTION()
	int Add() {int r = UTableUtil::pushluafunc(-1);LuaCallBacks.Add(r);return r;}
	UFUNCTION()
	void Remove(int32 r)
	{
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void RemoveByF()
	{
		int r = UTableUtil::popluafunc(-1);
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void Destroy() { LuaCallBacks.Reset(); UTableUtil::rmgcref(this);}
};

UCLASS(meta=(Lua=1))
class UDelegate_UPrimitiveComponent_OnComponentEndOverlap : public UObject{
	GENERATED_BODY()
public:
	TSet<int> LuaCallBacks;
	UDelegate_UPrimitiveComponent_OnComponentEndOverlap() {};
	using delegatetype = decltype(((UPrimitiveComponent*)0)->OnComponentEndOverlap);
	void Init(delegatetype& theDelegate){
		UTableUtil::addgcref((UObject*)this);
		theDelegate.AddDynamic(this, &UDelegate_UPrimitiveComponent_OnComponentEndOverlap::CallBack);
	}

	UFUNCTION()
	void CallBack( UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex){
		for (auto v : LuaCallBacks){
			UTableUtil::callid(v,  OverlappedComponent, OtherActor, OtherComp, OtherBodyIndex);
		}
	}

	UFUNCTION()
	int Add() {int r = UTableUtil::pushluafunc(-1);LuaCallBacks.Add(r);return r;}
	UFUNCTION()
	void Remove(int32 r)
	{
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void RemoveByF()
	{
		int r = UTableUtil::popluafunc(-1);
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void Destroy() { LuaCallBacks.Reset(); UTableUtil::rmgcref(this);}
};

UCLASS(meta=(Lua=1))
class UDelegate_UPrimitiveComponent_OnComponentWake : public UObject{
	GENERATED_BODY()
public:
	TSet<int> LuaCallBacks;
	UDelegate_UPrimitiveComponent_OnComponentWake() {};
	using delegatetype = decltype(((UPrimitiveComponent*)0)->OnComponentWake);
	void Init(delegatetype& theDelegate){
		UTableUtil::addgcref((UObject*)this);
		theDelegate.AddDynamic(this, &UDelegate_UPrimitiveComponent_OnComponentWake::CallBack);
	}

	UFUNCTION()
	void CallBack( UPrimitiveComponent* WakingComponent, FName BoneName){
		for (auto v : LuaCallBacks){
			UTableUtil::callid(v,  WakingComponent, BoneName);
		}
	}

	UFUNCTION()
	int Add() {int r = UTableUtil::pushluafunc(-1);LuaCallBacks.Add(r);return r;}
	UFUNCTION()
	void Remove(int32 r)
	{
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void RemoveByF()
	{
		int r = UTableUtil::popluafunc(-1);
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void Destroy() { LuaCallBacks.Reset(); UTableUtil::rmgcref(this);}
};

UCLASS(meta=(Lua=1))
class UDelegate_UPrimitiveComponent_OnComponentSleep : public UObject{
	GENERATED_BODY()
public:
	TSet<int> LuaCallBacks;
	UDelegate_UPrimitiveComponent_OnComponentSleep() {};
	using delegatetype = decltype(((UPrimitiveComponent*)0)->OnComponentSleep);
	void Init(delegatetype& theDelegate){
		UTableUtil::addgcref((UObject*)this);
		theDelegate.AddDynamic(this, &UDelegate_UPrimitiveComponent_OnComponentSleep::CallBack);
	}

	UFUNCTION()
	void CallBack( UPrimitiveComponent* SleepingComponent, FName BoneName){
		for (auto v : LuaCallBacks){
			UTableUtil::callid(v,  SleepingComponent, BoneName);
		}
	}

	UFUNCTION()
	int Add() {int r = UTableUtil::pushluafunc(-1);LuaCallBacks.Add(r);return r;}
	UFUNCTION()
	void Remove(int32 r)
	{
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void RemoveByF()
	{
		int r = UTableUtil::popluafunc(-1);
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void Destroy() { LuaCallBacks.Reset(); UTableUtil::rmgcref(this);}
};

UCLASS(meta=(Lua=1))
class UDelegate_UPrimitiveComponent_OnBeginCursorOver : public UObject{
	GENERATED_BODY()
public:
	TSet<int> LuaCallBacks;
	UDelegate_UPrimitiveComponent_OnBeginCursorOver() {};
	using delegatetype = decltype(((UPrimitiveComponent*)0)->OnBeginCursorOver);
	void Init(delegatetype& theDelegate){
		UTableUtil::addgcref((UObject*)this);
		theDelegate.AddDynamic(this, &UDelegate_UPrimitiveComponent_OnBeginCursorOver::CallBack);
	}

	UFUNCTION()
	void CallBack( UPrimitiveComponent* TouchedComponent){
		for (auto v : LuaCallBacks){
			UTableUtil::callid(v,  TouchedComponent);
		}
	}

	UFUNCTION()
	int Add() {int r = UTableUtil::pushluafunc(-1);LuaCallBacks.Add(r);return r;}
	UFUNCTION()
	void Remove(int32 r)
	{
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void RemoveByF()
	{
		int r = UTableUtil::popluafunc(-1);
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void Destroy() { LuaCallBacks.Reset(); UTableUtil::rmgcref(this);}
};

UCLASS(meta=(Lua=1))
class UDelegate_UPrimitiveComponent_OnEndCursorOver : public UObject{
	GENERATED_BODY()
public:
	TSet<int> LuaCallBacks;
	UDelegate_UPrimitiveComponent_OnEndCursorOver() {};
	using delegatetype = decltype(((UPrimitiveComponent*)0)->OnEndCursorOver);
	void Init(delegatetype& theDelegate){
		UTableUtil::addgcref((UObject*)this);
		theDelegate.AddDynamic(this, &UDelegate_UPrimitiveComponent_OnEndCursorOver::CallBack);
	}

	UFUNCTION()
	void CallBack( UPrimitiveComponent* TouchedComponent){
		for (auto v : LuaCallBacks){
			UTableUtil::callid(v,  TouchedComponent);
		}
	}

	UFUNCTION()
	int Add() {int r = UTableUtil::pushluafunc(-1);LuaCallBacks.Add(r);return r;}
	UFUNCTION()
	void Remove(int32 r)
	{
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void RemoveByF()
	{
		int r = UTableUtil::popluafunc(-1);
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void Destroy() { LuaCallBacks.Reset(); UTableUtil::rmgcref(this);}
};

UCLASS(meta=(Lua=1))
class UDelegate_UPrimitiveComponent_OnClicked : public UObject{
	GENERATED_BODY()
public:
	TSet<int> LuaCallBacks;
	UDelegate_UPrimitiveComponent_OnClicked() {};
	using delegatetype = decltype(((UPrimitiveComponent*)0)->OnClicked);
	void Init(delegatetype& theDelegate){
		UTableUtil::addgcref((UObject*)this);
		theDelegate.AddDynamic(this, &UDelegate_UPrimitiveComponent_OnClicked::CallBack);
	}

	UFUNCTION()
	void CallBack( UPrimitiveComponent* TouchedComponent, FKey ButtonPressed){
		for (auto v : LuaCallBacks){
			UTableUtil::callid(v,  TouchedComponent, ButtonPressed);
		}
	}

	UFUNCTION()
	int Add() {int r = UTableUtil::pushluafunc(-1);LuaCallBacks.Add(r);return r;}
	UFUNCTION()
	void Remove(int32 r)
	{
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void RemoveByF()
	{
		int r = UTableUtil::popluafunc(-1);
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void Destroy() { LuaCallBacks.Reset(); UTableUtil::rmgcref(this);}
};

UCLASS(meta=(Lua=1))
class UDelegate_UPrimitiveComponent_OnReleased : public UObject{
	GENERATED_BODY()
public:
	TSet<int> LuaCallBacks;
	UDelegate_UPrimitiveComponent_OnReleased() {};
	using delegatetype = decltype(((UPrimitiveComponent*)0)->OnReleased);
	void Init(delegatetype& theDelegate){
		UTableUtil::addgcref((UObject*)this);
		theDelegate.AddDynamic(this, &UDelegate_UPrimitiveComponent_OnReleased::CallBack);
	}

	UFUNCTION()
	void CallBack( UPrimitiveComponent* TouchedComponent, FKey ButtonReleased){
		for (auto v : LuaCallBacks){
			UTableUtil::callid(v,  TouchedComponent, ButtonReleased);
		}
	}

	UFUNCTION()
	int Add() {int r = UTableUtil::pushluafunc(-1);LuaCallBacks.Add(r);return r;}
	UFUNCTION()
	void Remove(int32 r)
	{
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void RemoveByF()
	{
		int r = UTableUtil::popluafunc(-1);
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void Destroy() { LuaCallBacks.Reset(); UTableUtil::rmgcref(this);}
};

UCLASS(meta=(Lua=1))
class UDelegate_UPrimitiveComponent_OnInputTouchBegin : public UObject{
	GENERATED_BODY()
public:
	TSet<int> LuaCallBacks;
	UDelegate_UPrimitiveComponent_OnInputTouchBegin() {};
	using delegatetype = decltype(((UPrimitiveComponent*)0)->OnInputTouchBegin);
	void Init(delegatetype& theDelegate){
		UTableUtil::addgcref((UObject*)this);
		theDelegate.AddDynamic(this, &UDelegate_UPrimitiveComponent_OnInputTouchBegin::CallBack);
	}

	UFUNCTION()
	void CallBack( ETouchIndex::Type FingerIndex, UPrimitiveComponent* TouchedComponent){
		for (auto v : LuaCallBacks){
			UTableUtil::callid(v,  (int)(FingerIndex), TouchedComponent);
		}
	}

	UFUNCTION()
	int Add() {int r = UTableUtil::pushluafunc(-1);LuaCallBacks.Add(r);return r;}
	UFUNCTION()
	void Remove(int32 r)
	{
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void RemoveByF()
	{
		int r = UTableUtil::popluafunc(-1);
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void Destroy() { LuaCallBacks.Reset(); UTableUtil::rmgcref(this);}
};

UCLASS(meta=(Lua=1))
class UDelegate_UPrimitiveComponent_OnInputTouchEnd : public UObject{
	GENERATED_BODY()
public:
	TSet<int> LuaCallBacks;
	UDelegate_UPrimitiveComponent_OnInputTouchEnd() {};
	using delegatetype = decltype(((UPrimitiveComponent*)0)->OnInputTouchEnd);
	void Init(delegatetype& theDelegate){
		UTableUtil::addgcref((UObject*)this);
		theDelegate.AddDynamic(this, &UDelegate_UPrimitiveComponent_OnInputTouchEnd::CallBack);
	}

	UFUNCTION()
	void CallBack( ETouchIndex::Type FingerIndex, UPrimitiveComponent* TouchedComponent){
		for (auto v : LuaCallBacks){
			UTableUtil::callid(v,  (int)(FingerIndex), TouchedComponent);
		}
	}

	UFUNCTION()
	int Add() {int r = UTableUtil::pushluafunc(-1);LuaCallBacks.Add(r);return r;}
	UFUNCTION()
	void Remove(int32 r)
	{
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void RemoveByF()
	{
		int r = UTableUtil::popluafunc(-1);
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void Destroy() { LuaCallBacks.Reset(); UTableUtil::rmgcref(this);}
};

UCLASS(meta=(Lua=1))
class UDelegate_UPrimitiveComponent_OnInputTouchEnter : public UObject{
	GENERATED_BODY()
public:
	TSet<int> LuaCallBacks;
	UDelegate_UPrimitiveComponent_OnInputTouchEnter() {};
	using delegatetype = decltype(((UPrimitiveComponent*)0)->OnInputTouchEnter);
	void Init(delegatetype& theDelegate){
		UTableUtil::addgcref((UObject*)this);
		theDelegate.AddDynamic(this, &UDelegate_UPrimitiveComponent_OnInputTouchEnter::CallBack);
	}

	UFUNCTION()
	void CallBack( ETouchIndex::Type FingerIndex, UPrimitiveComponent* TouchedComponent){
		for (auto v : LuaCallBacks){
			UTableUtil::callid(v,  (int)(FingerIndex), TouchedComponent);
		}
	}

	UFUNCTION()
	int Add() {int r = UTableUtil::pushluafunc(-1);LuaCallBacks.Add(r);return r;}
	UFUNCTION()
	void Remove(int32 r)
	{
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void RemoveByF()
	{
		int r = UTableUtil::popluafunc(-1);
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void Destroy() { LuaCallBacks.Reset(); UTableUtil::rmgcref(this);}
};

UCLASS(meta=(Lua=1))
class UDelegate_UPrimitiveComponent_OnInputTouchLeave : public UObject{
	GENERATED_BODY()
public:
	TSet<int> LuaCallBacks;
	UDelegate_UPrimitiveComponent_OnInputTouchLeave() {};
	using delegatetype = decltype(((UPrimitiveComponent*)0)->OnInputTouchLeave);
	void Init(delegatetype& theDelegate){
		UTableUtil::addgcref((UObject*)this);
		theDelegate.AddDynamic(this, &UDelegate_UPrimitiveComponent_OnInputTouchLeave::CallBack);
	}

	UFUNCTION()
	void CallBack( ETouchIndex::Type FingerIndex, UPrimitiveComponent* TouchedComponent){
		for (auto v : LuaCallBacks){
			UTableUtil::callid(v,  (int)(FingerIndex), TouchedComponent);
		}
	}

	UFUNCTION()
	int Add() {int r = UTableUtil::pushluafunc(-1);LuaCallBacks.Add(r);return r;}
	UFUNCTION()
	void Remove(int32 r)
	{
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void RemoveByF()
	{
		int r = UTableUtil::popluafunc(-1);
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void Destroy() { LuaCallBacks.Reset(); UTableUtil::rmgcref(this);}
};

UCLASS(meta=(Lua=1))
class UDelegate_UParticleSystemComponent_OnParticleSpawn : public UObject{
	GENERATED_BODY()
public:
	TSet<int> LuaCallBacks;
	UDelegate_UParticleSystemComponent_OnParticleSpawn() {};
	using delegatetype = decltype(((UParticleSystemComponent*)0)->OnParticleSpawn);
	void Init(delegatetype& theDelegate){
		UTableUtil::addgcref((UObject*)this);
		theDelegate.AddDynamic(this, &UDelegate_UParticleSystemComponent_OnParticleSpawn::CallBack);
	}

	UFUNCTION()
	void CallBack( FName EventName, float EmitterTime, FVector Location, FVector Velocity){
		for (auto v : LuaCallBacks){
			UTableUtil::callid(v,  EventName, EmitterTime, Location, Velocity);
		}
	}

	UFUNCTION()
	int Add() {int r = UTableUtil::pushluafunc(-1);LuaCallBacks.Add(r);return r;}
	UFUNCTION()
	void Remove(int32 r)
	{
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void RemoveByF()
	{
		int r = UTableUtil::popluafunc(-1);
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void Destroy() { LuaCallBacks.Reset(); UTableUtil::rmgcref(this);}
};

UCLASS(meta=(Lua=1))
class UDelegate_UParticleSystemComponent_OnParticleBurst : public UObject{
	GENERATED_BODY()
public:
	TSet<int> LuaCallBacks;
	UDelegate_UParticleSystemComponent_OnParticleBurst() {};
	using delegatetype = decltype(((UParticleSystemComponent*)0)->OnParticleBurst);
	void Init(delegatetype& theDelegate){
		UTableUtil::addgcref((UObject*)this);
		theDelegate.AddDynamic(this, &UDelegate_UParticleSystemComponent_OnParticleBurst::CallBack);
	}

	UFUNCTION()
	void CallBack( FName EventName, float EmitterTime, int32 ParticleCount){
		for (auto v : LuaCallBacks){
			UTableUtil::callid(v,  EventName, EmitterTime, ParticleCount);
		}
	}

	UFUNCTION()
	int Add() {int r = UTableUtil::pushluafunc(-1);LuaCallBacks.Add(r);return r;}
	UFUNCTION()
	void Remove(int32 r)
	{
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void RemoveByF()
	{
		int r = UTableUtil::popluafunc(-1);
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void Destroy() { LuaCallBacks.Reset(); UTableUtil::rmgcref(this);}
};

UCLASS(meta=(Lua=1))
class UDelegate_UParticleSystemComponent_OnParticleDeath : public UObject{
	GENERATED_BODY()
public:
	TSet<int> LuaCallBacks;
	UDelegate_UParticleSystemComponent_OnParticleDeath() {};
	using delegatetype = decltype(((UParticleSystemComponent*)0)->OnParticleDeath);
	void Init(delegatetype& theDelegate){
		UTableUtil::addgcref((UObject*)this);
		theDelegate.AddDynamic(this, &UDelegate_UParticleSystemComponent_OnParticleDeath::CallBack);
	}

	UFUNCTION()
	void CallBack( FName EventName, float EmitterTime, int32 ParticleTime, FVector Location, FVector Velocity, FVector Direction){
		for (auto v : LuaCallBacks){
			UTableUtil::callid(v,  EventName, EmitterTime, ParticleTime, Location, Velocity, Direction);
		}
	}

	UFUNCTION()
	int Add() {int r = UTableUtil::pushluafunc(-1);LuaCallBacks.Add(r);return r;}
	UFUNCTION()
	void Remove(int32 r)
	{
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void RemoveByF()
	{
		int r = UTableUtil::popluafunc(-1);
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void Destroy() { LuaCallBacks.Reset(); UTableUtil::rmgcref(this);}
};

UCLASS(meta=(Lua=1))
class UDelegate_UParticleSystemComponent_OnParticleCollide : public UObject{
	GENERATED_BODY()
public:
	TSet<int> LuaCallBacks;
	UDelegate_UParticleSystemComponent_OnParticleCollide() {};
	using delegatetype = decltype(((UParticleSystemComponent*)0)->OnParticleCollide);
	void Init(delegatetype& theDelegate){
		UTableUtil::addgcref((UObject*)this);
		theDelegate.AddDynamic(this, &UDelegate_UParticleSystemComponent_OnParticleCollide::CallBack);
	}

	UFUNCTION()
	void CallBack( FName EventName, float EmitterTime, int32 ParticleTime, FVector Location, FVector Velocity, FVector Direction, FVector Normal, FName BoneName, UPhysicalMaterial* PhysMat){
		for (auto v : LuaCallBacks){
			UTableUtil::callid(v,  EventName, EmitterTime, ParticleTime, Location, Velocity, Direction, Normal, BoneName, PhysMat);
		}
	}

	UFUNCTION()
	int Add() {int r = UTableUtil::pushluafunc(-1);LuaCallBacks.Add(r);return r;}
	UFUNCTION()
	void Remove(int32 r)
	{
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void RemoveByF()
	{
		int r = UTableUtil::popluafunc(-1);
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void Destroy() { LuaCallBacks.Reset(); UTableUtil::rmgcref(this);}
};

UCLASS(meta=(Lua=1))
class UDelegate_UParticleSystemComponent_OnSystemFinished : public UObject{
	GENERATED_BODY()
public:
	TSet<int> LuaCallBacks;
	UDelegate_UParticleSystemComponent_OnSystemFinished() {};
	using delegatetype = decltype(((UParticleSystemComponent*)0)->OnSystemFinished);
	void Init(delegatetype& theDelegate){
		UTableUtil::addgcref((UObject*)this);
		theDelegate.AddDynamic(this, &UDelegate_UParticleSystemComponent_OnSystemFinished::CallBack);
	}

	UFUNCTION()
	void CallBack( UParticleSystemComponent* PSystem){
		for (auto v : LuaCallBacks){
			UTableUtil::callid(v,  PSystem);
		}
	}

	UFUNCTION()
	int Add() {int r = UTableUtil::pushluafunc(-1);LuaCallBacks.Add(r);return r;}
	UFUNCTION()
	void Remove(int32 r)
	{
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void RemoveByF()
	{
		int r = UTableUtil::popluafunc(-1);
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void Destroy() { LuaCallBacks.Reset(); UTableUtil::rmgcref(this);}
};

UCLASS(meta=(Lua=1))
class UDelegate_UDestructibleComponent_OnComponentFracture : public UObject{
	GENERATED_BODY()
public:
	TSet<int> LuaCallBacks;
	UDelegate_UDestructibleComponent_OnComponentFracture() {};
	using delegatetype = decltype(((UDestructibleComponent*)0)->OnComponentFracture);
	void Init(delegatetype& theDelegate){
		UTableUtil::addgcref((UObject*)this);
		theDelegate.AddDynamic(this, &UDelegate_UDestructibleComponent_OnComponentFracture::CallBack);
	}

	UFUNCTION()
	void CallBack( const FVector& HitPoint, const FVector& HitDirection){
		for (auto v : LuaCallBacks){
			UTableUtil::callid(v,  HitPoint, HitDirection);
		}
	}

	UFUNCTION()
	int Add() {int r = UTableUtil::pushluafunc(-1);LuaCallBacks.Add(r);return r;}
	UFUNCTION()
	void Remove(int32 r)
	{
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void RemoveByF()
	{
		int r = UTableUtil::popluafunc(-1);
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void Destroy() { LuaCallBacks.Reset(); UTableUtil::rmgcref(this);}
};

UCLASS(meta=(Lua=1))
class UDelegate_USkeletalMeshComponent_OnConstraintBroken : public UObject{
	GENERATED_BODY()
public:
	TSet<int> LuaCallBacks;
	UDelegate_USkeletalMeshComponent_OnConstraintBroken() {};
	using delegatetype = decltype(((USkeletalMeshComponent*)0)->OnConstraintBroken);
	void Init(delegatetype& theDelegate){
		UTableUtil::addgcref((UObject*)this);
		theDelegate.AddDynamic(this, &UDelegate_USkeletalMeshComponent_OnConstraintBroken::CallBack);
	}

	UFUNCTION()
	void CallBack( int32 ConstraintIndex){
		for (auto v : LuaCallBacks){
			UTableUtil::callid(v,  ConstraintIndex);
		}
	}

	UFUNCTION()
	int Add() {int r = UTableUtil::pushluafunc(-1);LuaCallBacks.Add(r);return r;}
	UFUNCTION()
	void Remove(int32 r)
	{
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void RemoveByF()
	{
		int r = UTableUtil::popluafunc(-1);
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void Destroy() { LuaCallBacks.Reset(); UTableUtil::rmgcref(this);}
};

UCLASS(meta=(Lua=1))
class UDelegate_UNavigationSystem_OnNavDataRegisteredEvent : public UObject{
	GENERATED_BODY()
public:
	TSet<int> LuaCallBacks;
	UDelegate_UNavigationSystem_OnNavDataRegisteredEvent() {};
	using delegatetype = decltype(((UNavigationSystem*)0)->OnNavDataRegisteredEvent);
	void Init(delegatetype& theDelegate){
		UTableUtil::addgcref((UObject*)this);
		theDelegate.AddDynamic(this, &UDelegate_UNavigationSystem_OnNavDataRegisteredEvent::CallBack);
	}

	UFUNCTION()
	void CallBack( ANavigationData* NavData){
		for (auto v : LuaCallBacks){
			UTableUtil::callid(v,  NavData);
		}
	}

	UFUNCTION()
	int Add() {int r = UTableUtil::pushluafunc(-1);LuaCallBacks.Add(r);return r;}
	UFUNCTION()
	void Remove(int32 r)
	{
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void RemoveByF()
	{
		int r = UTableUtil::popluafunc(-1);
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void Destroy() { LuaCallBacks.Reset(); UTableUtil::rmgcref(this);}
};

UCLASS(meta=(Lua=1))
class UDelegate_UNavigationSystem_OnNavigationGenerationFinishedDelegate : public UObject{
	GENERATED_BODY()
public:
	TSet<int> LuaCallBacks;
	UDelegate_UNavigationSystem_OnNavigationGenerationFinishedDelegate() {};
	using delegatetype = decltype(((UNavigationSystem*)0)->OnNavigationGenerationFinishedDelegate);
	void Init(delegatetype& theDelegate){
		UTableUtil::addgcref((UObject*)this);
		theDelegate.AddDynamic(this, &UDelegate_UNavigationSystem_OnNavigationGenerationFinishedDelegate::CallBack);
	}

	UFUNCTION()
	void CallBack( ANavigationData* NavData){
		for (auto v : LuaCallBacks){
			UTableUtil::callid(v,  NavData);
		}
	}

	UFUNCTION()
	int Add() {int r = UTableUtil::pushluafunc(-1);LuaCallBacks.Add(r);return r;}
	UFUNCTION()
	void Remove(int32 r)
	{
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void RemoveByF()
	{
		int r = UTableUtil::popluafunc(-1);
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void Destroy() { LuaCallBacks.Reset(); UTableUtil::rmgcref(this);}
};

UCLASS(meta=(Lua=1))
class UDelegate_UPlatformGameInstance_ApplicationWillDeactivateDelegate : public UObject{
	GENERATED_BODY()
public:
	TSet<int> LuaCallBacks;
	UDelegate_UPlatformGameInstance_ApplicationWillDeactivateDelegate() {};
	using delegatetype = decltype(((UPlatformGameInstance*)0)->ApplicationWillDeactivateDelegate);
	void Init(delegatetype& theDelegate){
		UTableUtil::addgcref((UObject*)this);
		theDelegate.AddDynamic(this, &UDelegate_UPlatformGameInstance_ApplicationWillDeactivateDelegate::CallBack);
	}

	UFUNCTION()
	void CallBack(){
		for (auto v : LuaCallBacks){
			UTableUtil::callid(v);
		}
	}

	UFUNCTION()
	int Add() {int r = UTableUtil::pushluafunc(-1);LuaCallBacks.Add(r);return r;}
	UFUNCTION()
	void Remove(int32 r)
	{
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void RemoveByF()
	{
		int r = UTableUtil::popluafunc(-1);
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void Destroy() { LuaCallBacks.Reset(); UTableUtil::rmgcref(this);}
};

UCLASS(meta=(Lua=1))
class UDelegate_UPlatformGameInstance_ApplicationHasReactivatedDelegate : public UObject{
	GENERATED_BODY()
public:
	TSet<int> LuaCallBacks;
	UDelegate_UPlatformGameInstance_ApplicationHasReactivatedDelegate() {};
	using delegatetype = decltype(((UPlatformGameInstance*)0)->ApplicationHasReactivatedDelegate);
	void Init(delegatetype& theDelegate){
		UTableUtil::addgcref((UObject*)this);
		theDelegate.AddDynamic(this, &UDelegate_UPlatformGameInstance_ApplicationHasReactivatedDelegate::CallBack);
	}

	UFUNCTION()
	void CallBack(){
		for (auto v : LuaCallBacks){
			UTableUtil::callid(v);
		}
	}

	UFUNCTION()
	int Add() {int r = UTableUtil::pushluafunc(-1);LuaCallBacks.Add(r);return r;}
	UFUNCTION()
	void Remove(int32 r)
	{
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void RemoveByF()
	{
		int r = UTableUtil::popluafunc(-1);
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void Destroy() { LuaCallBacks.Reset(); UTableUtil::rmgcref(this);}
};

UCLASS(meta=(Lua=1))
class UDelegate_UPlatformGameInstance_ApplicationWillEnterBackgroundDelegate : public UObject{
	GENERATED_BODY()
public:
	TSet<int> LuaCallBacks;
	UDelegate_UPlatformGameInstance_ApplicationWillEnterBackgroundDelegate() {};
	using delegatetype = decltype(((UPlatformGameInstance*)0)->ApplicationWillEnterBackgroundDelegate);
	void Init(delegatetype& theDelegate){
		UTableUtil::addgcref((UObject*)this);
		theDelegate.AddDynamic(this, &UDelegate_UPlatformGameInstance_ApplicationWillEnterBackgroundDelegate::CallBack);
	}

	UFUNCTION()
	void CallBack(){
		for (auto v : LuaCallBacks){
			UTableUtil::callid(v);
		}
	}

	UFUNCTION()
	int Add() {int r = UTableUtil::pushluafunc(-1);LuaCallBacks.Add(r);return r;}
	UFUNCTION()
	void Remove(int32 r)
	{
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void RemoveByF()
	{
		int r = UTableUtil::popluafunc(-1);
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void Destroy() { LuaCallBacks.Reset(); UTableUtil::rmgcref(this);}
};

UCLASS(meta=(Lua=1))
class UDelegate_UPlatformGameInstance_ApplicationHasEnteredForegroundDelegate : public UObject{
	GENERATED_BODY()
public:
	TSet<int> LuaCallBacks;
	UDelegate_UPlatformGameInstance_ApplicationHasEnteredForegroundDelegate() {};
	using delegatetype = decltype(((UPlatformGameInstance*)0)->ApplicationHasEnteredForegroundDelegate);
	void Init(delegatetype& theDelegate){
		UTableUtil::addgcref((UObject*)this);
		theDelegate.AddDynamic(this, &UDelegate_UPlatformGameInstance_ApplicationHasEnteredForegroundDelegate::CallBack);
	}

	UFUNCTION()
	void CallBack(){
		for (auto v : LuaCallBacks){
			UTableUtil::callid(v);
		}
	}

	UFUNCTION()
	int Add() {int r = UTableUtil::pushluafunc(-1);LuaCallBacks.Add(r);return r;}
	UFUNCTION()
	void Remove(int32 r)
	{
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void RemoveByF()
	{
		int r = UTableUtil::popluafunc(-1);
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void Destroy() { LuaCallBacks.Reset(); UTableUtil::rmgcref(this);}
};

UCLASS(meta=(Lua=1))
class UDelegate_UPlatformGameInstance_ApplicationWillTerminateDelegate : public UObject{
	GENERATED_BODY()
public:
	TSet<int> LuaCallBacks;
	UDelegate_UPlatformGameInstance_ApplicationWillTerminateDelegate() {};
	using delegatetype = decltype(((UPlatformGameInstance*)0)->ApplicationWillTerminateDelegate);
	void Init(delegatetype& theDelegate){
		UTableUtil::addgcref((UObject*)this);
		theDelegate.AddDynamic(this, &UDelegate_UPlatformGameInstance_ApplicationWillTerminateDelegate::CallBack);
	}

	UFUNCTION()
	void CallBack(){
		for (auto v : LuaCallBacks){
			UTableUtil::callid(v);
		}
	}

	UFUNCTION()
	int Add() {int r = UTableUtil::pushluafunc(-1);LuaCallBacks.Add(r);return r;}
	UFUNCTION()
	void Remove(int32 r)
	{
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void RemoveByF()
	{
		int r = UTableUtil::popluafunc(-1);
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void Destroy() { LuaCallBacks.Reset(); UTableUtil::rmgcref(this);}
};

UCLASS(meta=(Lua=1))
class UDelegate_UPlatformGameInstance_ApplicationRegisteredForRemoteNotificationsDelegate : public UObject{
	GENERATED_BODY()
public:
	TSet<int> LuaCallBacks;
	UDelegate_UPlatformGameInstance_ApplicationRegisteredForRemoteNotificationsDelegate() {};
	using delegatetype = decltype(((UPlatformGameInstance*)0)->ApplicationRegisteredForRemoteNotificationsDelegate);
	void Init(delegatetype& theDelegate){
		UTableUtil::addgcref((UObject*)this);
		theDelegate.AddDynamic(this, &UDelegate_UPlatformGameInstance_ApplicationRegisteredForRemoteNotificationsDelegate::CallBack);
	}

	UFUNCTION()
	void CallBack( TArray<uint8> inArray){
		for (auto v : LuaCallBacks){
			UTableUtil::callid(v,  inArray);
		}
	}

	UFUNCTION()
	int Add() {int r = UTableUtil::pushluafunc(-1);LuaCallBacks.Add(r);return r;}
	UFUNCTION()
	void Remove(int32 r)
	{
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void RemoveByF()
	{
		int r = UTableUtil::popluafunc(-1);
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void Destroy() { LuaCallBacks.Reset(); UTableUtil::rmgcref(this);}
};

UCLASS(meta=(Lua=1))
class UDelegate_UPlatformGameInstance_ApplicationRegisteredForUserNotificationsDelegate : public UObject{
	GENERATED_BODY()
public:
	TSet<int> LuaCallBacks;
	UDelegate_UPlatformGameInstance_ApplicationRegisteredForUserNotificationsDelegate() {};
	using delegatetype = decltype(((UPlatformGameInstance*)0)->ApplicationRegisteredForUserNotificationsDelegate);
	void Init(delegatetype& theDelegate){
		UTableUtil::addgcref((UObject*)this);
		theDelegate.AddDynamic(this, &UDelegate_UPlatformGameInstance_ApplicationRegisteredForUserNotificationsDelegate::CallBack);
	}

	UFUNCTION()
	void CallBack( int32 inInt){
		for (auto v : LuaCallBacks){
			UTableUtil::callid(v,  inInt);
		}
	}

	UFUNCTION()
	int Add() {int r = UTableUtil::pushluafunc(-1);LuaCallBacks.Add(r);return r;}
	UFUNCTION()
	void Remove(int32 r)
	{
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void RemoveByF()
	{
		int r = UTableUtil::popluafunc(-1);
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void Destroy() { LuaCallBacks.Reset(); UTableUtil::rmgcref(this);}
};

UCLASS(meta=(Lua=1))
class UDelegate_UPlatformGameInstance_ApplicationFailedToRegisterForRemoteNotificationsDelegate : public UObject{
	GENERATED_BODY()
public:
	TSet<int> LuaCallBacks;
	UDelegate_UPlatformGameInstance_ApplicationFailedToRegisterForRemoteNotificationsDelegate() {};
	using delegatetype = decltype(((UPlatformGameInstance*)0)->ApplicationFailedToRegisterForRemoteNotificationsDelegate);
	void Init(delegatetype& theDelegate){
		UTableUtil::addgcref((UObject*)this);
		theDelegate.AddDynamic(this, &UDelegate_UPlatformGameInstance_ApplicationFailedToRegisterForRemoteNotificationsDelegate::CallBack);
	}

	UFUNCTION()
	void CallBack( FString inString){
		for (auto v : LuaCallBacks){
			UTableUtil::callid(v,  inString);
		}
	}

	UFUNCTION()
	int Add() {int r = UTableUtil::pushluafunc(-1);LuaCallBacks.Add(r);return r;}
	UFUNCTION()
	void Remove(int32 r)
	{
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void RemoveByF()
	{
		int r = UTableUtil::popluafunc(-1);
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void Destroy() { LuaCallBacks.Reset(); UTableUtil::rmgcref(this);}
};

UCLASS(meta=(Lua=1))
class UDelegate_UPlatformGameInstance_ApplicationReceivedRemoteNotificationDelegate : public UObject{
	GENERATED_BODY()
public:
	TSet<int> LuaCallBacks;
	UDelegate_UPlatformGameInstance_ApplicationReceivedRemoteNotificationDelegate() {};
	using delegatetype = decltype(((UPlatformGameInstance*)0)->ApplicationReceivedRemoteNotificationDelegate);
	void Init(delegatetype& theDelegate){
		UTableUtil::addgcref((UObject*)this);
		theDelegate.AddDynamic(this, &UDelegate_UPlatformGameInstance_ApplicationReceivedRemoteNotificationDelegate::CallBack);
	}

	UFUNCTION()
	void CallBack( FString inString){
		for (auto v : LuaCallBacks){
			UTableUtil::callid(v,  inString);
		}
	}

	UFUNCTION()
	int Add() {int r = UTableUtil::pushluafunc(-1);LuaCallBacks.Add(r);return r;}
	UFUNCTION()
	void Remove(int32 r)
	{
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void RemoveByF()
	{
		int r = UTableUtil::popluafunc(-1);
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void Destroy() { LuaCallBacks.Reset(); UTableUtil::rmgcref(this);}
};

UCLASS(meta=(Lua=1))
class UDelegate_UPlatformGameInstance_ApplicationReceivedLocalNotificationDelegate : public UObject{
	GENERATED_BODY()
public:
	TSet<int> LuaCallBacks;
	UDelegate_UPlatformGameInstance_ApplicationReceivedLocalNotificationDelegate() {};
	using delegatetype = decltype(((UPlatformGameInstance*)0)->ApplicationReceivedLocalNotificationDelegate);
	void Init(delegatetype& theDelegate){
		UTableUtil::addgcref((UObject*)this);
		theDelegate.AddDynamic(this, &UDelegate_UPlatformGameInstance_ApplicationReceivedLocalNotificationDelegate::CallBack);
	}

	UFUNCTION()
	void CallBack( FString inString, int32 inInt){
		for (auto v : LuaCallBacks){
			UTableUtil::callid(v,  inString, inInt);
		}
	}

	UFUNCTION()
	int Add() {int r = UTableUtil::pushluafunc(-1);LuaCallBacks.Add(r);return r;}
	UFUNCTION()
	void Remove(int32 r)
	{
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void RemoveByF()
	{
		int r = UTableUtil::popluafunc(-1);
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void Destroy() { LuaCallBacks.Reset(); UTableUtil::rmgcref(this);}
};

UCLASS(meta=(Lua=1))
class UDelegate_UPlatformGameInstance_ApplicationReceivedScreenOrientationChangedNotificationDelegate : public UObject{
	GENERATED_BODY()
public:
	TSet<int> LuaCallBacks;
	UDelegate_UPlatformGameInstance_ApplicationReceivedScreenOrientationChangedNotificationDelegate() {};
	using delegatetype = decltype(((UPlatformGameInstance*)0)->ApplicationReceivedScreenOrientationChangedNotificationDelegate);
	void Init(delegatetype& theDelegate){
		UTableUtil::addgcref((UObject*)this);
		theDelegate.AddDynamic(this, &UDelegate_UPlatformGameInstance_ApplicationReceivedScreenOrientationChangedNotificationDelegate::CallBack);
	}

	UFUNCTION()
	void CallBack( EScreenOrientation::Type inScreenOrientation){
		for (auto v : LuaCallBacks){
			UTableUtil::callid(v,  (int)(inScreenOrientation));
		}
	}

	UFUNCTION()
	int Add() {int r = UTableUtil::pushluafunc(-1);LuaCallBacks.Add(r);return r;}
	UFUNCTION()
	void Remove(int32 r)
	{
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void RemoveByF()
	{
		int r = UTableUtil::popluafunc(-1);
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void Destroy() { LuaCallBacks.Reset(); UTableUtil::rmgcref(this);}
};

UCLASS(meta=(Lua=1))
class UDelegate_UCanvasRenderTarget2D_OnCanvasRenderTargetUpdate : public UObject{
	GENERATED_BODY()
public:
	TSet<int> LuaCallBacks;
	UDelegate_UCanvasRenderTarget2D_OnCanvasRenderTargetUpdate() {};
	using delegatetype = decltype(((UCanvasRenderTarget2D*)0)->OnCanvasRenderTargetUpdate);
	void Init(delegatetype& theDelegate){
		UTableUtil::addgcref((UObject*)this);
		theDelegate.AddDynamic(this, &UDelegate_UCanvasRenderTarget2D_OnCanvasRenderTargetUpdate::CallBack);
	}

	UFUNCTION()
	void CallBack( UCanvas* Canvas, int32 Width, int32 Height){
		for (auto v : LuaCallBacks){
			UTableUtil::callid(v,  Canvas, Width, Height);
		}
	}

	UFUNCTION()
	int Add() {int r = UTableUtil::pushluafunc(-1);LuaCallBacks.Add(r);return r;}
	UFUNCTION()
	void Remove(int32 r)
	{
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void RemoveByF()
	{
		int r = UTableUtil::popluafunc(-1);
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void Destroy() { LuaCallBacks.Reset(); UTableUtil::rmgcref(this);}
};

UCLASS(meta=(Lua=1))
class UDelegate_UAsyncTaskDownloadImage_OnSuccess : public UObject{
	GENERATED_BODY()
public:
	TSet<int> LuaCallBacks;
	UDelegate_UAsyncTaskDownloadImage_OnSuccess() {};
	using delegatetype = decltype(((UAsyncTaskDownloadImage*)0)->OnSuccess);
	void Init(delegatetype& theDelegate){
		UTableUtil::addgcref((UObject*)this);
		theDelegate.AddDynamic(this, &UDelegate_UAsyncTaskDownloadImage_OnSuccess::CallBack);
	}

	UFUNCTION()
	void CallBack( UTexture2D* Texture){
		for (auto v : LuaCallBacks){
			UTableUtil::callid(v,  Texture);
		}
	}

	UFUNCTION()
	int Add() {int r = UTableUtil::pushluafunc(-1);LuaCallBacks.Add(r);return r;}
	UFUNCTION()
	void Remove(int32 r)
	{
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void RemoveByF()
	{
		int r = UTableUtil::popluafunc(-1);
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void Destroy() { LuaCallBacks.Reset(); UTableUtil::rmgcref(this);}
};

UCLASS(meta=(Lua=1))
class UDelegate_UAsyncTaskDownloadImage_OnFail : public UObject{
	GENERATED_BODY()
public:
	TSet<int> LuaCallBacks;
	UDelegate_UAsyncTaskDownloadImage_OnFail() {};
	using delegatetype = decltype(((UAsyncTaskDownloadImage*)0)->OnFail);
	void Init(delegatetype& theDelegate){
		UTableUtil::addgcref((UObject*)this);
		theDelegate.AddDynamic(this, &UDelegate_UAsyncTaskDownloadImage_OnFail::CallBack);
	}

	UFUNCTION()
	void CallBack( UTexture2D* Texture){
		for (auto v : LuaCallBacks){
			UTableUtil::callid(v,  Texture);
		}
	}

	UFUNCTION()
	int Add() {int r = UTableUtil::pushluafunc(-1);LuaCallBacks.Add(r);return r;}
	UFUNCTION()
	void Remove(int32 r)
	{
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void RemoveByF()
	{
		int r = UTableUtil::popluafunc(-1);
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void Destroy() { LuaCallBacks.Reset(); UTableUtil::rmgcref(this);}
};

UCLASS(meta=(Lua=1))
class UDelegate_UDragDropOperation_OnDrop : public UObject{
	GENERATED_BODY()
public:
	TSet<int> LuaCallBacks;
	UDelegate_UDragDropOperation_OnDrop() {};
	using delegatetype = decltype(((UDragDropOperation*)0)->OnDrop);
	void Init(delegatetype& theDelegate){
		UTableUtil::addgcref((UObject*)this);
		theDelegate.AddDynamic(this, &UDelegate_UDragDropOperation_OnDrop::CallBack);
	}

	UFUNCTION()
	void CallBack( UDragDropOperation* Operation){
		for (auto v : LuaCallBacks){
			UTableUtil::callid(v,  Operation);
		}
	}

	UFUNCTION()
	int Add() {int r = UTableUtil::pushluafunc(-1);LuaCallBacks.Add(r);return r;}
	UFUNCTION()
	void Remove(int32 r)
	{
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void RemoveByF()
	{
		int r = UTableUtil::popluafunc(-1);
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void Destroy() { LuaCallBacks.Reset(); UTableUtil::rmgcref(this);}
};

UCLASS(meta=(Lua=1))
class UDelegate_UDragDropOperation_OnDragCancelled : public UObject{
	GENERATED_BODY()
public:
	TSet<int> LuaCallBacks;
	UDelegate_UDragDropOperation_OnDragCancelled() {};
	using delegatetype = decltype(((UDragDropOperation*)0)->OnDragCancelled);
	void Init(delegatetype& theDelegate){
		UTableUtil::addgcref((UObject*)this);
		theDelegate.AddDynamic(this, &UDelegate_UDragDropOperation_OnDragCancelled::CallBack);
	}

	UFUNCTION()
	void CallBack( UDragDropOperation* Operation){
		for (auto v : LuaCallBacks){
			UTableUtil::callid(v,  Operation);
		}
	}

	UFUNCTION()
	int Add() {int r = UTableUtil::pushluafunc(-1);LuaCallBacks.Add(r);return r;}
	UFUNCTION()
	void Remove(int32 r)
	{
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void RemoveByF()
	{
		int r = UTableUtil::popluafunc(-1);
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void Destroy() { LuaCallBacks.Reset(); UTableUtil::rmgcref(this);}
};

UCLASS(meta=(Lua=1))
class UDelegate_UDragDropOperation_OnDragged : public UObject{
	GENERATED_BODY()
public:
	TSet<int> LuaCallBacks;
	UDelegate_UDragDropOperation_OnDragged() {};
	using delegatetype = decltype(((UDragDropOperation*)0)->OnDragged);
	void Init(delegatetype& theDelegate){
		UTableUtil::addgcref((UObject*)this);
		theDelegate.AddDynamic(this, &UDelegate_UDragDropOperation_OnDragged::CallBack);
	}

	UFUNCTION()
	void CallBack( UDragDropOperation* Operation){
		for (auto v : LuaCallBacks){
			UTableUtil::callid(v,  Operation);
		}
	}

	UFUNCTION()
	int Add() {int r = UTableUtil::pushluafunc(-1);LuaCallBacks.Add(r);return r;}
	UFUNCTION()
	void Remove(int32 r)
	{
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void RemoveByF()
	{
		int r = UTableUtil::popluafunc(-1);
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void Destroy() { LuaCallBacks.Reset(); UTableUtil::rmgcref(this);}
};

UCLASS(meta=(Lua=1))
class UDelegate_UWidgetAnimation_OnAnimationStarted : public UObject{
	GENERATED_BODY()
public:
	TSet<int> LuaCallBacks;
	UDelegate_UWidgetAnimation_OnAnimationStarted() {};
	using delegatetype = decltype(((UWidgetAnimation*)0)->OnAnimationStarted);
	void Init(delegatetype& theDelegate){
		UTableUtil::addgcref((UObject*)this);
		theDelegate.AddDynamic(this, &UDelegate_UWidgetAnimation_OnAnimationStarted::CallBack);
	}

	UFUNCTION()
	void CallBack(){
		for (auto v : LuaCallBacks){
			UTableUtil::callid(v);
		}
	}

	UFUNCTION()
	int Add() {int r = UTableUtil::pushluafunc(-1);LuaCallBacks.Add(r);return r;}
	UFUNCTION()
	void Remove(int32 r)
	{
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void RemoveByF()
	{
		int r = UTableUtil::popluafunc(-1);
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void Destroy() { LuaCallBacks.Reset(); UTableUtil::rmgcref(this);}
};

UCLASS(meta=(Lua=1))
class UDelegate_UWidgetAnimation_OnAnimationFinished : public UObject{
	GENERATED_BODY()
public:
	TSet<int> LuaCallBacks;
	UDelegate_UWidgetAnimation_OnAnimationFinished() {};
	using delegatetype = decltype(((UWidgetAnimation*)0)->OnAnimationFinished);
	void Init(delegatetype& theDelegate){
		UTableUtil::addgcref((UObject*)this);
		theDelegate.AddDynamic(this, &UDelegate_UWidgetAnimation_OnAnimationFinished::CallBack);
	}

	UFUNCTION()
	void CallBack(){
		for (auto v : LuaCallBacks){
			UTableUtil::callid(v);
		}
	}

	UFUNCTION()
	int Add() {int r = UTableUtil::pushluafunc(-1);LuaCallBacks.Add(r);return r;}
	UFUNCTION()
	void Remove(int32 r)
	{
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void RemoveByF()
	{
		int r = UTableUtil::popluafunc(-1);
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void Destroy() { LuaCallBacks.Reset(); UTableUtil::rmgcref(this);}
};

UCLASS(meta=(Lua=1))
class UDelegate_UWidgetInteractionComponent_OnHoveredWidgetChanged : public UObject{
	GENERATED_BODY()
public:
	TSet<int> LuaCallBacks;
	UDelegate_UWidgetInteractionComponent_OnHoveredWidgetChanged() {};
	using delegatetype = decltype(((UWidgetInteractionComponent*)0)->OnHoveredWidgetChanged);
	void Init(delegatetype& theDelegate){
		UTableUtil::addgcref((UObject*)this);
		theDelegate.AddDynamic(this, &UDelegate_UWidgetInteractionComponent_OnHoveredWidgetChanged::CallBack);
	}

	UFUNCTION()
	void CallBack( UWidgetComponent* WidgetComponent, UWidgetComponent* PreviousWidgetComponent){
		for (auto v : LuaCallBacks){
			UTableUtil::callid(v,  WidgetComponent, PreviousWidgetComponent);
		}
	}

	UFUNCTION()
	int Add() {int r = UTableUtil::pushluafunc(-1);LuaCallBacks.Add(r);return r;}
	UFUNCTION()
	void Remove(int32 r)
	{
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void RemoveByF()
	{
		int r = UTableUtil::popluafunc(-1);
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void Destroy() { LuaCallBacks.Reset(); UTableUtil::rmgcref(this);}
};

UCLASS(meta=(Lua=1))
class UDelegate_UComboBoxString_OnSelectionChanged : public UObject{
	GENERATED_BODY()
public:
	TSet<int> LuaCallBacks;
	UDelegate_UComboBoxString_OnSelectionChanged() {};
	using delegatetype = decltype(((UComboBoxString*)0)->OnSelectionChanged);
	void Init(delegatetype& theDelegate){
		UTableUtil::addgcref((UObject*)this);
		theDelegate.AddDynamic(this, &UDelegate_UComboBoxString_OnSelectionChanged::CallBack);
	}

	UFUNCTION()
	void CallBack( FString SelectedItem, ESelectInfo::Type SelectionType){
		for (auto v : LuaCallBacks){
			UTableUtil::callid(v,  SelectedItem, (int)(SelectionType));
		}
	}

	UFUNCTION()
	int Add() {int r = UTableUtil::pushluafunc(-1);LuaCallBacks.Add(r);return r;}
	UFUNCTION()
	void Remove(int32 r)
	{
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void RemoveByF()
	{
		int r = UTableUtil::popluafunc(-1);
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void Destroy() { LuaCallBacks.Reset(); UTableUtil::rmgcref(this);}
};

UCLASS(meta=(Lua=1))
class UDelegate_UComboBoxString_OnOpening : public UObject{
	GENERATED_BODY()
public:
	TSet<int> LuaCallBacks;
	UDelegate_UComboBoxString_OnOpening() {};
	using delegatetype = decltype(((UComboBoxString*)0)->OnOpening);
	void Init(delegatetype& theDelegate){
		UTableUtil::addgcref((UObject*)this);
		theDelegate.AddDynamic(this, &UDelegate_UComboBoxString_OnOpening::CallBack);
	}

	UFUNCTION()
	void CallBack(){
		for (auto v : LuaCallBacks){
			UTableUtil::callid(v);
		}
	}

	UFUNCTION()
	int Add() {int r = UTableUtil::pushluafunc(-1);LuaCallBacks.Add(r);return r;}
	UFUNCTION()
	void Remove(int32 r)
	{
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void RemoveByF()
	{
		int r = UTableUtil::popluafunc(-1);
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void Destroy() { LuaCallBacks.Reset(); UTableUtil::rmgcref(this);}
};

UCLASS(meta=(Lua=1))
class UDelegate_UEditableText_OnTextChanged : public UObject{
	GENERATED_BODY()
public:
	TSet<int> LuaCallBacks;
	UDelegate_UEditableText_OnTextChanged() {};
	using delegatetype = decltype(((UEditableText*)0)->OnTextChanged);
	void Init(delegatetype& theDelegate){
		UTableUtil::addgcref((UObject*)this);
		theDelegate.AddDynamic(this, &UDelegate_UEditableText_OnTextChanged::CallBack);
	}

	UFUNCTION()
	void CallBack( const FText& Text){
		for (auto v : LuaCallBacks){
			UTableUtil::callid(v,  Text);
		}
	}

	UFUNCTION()
	int Add() {int r = UTableUtil::pushluafunc(-1);LuaCallBacks.Add(r);return r;}
	UFUNCTION()
	void Remove(int32 r)
	{
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void RemoveByF()
	{
		int r = UTableUtil::popluafunc(-1);
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void Destroy() { LuaCallBacks.Reset(); UTableUtil::rmgcref(this);}
};

UCLASS(meta=(Lua=1))
class UDelegate_UEditableText_OnTextCommitted : public UObject{
	GENERATED_BODY()
public:
	TSet<int> LuaCallBacks;
	UDelegate_UEditableText_OnTextCommitted() {};
	using delegatetype = decltype(((UEditableText*)0)->OnTextCommitted);
	void Init(delegatetype& theDelegate){
		UTableUtil::addgcref((UObject*)this);
		theDelegate.AddDynamic(this, &UDelegate_UEditableText_OnTextCommitted::CallBack);
	}

	UFUNCTION()
	void CallBack( const FText& Text, ETextCommit::Type CommitMethod){
		for (auto v : LuaCallBacks){
			UTableUtil::callid(v,  Text, (int)(CommitMethod));
		}
	}

	UFUNCTION()
	int Add() {int r = UTableUtil::pushluafunc(-1);LuaCallBacks.Add(r);return r;}
	UFUNCTION()
	void Remove(int32 r)
	{
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void RemoveByF()
	{
		int r = UTableUtil::popluafunc(-1);
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void Destroy() { LuaCallBacks.Reset(); UTableUtil::rmgcref(this);}
};

UCLASS(meta=(Lua=1))
class UDelegate_UEditableTextBox_OnTextChanged : public UObject{
	GENERATED_BODY()
public:
	TSet<int> LuaCallBacks;
	UDelegate_UEditableTextBox_OnTextChanged() {};
	using delegatetype = decltype(((UEditableTextBox*)0)->OnTextChanged);
	void Init(delegatetype& theDelegate){
		UTableUtil::addgcref((UObject*)this);
		theDelegate.AddDynamic(this, &UDelegate_UEditableTextBox_OnTextChanged::CallBack);
	}

	UFUNCTION()
	void CallBack( const FText& Text){
		for (auto v : LuaCallBacks){
			UTableUtil::callid(v,  Text);
		}
	}

	UFUNCTION()
	int Add() {int r = UTableUtil::pushluafunc(-1);LuaCallBacks.Add(r);return r;}
	UFUNCTION()
	void Remove(int32 r)
	{
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void RemoveByF()
	{
		int r = UTableUtil::popluafunc(-1);
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void Destroy() { LuaCallBacks.Reset(); UTableUtil::rmgcref(this);}
};

UCLASS(meta=(Lua=1))
class UDelegate_UEditableTextBox_OnTextCommitted : public UObject{
	GENERATED_BODY()
public:
	TSet<int> LuaCallBacks;
	UDelegate_UEditableTextBox_OnTextCommitted() {};
	using delegatetype = decltype(((UEditableTextBox*)0)->OnTextCommitted);
	void Init(delegatetype& theDelegate){
		UTableUtil::addgcref((UObject*)this);
		theDelegate.AddDynamic(this, &UDelegate_UEditableTextBox_OnTextCommitted::CallBack);
	}

	UFUNCTION()
	void CallBack( const FText& Text, ETextCommit::Type CommitMethod){
		for (auto v : LuaCallBacks){
			UTableUtil::callid(v,  Text, (int)(CommitMethod));
		}
	}

	UFUNCTION()
	int Add() {int r = UTableUtil::pushluafunc(-1);LuaCallBacks.Add(r);return r;}
	UFUNCTION()
	void Remove(int32 r)
	{
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void RemoveByF()
	{
		int r = UTableUtil::popluafunc(-1);
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void Destroy() { LuaCallBacks.Reset(); UTableUtil::rmgcref(this);}
};

UCLASS(meta=(Lua=1))
class UDelegate_UExpandableArea_OnExpansionChanged : public UObject{
	GENERATED_BODY()
public:
	TSet<int> LuaCallBacks;
	UDelegate_UExpandableArea_OnExpansionChanged() {};
	using delegatetype = decltype(((UExpandableArea*)0)->OnExpansionChanged);
	void Init(delegatetype& theDelegate){
		UTableUtil::addgcref((UObject*)this);
		theDelegate.AddDynamic(this, &UDelegate_UExpandableArea_OnExpansionChanged::CallBack);
	}

	UFUNCTION()
	void CallBack( UExpandableArea* Area, bool bIsExpanded){
		for (auto v : LuaCallBacks){
			UTableUtil::callid(v,  Area, bIsExpanded);
		}
	}

	UFUNCTION()
	int Add() {int r = UTableUtil::pushluafunc(-1);LuaCallBacks.Add(r);return r;}
	UFUNCTION()
	void Remove(int32 r)
	{
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void RemoveByF()
	{
		int r = UTableUtil::popluafunc(-1);
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void Destroy() { LuaCallBacks.Reset(); UTableUtil::rmgcref(this);}
};

UCLASS(meta=(Lua=1))
class UDelegate_UInputKeySelector_OnKeySelected : public UObject{
	GENERATED_BODY()
public:
	TSet<int> LuaCallBacks;
	UDelegate_UInputKeySelector_OnKeySelected() {};
	using delegatetype = decltype(((UInputKeySelector*)0)->OnKeySelected);
	void Init(delegatetype& theDelegate){
		UTableUtil::addgcref((UObject*)this);
		theDelegate.AddDynamic(this, &UDelegate_UInputKeySelector_OnKeySelected::CallBack);
	}

	UFUNCTION()
	void CallBack( FInputChord SelectedKey){
		for (auto v : LuaCallBacks){
			UTableUtil::callid(v,  SelectedKey);
		}
	}

	UFUNCTION()
	int Add() {int r = UTableUtil::pushluafunc(-1);LuaCallBacks.Add(r);return r;}
	UFUNCTION()
	void Remove(int32 r)
	{
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void RemoveByF()
	{
		int r = UTableUtil::popluafunc(-1);
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void Destroy() { LuaCallBacks.Reset(); UTableUtil::rmgcref(this);}
};

UCLASS(meta=(Lua=1))
class UDelegate_UInputKeySelector_OnIsSelectingKeyChanged : public UObject{
	GENERATED_BODY()
public:
	TSet<int> LuaCallBacks;
	UDelegate_UInputKeySelector_OnIsSelectingKeyChanged() {};
	using delegatetype = decltype(((UInputKeySelector*)0)->OnIsSelectingKeyChanged);
	void Init(delegatetype& theDelegate){
		UTableUtil::addgcref((UObject*)this);
		theDelegate.AddDynamic(this, &UDelegate_UInputKeySelector_OnIsSelectingKeyChanged::CallBack);
	}

	UFUNCTION()
	void CallBack(){
		for (auto v : LuaCallBacks){
			UTableUtil::callid(v);
		}
	}

	UFUNCTION()
	int Add() {int r = UTableUtil::pushluafunc(-1);LuaCallBacks.Add(r);return r;}
	UFUNCTION()
	void Remove(int32 r)
	{
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void RemoveByF()
	{
		int r = UTableUtil::popluafunc(-1);
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void Destroy() { LuaCallBacks.Reset(); UTableUtil::rmgcref(this);}
};

UCLASS(meta=(Lua=1))
class UDelegate_USlider_OnMouseCaptureBegin : public UObject{
	GENERATED_BODY()
public:
	TSet<int> LuaCallBacks;
	UDelegate_USlider_OnMouseCaptureBegin() {};
	using delegatetype = decltype(((USlider*)0)->OnMouseCaptureBegin);
	void Init(delegatetype& theDelegate){
		UTableUtil::addgcref((UObject*)this);
		theDelegate.AddDynamic(this, &UDelegate_USlider_OnMouseCaptureBegin::CallBack);
	}

	UFUNCTION()
	void CallBack(){
		for (auto v : LuaCallBacks){
			UTableUtil::callid(v);
		}
	}

	UFUNCTION()
	int Add() {int r = UTableUtil::pushluafunc(-1);LuaCallBacks.Add(r);return r;}
	UFUNCTION()
	void Remove(int32 r)
	{
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void RemoveByF()
	{
		int r = UTableUtil::popluafunc(-1);
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void Destroy() { LuaCallBacks.Reset(); UTableUtil::rmgcref(this);}
};

UCLASS(meta=(Lua=1))
class UDelegate_USlider_OnMouseCaptureEnd : public UObject{
	GENERATED_BODY()
public:
	TSet<int> LuaCallBacks;
	UDelegate_USlider_OnMouseCaptureEnd() {};
	using delegatetype = decltype(((USlider*)0)->OnMouseCaptureEnd);
	void Init(delegatetype& theDelegate){
		UTableUtil::addgcref((UObject*)this);
		theDelegate.AddDynamic(this, &UDelegate_USlider_OnMouseCaptureEnd::CallBack);
	}

	UFUNCTION()
	void CallBack(){
		for (auto v : LuaCallBacks){
			UTableUtil::callid(v);
		}
	}

	UFUNCTION()
	int Add() {int r = UTableUtil::pushluafunc(-1);LuaCallBacks.Add(r);return r;}
	UFUNCTION()
	void Remove(int32 r)
	{
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void RemoveByF()
	{
		int r = UTableUtil::popluafunc(-1);
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void Destroy() { LuaCallBacks.Reset(); UTableUtil::rmgcref(this);}
};

UCLASS(meta=(Lua=1))
class UDelegate_USlider_OnControllerCaptureBegin : public UObject{
	GENERATED_BODY()
public:
	TSet<int> LuaCallBacks;
	UDelegate_USlider_OnControllerCaptureBegin() {};
	using delegatetype = decltype(((USlider*)0)->OnControllerCaptureBegin);
	void Init(delegatetype& theDelegate){
		UTableUtil::addgcref((UObject*)this);
		theDelegate.AddDynamic(this, &UDelegate_USlider_OnControllerCaptureBegin::CallBack);
	}

	UFUNCTION()
	void CallBack(){
		for (auto v : LuaCallBacks){
			UTableUtil::callid(v);
		}
	}

	UFUNCTION()
	int Add() {int r = UTableUtil::pushluafunc(-1);LuaCallBacks.Add(r);return r;}
	UFUNCTION()
	void Remove(int32 r)
	{
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void RemoveByF()
	{
		int r = UTableUtil::popluafunc(-1);
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void Destroy() { LuaCallBacks.Reset(); UTableUtil::rmgcref(this);}
};

UCLASS(meta=(Lua=1))
class UDelegate_USlider_OnControllerCaptureEnd : public UObject{
	GENERATED_BODY()
public:
	TSet<int> LuaCallBacks;
	UDelegate_USlider_OnControllerCaptureEnd() {};
	using delegatetype = decltype(((USlider*)0)->OnControllerCaptureEnd);
	void Init(delegatetype& theDelegate){
		UTableUtil::addgcref((UObject*)this);
		theDelegate.AddDynamic(this, &UDelegate_USlider_OnControllerCaptureEnd::CallBack);
	}

	UFUNCTION()
	void CallBack(){
		for (auto v : LuaCallBacks){
			UTableUtil::callid(v);
		}
	}

	UFUNCTION()
	int Add() {int r = UTableUtil::pushluafunc(-1);LuaCallBacks.Add(r);return r;}
	UFUNCTION()
	void Remove(int32 r)
	{
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void RemoveByF()
	{
		int r = UTableUtil::popluafunc(-1);
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void Destroy() { LuaCallBacks.Reset(); UTableUtil::rmgcref(this);}
};

UCLASS(meta=(Lua=1))
class UDelegate_USlider_OnValueChanged : public UObject{
	GENERATED_BODY()
public:
	TSet<int> LuaCallBacks;
	UDelegate_USlider_OnValueChanged() {};
	using delegatetype = decltype(((USlider*)0)->OnValueChanged);
	void Init(delegatetype& theDelegate){
		UTableUtil::addgcref((UObject*)this);
		theDelegate.AddDynamic(this, &UDelegate_USlider_OnValueChanged::CallBack);
	}

	UFUNCTION()
	void CallBack( float Value){
		for (auto v : LuaCallBacks){
			UTableUtil::callid(v,  Value);
		}
	}

	UFUNCTION()
	int Add() {int r = UTableUtil::pushluafunc(-1);LuaCallBacks.Add(r);return r;}
	UFUNCTION()
	void Remove(int32 r)
	{
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void RemoveByF()
	{
		int r = UTableUtil::popluafunc(-1);
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void Destroy() { LuaCallBacks.Reset(); UTableUtil::rmgcref(this);}
};

UCLASS(meta=(Lua=1))
class UDelegate_USpinBox_OnValueChanged : public UObject{
	GENERATED_BODY()
public:
	TSet<int> LuaCallBacks;
	UDelegate_USpinBox_OnValueChanged() {};
	using delegatetype = decltype(((USpinBox*)0)->OnValueChanged);
	void Init(delegatetype& theDelegate){
		UTableUtil::addgcref((UObject*)this);
		theDelegate.AddDynamic(this, &UDelegate_USpinBox_OnValueChanged::CallBack);
	}

	UFUNCTION()
	void CallBack( float InValue){
		for (auto v : LuaCallBacks){
			UTableUtil::callid(v,  InValue);
		}
	}

	UFUNCTION()
	int Add() {int r = UTableUtil::pushluafunc(-1);LuaCallBacks.Add(r);return r;}
	UFUNCTION()
	void Remove(int32 r)
	{
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void RemoveByF()
	{
		int r = UTableUtil::popluafunc(-1);
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void Destroy() { LuaCallBacks.Reset(); UTableUtil::rmgcref(this);}
};

UCLASS(meta=(Lua=1))
class UDelegate_USpinBox_OnValueCommitted : public UObject{
	GENERATED_BODY()
public:
	TSet<int> LuaCallBacks;
	UDelegate_USpinBox_OnValueCommitted() {};
	using delegatetype = decltype(((USpinBox*)0)->OnValueCommitted);
	void Init(delegatetype& theDelegate){
		UTableUtil::addgcref((UObject*)this);
		theDelegate.AddDynamic(this, &UDelegate_USpinBox_OnValueCommitted::CallBack);
	}

	UFUNCTION()
	void CallBack( float InValue, ETextCommit::Type CommitMethod){
		for (auto v : LuaCallBacks){
			UTableUtil::callid(v,  InValue, (int)(CommitMethod));
		}
	}

	UFUNCTION()
	int Add() {int r = UTableUtil::pushluafunc(-1);LuaCallBacks.Add(r);return r;}
	UFUNCTION()
	void Remove(int32 r)
	{
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void RemoveByF()
	{
		int r = UTableUtil::popluafunc(-1);
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void Destroy() { LuaCallBacks.Reset(); UTableUtil::rmgcref(this);}
};

UCLASS(meta=(Lua=1))
class UDelegate_USpinBox_OnBeginSliderMovement : public UObject{
	GENERATED_BODY()
public:
	TSet<int> LuaCallBacks;
	UDelegate_USpinBox_OnBeginSliderMovement() {};
	using delegatetype = decltype(((USpinBox*)0)->OnBeginSliderMovement);
	void Init(delegatetype& theDelegate){
		UTableUtil::addgcref((UObject*)this);
		theDelegate.AddDynamic(this, &UDelegate_USpinBox_OnBeginSliderMovement::CallBack);
	}

	UFUNCTION()
	void CallBack(){
		for (auto v : LuaCallBacks){
			UTableUtil::callid(v);
		}
	}

	UFUNCTION()
	int Add() {int r = UTableUtil::pushluafunc(-1);LuaCallBacks.Add(r);return r;}
	UFUNCTION()
	void Remove(int32 r)
	{
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void RemoveByF()
	{
		int r = UTableUtil::popluafunc(-1);
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void Destroy() { LuaCallBacks.Reset(); UTableUtil::rmgcref(this);}
};

UCLASS(meta=(Lua=1))
class UDelegate_USpinBox_OnEndSliderMovement : public UObject{
	GENERATED_BODY()
public:
	TSet<int> LuaCallBacks;
	UDelegate_USpinBox_OnEndSliderMovement() {};
	using delegatetype = decltype(((USpinBox*)0)->OnEndSliderMovement);
	void Init(delegatetype& theDelegate){
		UTableUtil::addgcref((UObject*)this);
		theDelegate.AddDynamic(this, &UDelegate_USpinBox_OnEndSliderMovement::CallBack);
	}

	UFUNCTION()
	void CallBack( float InValue){
		for (auto v : LuaCallBacks){
			UTableUtil::callid(v,  InValue);
		}
	}

	UFUNCTION()
	int Add() {int r = UTableUtil::pushluafunc(-1);LuaCallBacks.Add(r);return r;}
	UFUNCTION()
	void Remove(int32 r)
	{
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void RemoveByF()
	{
		int r = UTableUtil::popluafunc(-1);
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void Destroy() { LuaCallBacks.Reset(); UTableUtil::rmgcref(this);}
};

UCLASS(meta=(Lua=1))
class UDelegate_UButton_OnClicked : public UObject{
	GENERATED_BODY()
public:
	TSet<int> LuaCallBacks;
	UDelegate_UButton_OnClicked() {};
	using delegatetype = decltype(((UButton*)0)->OnClicked);
	void Init(delegatetype& theDelegate){
		UTableUtil::addgcref((UObject*)this);
		theDelegate.AddDynamic(this, &UDelegate_UButton_OnClicked::CallBack);
	}

	UFUNCTION()
	void CallBack(){
		for (auto v : LuaCallBacks){
			UTableUtil::callid(v);
		}
	}

	UFUNCTION()
	int Add() {int r = UTableUtil::pushluafunc(-1);LuaCallBacks.Add(r);return r;}
	UFUNCTION()
	void Remove(int32 r)
	{
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void RemoveByF()
	{
		int r = UTableUtil::popluafunc(-1);
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void Destroy() { LuaCallBacks.Reset(); UTableUtil::rmgcref(this);}
};

UCLASS(meta=(Lua=1))
class UDelegate_UButton_OnPressed : public UObject{
	GENERATED_BODY()
public:
	TSet<int> LuaCallBacks;
	UDelegate_UButton_OnPressed() {};
	using delegatetype = decltype(((UButton*)0)->OnPressed);
	void Init(delegatetype& theDelegate){
		UTableUtil::addgcref((UObject*)this);
		theDelegate.AddDynamic(this, &UDelegate_UButton_OnPressed::CallBack);
	}

	UFUNCTION()
	void CallBack(){
		for (auto v : LuaCallBacks){
			UTableUtil::callid(v);
		}
	}

	UFUNCTION()
	int Add() {int r = UTableUtil::pushluafunc(-1);LuaCallBacks.Add(r);return r;}
	UFUNCTION()
	void Remove(int32 r)
	{
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void RemoveByF()
	{
		int r = UTableUtil::popluafunc(-1);
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void Destroy() { LuaCallBacks.Reset(); UTableUtil::rmgcref(this);}
};

UCLASS(meta=(Lua=1))
class UDelegate_UButton_OnReleased : public UObject{
	GENERATED_BODY()
public:
	TSet<int> LuaCallBacks;
	UDelegate_UButton_OnReleased() {};
	using delegatetype = decltype(((UButton*)0)->OnReleased);
	void Init(delegatetype& theDelegate){
		UTableUtil::addgcref((UObject*)this);
		theDelegate.AddDynamic(this, &UDelegate_UButton_OnReleased::CallBack);
	}

	UFUNCTION()
	void CallBack(){
		for (auto v : LuaCallBacks){
			UTableUtil::callid(v);
		}
	}

	UFUNCTION()
	int Add() {int r = UTableUtil::pushluafunc(-1);LuaCallBacks.Add(r);return r;}
	UFUNCTION()
	void Remove(int32 r)
	{
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void RemoveByF()
	{
		int r = UTableUtil::popluafunc(-1);
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void Destroy() { LuaCallBacks.Reset(); UTableUtil::rmgcref(this);}
};

UCLASS(meta=(Lua=1))
class UDelegate_UButton_OnHovered : public UObject{
	GENERATED_BODY()
public:
	TSet<int> LuaCallBacks;
	UDelegate_UButton_OnHovered() {};
	using delegatetype = decltype(((UButton*)0)->OnHovered);
	void Init(delegatetype& theDelegate){
		UTableUtil::addgcref((UObject*)this);
		theDelegate.AddDynamic(this, &UDelegate_UButton_OnHovered::CallBack);
	}

	UFUNCTION()
	void CallBack(){
		for (auto v : LuaCallBacks){
			UTableUtil::callid(v);
		}
	}

	UFUNCTION()
	int Add() {int r = UTableUtil::pushluafunc(-1);LuaCallBacks.Add(r);return r;}
	UFUNCTION()
	void Remove(int32 r)
	{
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void RemoveByF()
	{
		int r = UTableUtil::popluafunc(-1);
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void Destroy() { LuaCallBacks.Reset(); UTableUtil::rmgcref(this);}
};

UCLASS(meta=(Lua=1))
class UDelegate_UButton_OnUnhovered : public UObject{
	GENERATED_BODY()
public:
	TSet<int> LuaCallBacks;
	UDelegate_UButton_OnUnhovered() {};
	using delegatetype = decltype(((UButton*)0)->OnUnhovered);
	void Init(delegatetype& theDelegate){
		UTableUtil::addgcref((UObject*)this);
		theDelegate.AddDynamic(this, &UDelegate_UButton_OnUnhovered::CallBack);
	}

	UFUNCTION()
	void CallBack(){
		for (auto v : LuaCallBacks){
			UTableUtil::callid(v);
		}
	}

	UFUNCTION()
	int Add() {int r = UTableUtil::pushluafunc(-1);LuaCallBacks.Add(r);return r;}
	UFUNCTION()
	void Remove(int32 r)
	{
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void RemoveByF()
	{
		int r = UTableUtil::popluafunc(-1);
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void Destroy() { LuaCallBacks.Reset(); UTableUtil::rmgcref(this);}
};

UCLASS(meta=(Lua=1))
class UDelegate_UCheckBox_OnCheckStateChanged : public UObject{
	GENERATED_BODY()
public:
	TSet<int> LuaCallBacks;
	UDelegate_UCheckBox_OnCheckStateChanged() {};
	using delegatetype = decltype(((UCheckBox*)0)->OnCheckStateChanged);
	void Init(delegatetype& theDelegate){
		UTableUtil::addgcref((UObject*)this);
		theDelegate.AddDynamic(this, &UDelegate_UCheckBox_OnCheckStateChanged::CallBack);
	}

	UFUNCTION()
	void CallBack( bool bIsChecked){
		for (auto v : LuaCallBacks){
			UTableUtil::callid(v,  bIsChecked);
		}
	}

	UFUNCTION()
	int Add() {int r = UTableUtil::pushluafunc(-1);LuaCallBacks.Add(r);return r;}
	UFUNCTION()
	void Remove(int32 r)
	{
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void RemoveByF()
	{
		int r = UTableUtil::popluafunc(-1);
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void Destroy() { LuaCallBacks.Reset(); UTableUtil::rmgcref(this);}
};

UCLASS(meta=(Lua=1))
class UDelegate_UMenuAnchor_OnMenuOpenChanged : public UObject{
	GENERATED_BODY()
public:
	TSet<int> LuaCallBacks;
	UDelegate_UMenuAnchor_OnMenuOpenChanged() {};
	using delegatetype = decltype(((UMenuAnchor*)0)->OnMenuOpenChanged);
	void Init(delegatetype& theDelegate){
		UTableUtil::addgcref((UObject*)this);
		theDelegate.AddDynamic(this, &UDelegate_UMenuAnchor_OnMenuOpenChanged::CallBack);
	}

	UFUNCTION()
	void CallBack( bool bIsOpen){
		for (auto v : LuaCallBacks){
			UTableUtil::callid(v,  bIsOpen);
		}
	}

	UFUNCTION()
	int Add() {int r = UTableUtil::pushluafunc(-1);LuaCallBacks.Add(r);return r;}
	UFUNCTION()
	void Remove(int32 r)
	{
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void RemoveByF()
	{
		int r = UTableUtil::popluafunc(-1);
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void Destroy() { LuaCallBacks.Reset(); UTableUtil::rmgcref(this);}
};

UCLASS(meta=(Lua=1))
class UDelegate_UMultiLineEditableText_OnTextChanged : public UObject{
	GENERATED_BODY()
public:
	TSet<int> LuaCallBacks;
	UDelegate_UMultiLineEditableText_OnTextChanged() {};
	using delegatetype = decltype(((UMultiLineEditableText*)0)->OnTextChanged);
	void Init(delegatetype& theDelegate){
		UTableUtil::addgcref((UObject*)this);
		theDelegate.AddDynamic(this, &UDelegate_UMultiLineEditableText_OnTextChanged::CallBack);
	}

	UFUNCTION()
	void CallBack( const FText& Text){
		for (auto v : LuaCallBacks){
			UTableUtil::callid(v,  Text);
		}
	}

	UFUNCTION()
	int Add() {int r = UTableUtil::pushluafunc(-1);LuaCallBacks.Add(r);return r;}
	UFUNCTION()
	void Remove(int32 r)
	{
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void RemoveByF()
	{
		int r = UTableUtil::popluafunc(-1);
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void Destroy() { LuaCallBacks.Reset(); UTableUtil::rmgcref(this);}
};

UCLASS(meta=(Lua=1))
class UDelegate_UMultiLineEditableText_OnTextCommitted : public UObject{
	GENERATED_BODY()
public:
	TSet<int> LuaCallBacks;
	UDelegate_UMultiLineEditableText_OnTextCommitted() {};
	using delegatetype = decltype(((UMultiLineEditableText*)0)->OnTextCommitted);
	void Init(delegatetype& theDelegate){
		UTableUtil::addgcref((UObject*)this);
		theDelegate.AddDynamic(this, &UDelegate_UMultiLineEditableText_OnTextCommitted::CallBack);
	}

	UFUNCTION()
	void CallBack( const FText& Text, ETextCommit::Type CommitMethod){
		for (auto v : LuaCallBacks){
			UTableUtil::callid(v,  Text, (int)(CommitMethod));
		}
	}

	UFUNCTION()
	int Add() {int r = UTableUtil::pushluafunc(-1);LuaCallBacks.Add(r);return r;}
	UFUNCTION()
	void Remove(int32 r)
	{
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void RemoveByF()
	{
		int r = UTableUtil::popluafunc(-1);
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void Destroy() { LuaCallBacks.Reset(); UTableUtil::rmgcref(this);}
};

UCLASS(meta=(Lua=1))
class UDelegate_UMultiLineEditableTextBox_OnTextChanged : public UObject{
	GENERATED_BODY()
public:
	TSet<int> LuaCallBacks;
	UDelegate_UMultiLineEditableTextBox_OnTextChanged() {};
	using delegatetype = decltype(((UMultiLineEditableTextBox*)0)->OnTextChanged);
	void Init(delegatetype& theDelegate){
		UTableUtil::addgcref((UObject*)this);
		theDelegate.AddDynamic(this, &UDelegate_UMultiLineEditableTextBox_OnTextChanged::CallBack);
	}

	UFUNCTION()
	void CallBack( const FText& Text){
		for (auto v : LuaCallBacks){
			UTableUtil::callid(v,  Text);
		}
	}

	UFUNCTION()
	int Add() {int r = UTableUtil::pushluafunc(-1);LuaCallBacks.Add(r);return r;}
	UFUNCTION()
	void Remove(int32 r)
	{
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void RemoveByF()
	{
		int r = UTableUtil::popluafunc(-1);
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void Destroy() { LuaCallBacks.Reset(); UTableUtil::rmgcref(this);}
};

UCLASS(meta=(Lua=1))
class UDelegate_UMultiLineEditableTextBox_OnTextCommitted : public UObject{
	GENERATED_BODY()
public:
	TSet<int> LuaCallBacks;
	UDelegate_UMultiLineEditableTextBox_OnTextCommitted() {};
	using delegatetype = decltype(((UMultiLineEditableTextBox*)0)->OnTextCommitted);
	void Init(delegatetype& theDelegate){
		UTableUtil::addgcref((UObject*)this);
		theDelegate.AddDynamic(this, &UDelegate_UMultiLineEditableTextBox_OnTextCommitted::CallBack);
	}

	UFUNCTION()
	void CallBack( const FText& Text, ETextCommit::Type CommitMethod){
		for (auto v : LuaCallBacks){
			UTableUtil::callid(v,  Text, (int)(CommitMethod));
		}
	}

	UFUNCTION()
	int Add() {int r = UTableUtil::pushluafunc(-1);LuaCallBacks.Add(r);return r;}
	UFUNCTION()
	void Remove(int32 r)
	{
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void RemoveByF()
	{
		int r = UTableUtil::popluafunc(-1);
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void Destroy() { LuaCallBacks.Reset(); UTableUtil::rmgcref(this);}
};

UCLASS(meta=(Lua=1))
class UDelegate_AFirstPersonCharacter_hehe : public UObject{
	GENERATED_BODY()
public:
	TSet<int> LuaCallBacks;
	UDelegate_AFirstPersonCharacter_hehe() {};
	using delegatetype = decltype(((AFirstPersonCharacter*)0)->hehe);
	void Init(delegatetype& theDelegate){
		UTableUtil::addgcref((UObject*)this);
		theDelegate.AddDynamic(this, &UDelegate_AFirstPersonCharacter_hehe::CallBack);
	}

	UFUNCTION()
	void CallBack(){
		for (auto v : LuaCallBacks){
			UTableUtil::callid(v);
		}
	}

	UFUNCTION()
	int Add() {int r = UTableUtil::pushluafunc(-1);LuaCallBacks.Add(r);return r;}
	UFUNCTION()
	void Remove(int32 r)
	{
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void RemoveByF()
	{
		int r = UTableUtil::popluafunc(-1);
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void Destroy() { LuaCallBacks.Reset(); UTableUtil::rmgcref(this);}
};

UCLASS(meta=(Lua=1))
class UDelegate_AFirstPersonCharacter_hehe1 : public UObject{
	GENERATED_BODY()
public:
	TSet<int> LuaCallBacks;
	UDelegate_AFirstPersonCharacter_hehe1() {};
	using delegatetype = decltype(((AFirstPersonCharacter*)0)->hehe1);
	void Init(delegatetype& theDelegate){
		UTableUtil::addgcref((UObject*)this);
		theDelegate.AddDynamic(this, &UDelegate_AFirstPersonCharacter_hehe1::CallBack);
	}

	UFUNCTION()
	void CallBack( int32 i){
		for (auto v : LuaCallBacks){
			UTableUtil::callid(v,  i);
		}
	}

	UFUNCTION()
	int Add() {int r = UTableUtil::pushluafunc(-1);LuaCallBacks.Add(r);return r;}
	UFUNCTION()
	void Remove(int32 r)
	{
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void RemoveByF()
	{
		int r = UTableUtil::popluafunc(-1);
		UTableUtil::unref(r);
		LuaCallBacks.Remove(r);
	}
	UFUNCTION()
	void Destroy() { LuaCallBacks.Reset(); UTableUtil::rmgcref(this);}
};

