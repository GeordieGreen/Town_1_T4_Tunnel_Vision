// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HOUDINIENGINERUNTIME_HoudiniInputTypes_generated_h
#error "HoudiniInputTypes.generated.h already included, missing '#pragma once' in HoudiniInputTypes.h"
#endif
#define HOUDINIENGINERUNTIME_HoudiniInputTypes_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_subway_Plugins_Runtime_HoudiniEngine_Source_HoudiniEngineRuntime_Private_HoudiniInputTypes_h


#define FOREACH_ENUM_EHOUDINIXFORMTYPE(op) \
	op(EHoudiniXformType::None) \
	op(EHoudiniXformType::IntoThisObject) \
	op(EHoudiniXformType::Auto) 

enum class EHoudiniXformType : uint8;
template<> HOUDINIENGINERUNTIME_API UEnum* StaticEnum<EHoudiniXformType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
