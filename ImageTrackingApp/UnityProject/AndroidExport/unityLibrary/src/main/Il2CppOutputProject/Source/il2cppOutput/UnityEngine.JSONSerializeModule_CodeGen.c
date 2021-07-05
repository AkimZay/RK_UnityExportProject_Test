#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 System.Object UnityEngine.JsonUtility::FromJsonInternal(System.String,System.Object,System.Type)
extern void JsonUtility_FromJsonInternal_m7353836E98A52C702E713DBE5E9C431BD8EC830A (void);
// 0x00000002 T UnityEngine.JsonUtility::FromJson(System.String)
// 0x00000003 System.Object UnityEngine.JsonUtility::FromJson(System.String,System.Type)
extern void JsonUtility_FromJson_m81FC2A7DCB9231E8E201EAD8E160F921B1D2E25C (void);
static Il2CppMethodPointer s_methodPointers[3] = 
{
	JsonUtility_FromJsonInternal_m7353836E98A52C702E713DBE5E9C431BD8EC830A,
	NULL,
	JsonUtility_FromJson_m81FC2A7DCB9231E8E201EAD8E160F921B1D2E25C,
};
static const int32_t s_InvokerIndices[3] = 
{
	2192,
	-1,
	2426,
};
static const Il2CppTokenRangePair s_rgctxIndices[1] = 
{
	{ 0x06000002, { 0, 2 } },
};
extern const uint32_t g_rgctx_T_tD57E2E2821C128CDD565D67D2E71CF2D9814A923;
extern const uint32_t g_rgctx_T_tD57E2E2821C128CDD565D67D2E71CF2D9814A923;
static const Il2CppRGCTXDefinition s_rgctxValues[2] = 
{
	{ (Il2CppRGCTXDataType)1, (const Il2CppRGCTXDefinitionData *)&g_rgctx_T_tD57E2E2821C128CDD565D67D2E71CF2D9814A923 },
	{ (Il2CppRGCTXDataType)2, (const Il2CppRGCTXDefinitionData *)&g_rgctx_T_tD57E2E2821C128CDD565D67D2E71CF2D9814A923 },
};
extern const CustomAttributesCacheGenerator g_UnityEngine_JSONSerializeModule_AttributeGenerators[];
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_UnityEngine_JSONSerializeModule_CodeGenModule;
const Il2CppCodeGenModule g_UnityEngine_JSONSerializeModule_CodeGenModule = 
{
	"UnityEngine.JSONSerializeModule.dll",
	3,
	s_methodPointers,
	0,
	NULL,
	s_InvokerIndices,
	0,
	NULL,
	1,
	s_rgctxIndices,
	2,
	s_rgctxValues,
	NULL,
	g_UnityEngine_JSONSerializeModule_AttributeGenerators,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
