#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


struct VirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Action`1<System.IntPtr>
struct Action_1_t35A46FAEE6B0A26D311444DF75B6EAFC59EBD914;
// System.Action`1<easyar.OutputFrame>
struct Action_1_t7F90EAB6739020BAAD99CDC2A12F392423CAB924;
// System.Action`1<easyar.WorldRootController>
struct Action_1_t14415D654CABC2CEA6408DEA253DB20FE9B60E10;
// System.Action`2<System.Object,System.Boolean>
struct Action_2_tB46DEF21BEFDF9B046381C5FE787F08B0397DAB5;
// System.Action`2<easyar.Target,System.Boolean>
struct Action_2_tFE34E0ECF3448AAF964BE269E354A55B12FF498B;
// System.Action`3<easyar.ImageTargetController,easyar.Target,System.Boolean>
struct Action_3_tC9E0B2C94C4E06922F22DE7562AEB52676E45FB7;
// System.Collections.Generic.Dictionary`2<easyar.ImageTargetController,System.Boolean>
struct Dictionary_2_t33723D7778E13B98CD0BE75946A95FFAD8CC07E5;
// System.Collections.Generic.Dictionary`2<System.Int32,easyar.TargetController>
struct Dictionary_2_tF885F6FDAD8F633A55FFB108EC53350DDA975AF4;
// System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>
struct Dictionary_2_t8A3F8777BEF075E009D085E3BC9B9ADB00F47345;
// System.Collections.Generic.IEqualityComparer`1<easyar.ImageTargetController>
struct IEqualityComparer_1_t1A2C0E60050FAAD204B916DFB40FDAC1ECC57CA0;
// System.Collections.Generic.Dictionary`2/KeyCollection<easyar.ImageTargetController,System.Boolean>
struct KeyCollection_tD5AA79CBCBEE7C2764AB041DF14AA670A0548A04;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t34AA4AF4E7352129CA58045901530E41445AC16D;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3;
// System.Collections.Generic.Dictionary`2/ValueCollection<easyar.ImageTargetController,System.Boolean>
struct ValueCollection_t36FEA0AB592513C12044E502AF1030A94EF9F3EF;
// System.Collections.Generic.Dictionary`2/Entry<easyar.ImageTargetController,System.Boolean>[]
struct EntryU5BU5D_tD8F2F821651A90FFF961A97BBED3994A17F20B6D;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// ImageTracking_ImageTarget.ImageTrackingSample/ImageFile[]
struct ImageFileU5BU5D_t74471C0FC6238B2E40ABBB894C4A12B113FBDB16;
// easyar.ARAssembly
struct ARAssembly_tB54D4BCB47D72BB6CCA734040AE868B90AF02784;
// easyar.ARSession
struct ARSession_tD6A86CCAD93871B995E4B9FFAC634BBC5642CCAD;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11;
// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// UnityEngine.UI.Button
struct Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D;
// easyar.CameraDevice
struct CameraDevice_tC3CECA485A6FA987D93FB58151FC06EE0E4D8321;
// easyar.CameraParameters
struct CameraParameters_t76FA28EFD269E4ADF063EB2FFA8A3DC01153BBFA;
// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// UnityEngine.UI.FontData
struct FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24;
// easyar.ImageTarget
struct ImageTarget_tA8C5FC0A5A35FC9E978EA583695F80FA45E66F70;
// easyar.ImageTargetController
struct ImageTargetController_tE114A6E6910AF4B6A6206889F52DD2C4D15F094A;
// easyar.ImageTracker
struct ImageTracker_t2596F20FED14203B1FDAABAC21844279AFE9CE25;
// easyar.ImageTrackerFrameFilter
struct ImageTrackerFrameFilter_t38832986899AF907CF9BB3DED8A38F1EB6DC38BB;
// ImageTracking_ImageTarget.ImageTrackingSample
struct ImageTrackingSample_tD24CBC2F8D4E9C4B5701BF28F183F65B77E4371F;
// easyar.InputFrameSink
struct InputFrameSink_t8612C49D65B205A585628C731E49E3117FC89CEB;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15;
// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072;
// UnityEngine.UI.Selectable
struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD;
// UnityEngine.Sprite
struct Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9;
// System.String
struct String_t;
// easyar.Target
struct Target_t88F948B9DEF619469285A1458CE49CE869CBEAD7;
// easyar.TargetController
struct TargetController_t063F5455F413C882C59737867A3E4D8B560C1B0A;
// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1;
// UnityEngine.TextGenerator
struct TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// System.Type
struct Type_t;
// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55;
// easyar.VideoCameraDevice
struct VideoCameraDevice_tE030FD2425274ADA263F159372642355867E6018;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// easyar.WorldRootController
struct WorldRootController_tC93DBC6FF87FCE21FEB5BB1D25BB5428DE303BAB;
// easyar.ARSession/FrameChangeAction
struct FrameChangeAction_t9B7BC7FA8D2A133BB06E4605E20837F37914249D;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F;
// easyar.ImageTargetController/ImageFileSourceData
struct ImageFileSourceData_tCA1858F7E5439C496A73D580D43C3E16F78FE35F;
// easyar.ImageTargetController/TargetDataFileSourceData
struct TargetDataFileSourceData_tCF21B462E860A8A917747457703A162BC8A8BF8A;
// ImageTracking_ImageTarget.ImageTrackingSample/<>c__DisplayClass19_0
struct U3CU3Ec__DisplayClass19_0_tAC486BFFECAC899048DCD1077A01E0A9987F7983;
// ImageTracking_ImageTarget.ImageTrackingSample/<>c__DisplayClass8_0
struct U3CU3Ec__DisplayClass8_0_t60374A69B9DB8DDCABB6BB8C04FB7087A115C827;
// ImageTracking_ImageTarget.ImageTrackingSample/ImageFile
struct ImageFile_t5D3F3D881BABF7E68D51721CC307EB7B52709229;
// ImageTracking_ImageTarget.ImageTrackingSample/ImageJson
struct ImageJson_t5E105E6DB96A0ED2FD3FF970160F15E8FA1C3FBE;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4;
// easyar.RefBase/Retainer
struct Retainer_tCDA4E090ADA03CD623FD9E7483C78CBEC15FE35C;

IL2CPP_EXTERN_C RuntimeClass* ARCenterMode_t83FCE2DD4B9A00F624F9A3D05C96A4E1DD9AC61F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ARHorizontalFlipMode_t353952F54B442ABEAA7856F4226E7847F3F1C399_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_2_tFE34E0ECF3448AAF964BE269E354A55B12FF498B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t33723D7778E13B98CD0BE75946A95FFAD8CC07E5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Enum_t23B90B40F60E677A8025267341651C94AE079CDA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass19_0_tAC486BFFECAC899048DCD1077A01E0A9987F7983_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass8_0_t60374A69B9DB8DDCABB6BB8C04FB7087A115C827_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral05CD887F615D875D8D276E57FE6EA68A4DA458B4;
IL2CPP_EXTERN_C String_t* _stringLiteral083AB95C507154B86F7218869F1C6B65C6886003;
IL2CPP_EXTERN_C String_t* _stringLiteral0E8CD1E34507F5A3FFA3D074EE3DF7B1F702458B;
IL2CPP_EXTERN_C String_t* _stringLiteral1168E92C164109D6220480DEDA987085B2A21155;
IL2CPP_EXTERN_C String_t* _stringLiteral19283BE63ADDEA9CBFC12EBFA62FE7E55DACF193;
IL2CPP_EXTERN_C String_t* _stringLiteral1B622538F8D6EF362BBE0A6AE380DA4313075685;
IL2CPP_EXTERN_C String_t* _stringLiteral206F3739AB9C2465DE900934CBBFEF89F05FE721;
IL2CPP_EXTERN_C String_t* _stringLiteral24313380B89749FA23D81C8CFE7ECADF5F282DF3;
IL2CPP_EXTERN_C String_t* _stringLiteral24384261B6324D1B1FACC1EBCBFAEC5E59A0062B;
IL2CPP_EXTERN_C String_t* _stringLiteral2AE63833CD2080313CFBF6FB7EAE61276E4B5ED4;
IL2CPP_EXTERN_C String_t* _stringLiteral42B857DCA1FE24EA99D77A53859F0916B3433DFA;
IL2CPP_EXTERN_C String_t* _stringLiteral5543CB947D1FE978A2DD95D4508E315A8B749B25;
IL2CPP_EXTERN_C String_t* _stringLiteral5E3F345A25DD79391E7D2F5A1FB17A6998C39DDC;
IL2CPP_EXTERN_C String_t* _stringLiteral616FA8FACA4BD63856D14D13CE36C30A22C4AE73;
IL2CPP_EXTERN_C String_t* _stringLiteral7281452A3DC77AEE11B7BF6EA8596FE4074AAEBE;
IL2CPP_EXTERN_C String_t* _stringLiteral7A71A119AB19DAEDD0B973DCB57AA0B794DBFBBA;
IL2CPP_EXTERN_C String_t* _stringLiteral7DB229E4B4513366157C0D536C533A2B6C5F7AA5;
IL2CPP_EXTERN_C String_t* _stringLiteral7E892D89E76900AA0C9D21D4E503234EAADD3377;
IL2CPP_EXTERN_C String_t* _stringLiteral84F4E5C538709D63C98F6DD552A0D906C004EC4E;
IL2CPP_EXTERN_C String_t* _stringLiteral9781C415DF8DCDF90F2B330680B9D230ED6E94EF;
IL2CPP_EXTERN_C String_t* _stringLiteralA4E02162CD27965406A2EB59A9DEEC044B27AB4A;
IL2CPP_EXTERN_C String_t* _stringLiteralB0410D7021B5FCF2EF5873BC8F8101B9AE4FEB04;
IL2CPP_EXTERN_C String_t* _stringLiteralB538CA43524DB0615DBD5761697FBEA96E081131;
IL2CPP_EXTERN_C String_t* _stringLiteralEEE0FB26F879234275046023F3D7FEE278B1684C;
IL2CPP_EXTERN_C String_t* _stringLiteralF716B0D4627FA118D23A0EBFC6830217C9CC2C23;
IL2CPP_EXTERN_C String_t* _stringLiteralF7D70AB4110EC818FAF857316C4DE38C027FE186;
IL2CPP_EXTERN_C const RuntimeMethod* Action_2__ctor_m1869DFB1B7F135D3A64B8923A3404D9D5E84D017_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInChildren_TisImageTrackerFrameFilter_t38832986899AF907CF9BB3DED8A38F1EB6DC38BB_m69DC23706ECB589CA8A6FC3A3C29E26FFE8BB9FA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInChildren_TisVideoCameraDevice_tE030FD2425274ADA263F159372642355867E6018_mDA35EC0FCF5B3B4DF03630EB5BB123C0DEBCB0EE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_mED8C9575844B41F67CB4C2B13685FC0174CB61BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_GetEnumerator_m8E4E939B34C1FFFE6E6BC59A5FC062F126F5C320_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mCD11050E009992EEF66A6AC46DB6F0491E615CB7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m3789FE3DCE0BB8925C674AAE9B067AD0BEEB59A2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_mCE55410BC242D9CAECB52D0BCA4BAE953398BF28_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m9AB85FA1393DFF10512CB0A6D93D623366D3045D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m9F5787C33BFE1EA8ECF433C93BAF8B5ED0ED1825_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mBB40B9605AF1EF1CF7CB9EBE731BFF124454E9D2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisImageTargetController_tE114A6E6910AF4B6A6206889F52DD2C4D15F094A_m36A09AC1060111D52C131101177EF68C6A7C502D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisImageTargetController_tE114A6E6910AF4B6A6206889F52DD2C4D15F094A_m85EFB1F0909DD8F536F474650D7A8952DBB61A2E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonUtility_FromJson_TisImageJson_t5E105E6DB96A0ED2FD3FF970160F15E8FA1C3FBE_m725F03E9AE1BBF6547E9EDDE653CC3F47CBBF5C3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_m907D63078F5F9090FA7E33719A0FFC649F4AB762_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_m4383D0C8C3CCE3CDCA9568C5F9CF6B5B9DC90883_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass19_0_U3CAddTargetControllerEventsU3Eb__0_mC017439BFBDBB5995BD79EAF3863F9D7745ED68F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass19_0_U3CAddTargetControllerEventsU3Eb__1_m05BB69536FC7115E9C1ECCE817FB005CA7A5A3C9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass19_0_U3CAddTargetControllerEventsU3Eb__2_mCDA2350B496E513951712A55D98F56895FA30325_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass19_0_U3CAddTargetControllerEventsU3Eb__3_m7FD7635161087A61906866A384AF6EA9C85EFA2C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass8_0_U3CAwakeU3Eb__0_mD689E032F8DE15E3D2F0EC2254C713E91534B653_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* ARCenterMode_t83FCE2DD4B9A00F624F9A3D05C96A4E1DD9AC61F_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ARHorizontalFlipMode_t353952F54B442ABEAA7856F4226E7847F3F1C399_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
struct ImageFileU5BU5D_t74471C0FC6238B2E40ABBB894C4A12B113FBDB16;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tBC92E28341D7E5E4F6EA9031B62F1C4772BB3310 
{
public:

public:
};


// System.Object


// System.Collections.Generic.Dictionary`2<easyar.ImageTargetController,System.Boolean>
struct Dictionary_2_t33723D7778E13B98CD0BE75946A95FFAD8CC07E5  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tD8F2F821651A90FFF961A97BBED3994A17F20B6D* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_tD5AA79CBCBEE7C2764AB041DF14AA670A0548A04 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t36FEA0AB592513C12044E502AF1030A94EF9F3EF * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t33723D7778E13B98CD0BE75946A95FFAD8CC07E5, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t33723D7778E13B98CD0BE75946A95FFAD8CC07E5, ___entries_1)); }
	inline EntryU5BU5D_tD8F2F821651A90FFF961A97BBED3994A17F20B6D* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tD8F2F821651A90FFF961A97BBED3994A17F20B6D** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tD8F2F821651A90FFF961A97BBED3994A17F20B6D* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t33723D7778E13B98CD0BE75946A95FFAD8CC07E5, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t33723D7778E13B98CD0BE75946A95FFAD8CC07E5, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t33723D7778E13B98CD0BE75946A95FFAD8CC07E5, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t33723D7778E13B98CD0BE75946A95FFAD8CC07E5, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t33723D7778E13B98CD0BE75946A95FFAD8CC07E5, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t33723D7778E13B98CD0BE75946A95FFAD8CC07E5, ___keys_7)); }
	inline KeyCollection_tD5AA79CBCBEE7C2764AB041DF14AA670A0548A04 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tD5AA79CBCBEE7C2764AB041DF14AA670A0548A04 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tD5AA79CBCBEE7C2764AB041DF14AA670A0548A04 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t33723D7778E13B98CD0BE75946A95FFAD8CC07E5, ___values_8)); }
	inline ValueCollection_t36FEA0AB592513C12044E502AF1030A94EF9F3EF * get_values_8() const { return ___values_8; }
	inline ValueCollection_t36FEA0AB592513C12044E502AF1030A94EF9F3EF ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t36FEA0AB592513C12044E502AF1030A94EF9F3EF * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t33723D7778E13B98CD0BE75946A95FFAD8CC07E5, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// System.String
struct String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// UnityEngine.Events.UnityEventBase
struct UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB  : public RuntimeObject
{
public:
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;

public:
	inline static int32_t get_offset_of_m_Calls_0() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_Calls_0)); }
	inline InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * get_m_Calls_0() const { return ___m_Calls_0; }
	inline InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 ** get_address_of_m_Calls_0() { return &___m_Calls_0; }
	inline void set_m_Calls_0(InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * value)
	{
		___m_Calls_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Calls_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PersistentCalls_1() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_PersistentCalls_1)); }
	inline PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * get_m_PersistentCalls_1() const { return ___m_PersistentCalls_1; }
	inline PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC ** get_address_of_m_PersistentCalls_1() { return &___m_PersistentCalls_1; }
	inline void set_m_PersistentCalls_1(PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * value)
	{
		___m_PersistentCalls_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PersistentCalls_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_CallsDirty_2() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_CallsDirty_2)); }
	inline bool get_m_CallsDirty_2() const { return ___m_CallsDirty_2; }
	inline bool* get_address_of_m_CallsDirty_2() { return &___m_CallsDirty_2; }
	inline void set_m_CallsDirty_2(bool value)
	{
		___m_CallsDirty_2 = value;
	}
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// ImageTracking_ImageTarget.ImageTrackingSample/<>c__DisplayClass19_0
struct U3CU3Ec__DisplayClass19_0_tAC486BFFECAC899048DCD1077A01E0A9987F7983  : public RuntimeObject
{
public:
	// easyar.ImageTargetController ImageTracking_ImageTarget.ImageTrackingSample/<>c__DisplayClass19_0::controller
	ImageTargetController_tE114A6E6910AF4B6A6206889F52DD2C4D15F094A * ___controller_0;
	// ImageTracking_ImageTarget.ImageTrackingSample ImageTracking_ImageTarget.ImageTrackingSample/<>c__DisplayClass19_0::<>4__this
	ImageTrackingSample_tD24CBC2F8D4E9C4B5701BF28F183F65B77E4371F * ___U3CU3E4__this_1;

public:
	inline static int32_t get_offset_of_controller_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass19_0_tAC486BFFECAC899048DCD1077A01E0A9987F7983, ___controller_0)); }
	inline ImageTargetController_tE114A6E6910AF4B6A6206889F52DD2C4D15F094A * get_controller_0() const { return ___controller_0; }
	inline ImageTargetController_tE114A6E6910AF4B6A6206889F52DD2C4D15F094A ** get_address_of_controller_0() { return &___controller_0; }
	inline void set_controller_0(ImageTargetController_tE114A6E6910AF4B6A6206889F52DD2C4D15F094A * value)
	{
		___controller_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___controller_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass19_0_tAC486BFFECAC899048DCD1077A01E0A9987F7983, ___U3CU3E4__this_1)); }
	inline ImageTrackingSample_tD24CBC2F8D4E9C4B5701BF28F183F65B77E4371F * get_U3CU3E4__this_1() const { return ___U3CU3E4__this_1; }
	inline ImageTrackingSample_tD24CBC2F8D4E9C4B5701BF28F183F65B77E4371F ** get_address_of_U3CU3E4__this_1() { return &___U3CU3E4__this_1; }
	inline void set_U3CU3E4__this_1(ImageTrackingSample_tD24CBC2F8D4E9C4B5701BF28F183F65B77E4371F * value)
	{
		___U3CU3E4__this_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_1), (void*)value);
	}
};


// ImageTracking_ImageTarget.ImageTrackingSample/<>c__DisplayClass8_0
struct U3CU3Ec__DisplayClass8_0_t60374A69B9DB8DDCABB6BB8C04FB7087A115C827  : public RuntimeObject
{
public:
	// System.String ImageTracking_ImageTarget.ImageTrackingSample/<>c__DisplayClass8_0::launcher
	String_t* ___launcher_0;

public:
	inline static int32_t get_offset_of_launcher_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass8_0_t60374A69B9DB8DDCABB6BB8C04FB7087A115C827, ___launcher_0)); }
	inline String_t* get_launcher_0() const { return ___launcher_0; }
	inline String_t** get_address_of_launcher_0() { return &___launcher_0; }
	inline void set_launcher_0(String_t* value)
	{
		___launcher_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___launcher_0), (void*)value);
	}
};


// ImageTracking_ImageTarget.ImageTrackingSample/ImageFile
struct ImageFile_t5D3F3D881BABF7E68D51721CC307EB7B52709229  : public RuntimeObject
{
public:
	// System.String ImageTracking_ImageTarget.ImageTrackingSample/ImageFile::image
	String_t* ___image_0;
	// System.String ImageTracking_ImageTarget.ImageTrackingSample/ImageFile::name
	String_t* ___name_1;
	// System.Single ImageTracking_ImageTarget.ImageTrackingSample/ImageFile::scale
	float ___scale_2;

public:
	inline static int32_t get_offset_of_image_0() { return static_cast<int32_t>(offsetof(ImageFile_t5D3F3D881BABF7E68D51721CC307EB7B52709229, ___image_0)); }
	inline String_t* get_image_0() const { return ___image_0; }
	inline String_t** get_address_of_image_0() { return &___image_0; }
	inline void set_image_0(String_t* value)
	{
		___image_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___image_0), (void*)value);
	}

	inline static int32_t get_offset_of_name_1() { return static_cast<int32_t>(offsetof(ImageFile_t5D3F3D881BABF7E68D51721CC307EB7B52709229, ___name_1)); }
	inline String_t* get_name_1() const { return ___name_1; }
	inline String_t** get_address_of_name_1() { return &___name_1; }
	inline void set_name_1(String_t* value)
	{
		___name_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_1), (void*)value);
	}

	inline static int32_t get_offset_of_scale_2() { return static_cast<int32_t>(offsetof(ImageFile_t5D3F3D881BABF7E68D51721CC307EB7B52709229, ___scale_2)); }
	inline float get_scale_2() const { return ___scale_2; }
	inline float* get_address_of_scale_2() { return &___scale_2; }
	inline void set_scale_2(float value)
	{
		___scale_2 = value;
	}
};


// ImageTracking_ImageTarget.ImageTrackingSample/ImageJson
struct ImageJson_t5E105E6DB96A0ED2FD3FF970160F15E8FA1C3FBE  : public RuntimeObject
{
public:
	// ImageTracking_ImageTarget.ImageTrackingSample/ImageFile[] ImageTracking_ImageTarget.ImageTrackingSample/ImageJson::images
	ImageFileU5BU5D_t74471C0FC6238B2E40ABBB894C4A12B113FBDB16* ___images_0;

public:
	inline static int32_t get_offset_of_images_0() { return static_cast<int32_t>(offsetof(ImageJson_t5E105E6DB96A0ED2FD3FF970160F15E8FA1C3FBE, ___images_0)); }
	inline ImageFileU5BU5D_t74471C0FC6238B2E40ABBB894C4A12B113FBDB16* get_images_0() const { return ___images_0; }
	inline ImageFileU5BU5D_t74471C0FC6238B2E40ABBB894C4A12B113FBDB16** get_address_of_images_0() { return &___images_0; }
	inline void set_images_0(ImageFileU5BU5D_t74471C0FC6238B2E40ABBB894C4A12B113FBDB16* value)
	{
		___images_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___images_0), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.Boolean,System.Boolean>
struct KeyValuePair_2_t19F0CDC1FC70851649B03EDD70BD79E548971623 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	bool ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	bool ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t19F0CDC1FC70851649B03EDD70BD79E548971623, ___key_0)); }
	inline bool get_key_0() const { return ___key_0; }
	inline bool* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(bool value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t19F0CDC1FC70851649B03EDD70BD79E548971623, ___value_1)); }
	inline bool get_value_1() const { return ___value_1; }
	inline bool* get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(bool value)
	{
		___value_1 = value;
	}
};


// System.Collections.Generic.KeyValuePair`2<easyar.ImageTargetController,System.Boolean>
struct KeyValuePair_2_tCE1C71A7043B5E2EF1D939DF3F8E09D15391DFDD 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	ImageTargetController_tE114A6E6910AF4B6A6206889F52DD2C4D15F094A * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	bool ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tCE1C71A7043B5E2EF1D939DF3F8E09D15391DFDD, ___key_0)); }
	inline ImageTargetController_tE114A6E6910AF4B6A6206889F52DD2C4D15F094A * get_key_0() const { return ___key_0; }
	inline ImageTargetController_tE114A6E6910AF4B6A6206889F52DD2C4D15F094A ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(ImageTargetController_tE114A6E6910AF4B6A6206889F52DD2C4D15F094A * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tCE1C71A7043B5E2EF1D939DF3F8E09D15391DFDD, ___value_1)); }
	inline bool get_value_1() const { return ___value_1; }
	inline bool* get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(bool value)
	{
		___value_1 = value;
	}
};


// System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>
struct KeyValuePair_2_tF48C056DF83BF9AF3BAE277B149EC5E4E436BD1A 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	bool ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tF48C056DF83BF9AF3BAE277B149EC5E4E436BD1A, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tF48C056DF83BF9AF3BAE277B149EC5E4E436BD1A, ___value_1)); }
	inline bool get_value_1() const { return ___value_1; }
	inline bool* get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(bool value)
	{
		___value_1 = value;
	}
};


// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// UnityEngine.Color
struct Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E 
{
public:
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;

public:
	inline static int32_t get_offset_of_m_HighlightedSprite_0() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_HighlightedSprite_0)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_HighlightedSprite_0() const { return ___m_HighlightedSprite_0; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_HighlightedSprite_0() { return &___m_HighlightedSprite_0; }
	inline void set_m_HighlightedSprite_0(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_HighlightedSprite_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HighlightedSprite_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PressedSprite_1() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_PressedSprite_1)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_PressedSprite_1() const { return ___m_PressedSprite_1; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_PressedSprite_1() { return &___m_PressedSprite_1; }
	inline void set_m_PressedSprite_1(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_PressedSprite_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PressedSprite_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectedSprite_2() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_SelectedSprite_2)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_SelectedSprite_2() const { return ___m_SelectedSprite_2; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_SelectedSprite_2() { return &___m_SelectedSprite_2; }
	inline void set_m_SelectedSprite_2(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_SelectedSprite_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectedSprite_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisabledSprite_3() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_DisabledSprite_3)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_DisabledSprite_3() const { return ___m_DisabledSprite_3; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_DisabledSprite_3() { return &___m_DisabledSprite_3; }
	inline void set_m_DisabledSprite_3(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_DisabledSprite_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DisabledSprite_3), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E_marshaled_pinvoke
{
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E_marshaled_com
{
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;
};

// easyar.Unit
struct Unit_tEE307B4A0332306585E616404CFA9683BFCEFA8B 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Unit_tEE307B4A0332306585E616404CFA9683BFCEFA8B__padding[1];
	};

public:
};


// UnityEngine.Events.UnityEvent
struct UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4  : public UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// UnityEngine.Vector2
struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___zeroVector_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___oneVector_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___upVector_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___downVector_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___leftVector_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___rightVector_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector4
struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___zeroVector_5)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___oneVector_6)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___negativeInfinityVector_8 = value;
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// System.Collections.Generic.Dictionary`2/Enumerator<easyar.ImageTargetController,System.Boolean>
struct Enumerator_t771777407FF5589AB133F1A819A3A050E7293A67 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::dictionary
	Dictionary_2_t33723D7778E13B98CD0BE75946A95FFAD8CC07E5 * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::version
	int32_t ___version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::index
	int32_t ___index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::current
	KeyValuePair_2_tCE1C71A7043B5E2EF1D939DF3F8E09D15391DFDD  ___current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::getEnumeratorRetType
	int32_t ___getEnumeratorRetType_4;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_t771777407FF5589AB133F1A819A3A050E7293A67, ___dictionary_0)); }
	inline Dictionary_2_t33723D7778E13B98CD0BE75946A95FFAD8CC07E5 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t33723D7778E13B98CD0BE75946A95FFAD8CC07E5 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t33723D7778E13B98CD0BE75946A95FFAD8CC07E5 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(Enumerator_t771777407FF5589AB133F1A819A3A050E7293A67, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_index_2() { return static_cast<int32_t>(offsetof(Enumerator_t771777407FF5589AB133F1A819A3A050E7293A67, ___index_2)); }
	inline int32_t get_index_2() const { return ___index_2; }
	inline int32_t* get_address_of_index_2() { return &___index_2; }
	inline void set_index_2(int32_t value)
	{
		___index_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t771777407FF5589AB133F1A819A3A050E7293A67, ___current_3)); }
	inline KeyValuePair_2_tCE1C71A7043B5E2EF1D939DF3F8E09D15391DFDD  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_tCE1C71A7043B5E2EF1D939DF3F8E09D15391DFDD * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_tCE1C71A7043B5E2EF1D939DF3F8E09D15391DFDD  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___key_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_getEnumeratorRetType_4() { return static_cast<int32_t>(offsetof(Enumerator_t771777407FF5589AB133F1A819A3A050E7293A67, ___getEnumeratorRetType_4)); }
	inline int32_t get_getEnumeratorRetType_4() const { return ___getEnumeratorRetType_4; }
	inline int32_t* get_address_of_getEnumeratorRetType_4() { return &___getEnumeratorRetType_4; }
	inline void set_getEnumeratorRetType_4(int32_t value)
	{
		___getEnumeratorRetType_4 = value;
	}
};


// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>
struct Enumerator_t7CF1480E8063E004FE105D7E9D3A68CD5AC7D851 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::dictionary
	Dictionary_2_t8A3F8777BEF075E009D085E3BC9B9ADB00F47345 * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::version
	int32_t ___version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::index
	int32_t ___index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::current
	KeyValuePair_2_tF48C056DF83BF9AF3BAE277B149EC5E4E436BD1A  ___current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::getEnumeratorRetType
	int32_t ___getEnumeratorRetType_4;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_t7CF1480E8063E004FE105D7E9D3A68CD5AC7D851, ___dictionary_0)); }
	inline Dictionary_2_t8A3F8777BEF075E009D085E3BC9B9ADB00F47345 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t8A3F8777BEF075E009D085E3BC9B9ADB00F47345 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t8A3F8777BEF075E009D085E3BC9B9ADB00F47345 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(Enumerator_t7CF1480E8063E004FE105D7E9D3A68CD5AC7D851, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_index_2() { return static_cast<int32_t>(offsetof(Enumerator_t7CF1480E8063E004FE105D7E9D3A68CD5AC7D851, ___index_2)); }
	inline int32_t get_index_2() const { return ___index_2; }
	inline int32_t* get_address_of_index_2() { return &___index_2; }
	inline void set_index_2(int32_t value)
	{
		___index_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t7CF1480E8063E004FE105D7E9D3A68CD5AC7D851, ___current_3)); }
	inline KeyValuePair_2_tF48C056DF83BF9AF3BAE277B149EC5E4E436BD1A  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_tF48C056DF83BF9AF3BAE277B149EC5E4E436BD1A * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_tF48C056DF83BF9AF3BAE277B149EC5E4E436BD1A  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___key_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_getEnumeratorRetType_4() { return static_cast<int32_t>(offsetof(Enumerator_t7CF1480E8063E004FE105D7E9D3A68CD5AC7D851, ___getEnumeratorRetType_4)); }
	inline int32_t get_getEnumeratorRetType_4() const { return ___getEnumeratorRetType_4; }
	inline int32_t* get_address_of_getEnumeratorRetType_4() { return &___getEnumeratorRetType_4; }
	inline void set_getEnumeratorRetType_4(int32_t value)
	{
		___getEnumeratorRetType_4 = value;
	}
};


// System.Reflection.BindingFlags
struct BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// easyar.CameraDeviceFocusMode
struct CameraDeviceFocusMode_t365408AB406828CAF1D5349F74981196ECAFF219 
{
public:
	// System.Int32 easyar.CameraDeviceFocusMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CameraDeviceFocusMode_t365408AB406828CAF1D5349F74981196ECAFF219, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// easyar.CameraDevicePreference
struct CameraDevicePreference_tBF70818F9E18D8492012F00D631759495DEB90F8 
{
public:
	// System.Int32 easyar.CameraDevicePreference::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CameraDevicePreference_tBF70818F9E18D8492012F00D631759495DEB90F8, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// easyar.CameraDeviceType
struct CameraDeviceType_t0AA4670A0B3C446262AC4135C6A6F0A91300C639 
{
public:
	// System.Int32 easyar.CameraDeviceType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CameraDeviceType_t0AA4670A0B3C446262AC4135C6A6F0A91300C639, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.ColorBlock
struct ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 
{
public:
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;

public:
	inline static int32_t get_offset_of_m_NormalColor_0() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_NormalColor_0)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_NormalColor_0() const { return ___m_NormalColor_0; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_NormalColor_0() { return &___m_NormalColor_0; }
	inline void set_m_NormalColor_0(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_NormalColor_0 = value;
	}

	inline static int32_t get_offset_of_m_HighlightedColor_1() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_HighlightedColor_1)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_HighlightedColor_1() const { return ___m_HighlightedColor_1; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_HighlightedColor_1() { return &___m_HighlightedColor_1; }
	inline void set_m_HighlightedColor_1(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_HighlightedColor_1 = value;
	}

	inline static int32_t get_offset_of_m_PressedColor_2() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_PressedColor_2)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_PressedColor_2() const { return ___m_PressedColor_2; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_PressedColor_2() { return &___m_PressedColor_2; }
	inline void set_m_PressedColor_2(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_PressedColor_2 = value;
	}

	inline static int32_t get_offset_of_m_SelectedColor_3() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_SelectedColor_3)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_SelectedColor_3() const { return ___m_SelectedColor_3; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_SelectedColor_3() { return &___m_SelectedColor_3; }
	inline void set_m_SelectedColor_3(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_SelectedColor_3 = value;
	}

	inline static int32_t get_offset_of_m_DisabledColor_4() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_DisabledColor_4)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_DisabledColor_4() const { return ___m_DisabledColor_4; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_DisabledColor_4() { return &___m_DisabledColor_4; }
	inline void set_m_DisabledColor_4(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_DisabledColor_4 = value;
	}

	inline static int32_t get_offset_of_m_ColorMultiplier_5() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_ColorMultiplier_5)); }
	inline float get_m_ColorMultiplier_5() const { return ___m_ColorMultiplier_5; }
	inline float* get_address_of_m_ColorMultiplier_5() { return &___m_ColorMultiplier_5; }
	inline void set_m_ColorMultiplier_5(float value)
	{
		___m_ColorMultiplier_5 = value;
	}

	inline static int32_t get_offset_of_m_FadeDuration_6() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_FadeDuration_6)); }
	inline float get_m_FadeDuration_6() const { return ___m_FadeDuration_6; }
	inline float* get_address_of_m_FadeDuration_6() { return &___m_FadeDuration_6; }
	inline void set_m_FadeDuration_6(float value)
	{
		___m_FadeDuration_6 = value;
	}
};

struct ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955_StaticFields
{
public:
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  ___defaultColorBlock_7;

public:
	inline static int32_t get_offset_of_defaultColorBlock_7() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955_StaticFields, ___defaultColorBlock_7)); }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  get_defaultColorBlock_7() const { return ___defaultColorBlock_7; }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 * get_address_of_defaultColorBlock_7() { return &___defaultColorBlock_7; }
	inline void set_defaultColorBlock_7(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  value)
	{
		___defaultColorBlock_7 = value;
	}
};


// System.Delegate
struct Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// easyar.ImageTrackerMode
struct ImageTrackerMode_t97634EB3778CB7BDFE1C58291A30D1079B890972 
{
public:
	// System.Int32 easyar.ImageTrackerMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ImageTrackerMode_t97634EB3778CB7BDFE1C58291A30D1079B890972, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// easyar.OptionalTag
struct OptionalTag_tAAEDFD0B301349167E19BC22B6EE5BE452648F7E 
{
public:
	// System.Int32 easyar.OptionalTag::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(OptionalTag_tAAEDFD0B301349167E19BC22B6EE5BE452648F7E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// easyar.PathType
struct PathType_t3049764570F23FAEE708D1A05CADEBB0B748F9B7 
{
public:
	// System.Int32 easyar.PathType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PathType_t3049764570F23FAEE708D1A05CADEBB0B748F9B7, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// easyar.RefBase
struct RefBase_t89BAC9C1493EC25E53A2476EFC3FBD0078383CA0  : public RuntimeObject
{
public:
	// System.IntPtr easyar.RefBase::cdata_
	intptr_t ___cdata__0;
	// System.Action`1<System.IntPtr> easyar.RefBase::deleter_
	Action_1_t35A46FAEE6B0A26D311444DF75B6EAFC59EBD914 * ___deleter__1;
	// easyar.RefBase/Retainer easyar.RefBase::retainer_
	Retainer_tCDA4E090ADA03CD623FD9E7483C78CBEC15FE35C * ___retainer__2;

public:
	inline static int32_t get_offset_of_cdata__0() { return static_cast<int32_t>(offsetof(RefBase_t89BAC9C1493EC25E53A2476EFC3FBD0078383CA0, ___cdata__0)); }
	inline intptr_t get_cdata__0() const { return ___cdata__0; }
	inline intptr_t* get_address_of_cdata__0() { return &___cdata__0; }
	inline void set_cdata__0(intptr_t value)
	{
		___cdata__0 = value;
	}

	inline static int32_t get_offset_of_deleter__1() { return static_cast<int32_t>(offsetof(RefBase_t89BAC9C1493EC25E53A2476EFC3FBD0078383CA0, ___deleter__1)); }
	inline Action_1_t35A46FAEE6B0A26D311444DF75B6EAFC59EBD914 * get_deleter__1() const { return ___deleter__1; }
	inline Action_1_t35A46FAEE6B0A26D311444DF75B6EAFC59EBD914 ** get_address_of_deleter__1() { return &___deleter__1; }
	inline void set_deleter__1(Action_1_t35A46FAEE6B0A26D311444DF75B6EAFC59EBD914 * value)
	{
		___deleter__1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___deleter__1), (void*)value);
	}

	inline static int32_t get_offset_of_retainer__2() { return static_cast<int32_t>(offsetof(RefBase_t89BAC9C1493EC25E53A2476EFC3FBD0078383CA0, ___retainer__2)); }
	inline Retainer_tCDA4E090ADA03CD623FD9E7483C78CBEC15FE35C * get_retainer__2() const { return ___retainer__2; }
	inline Retainer_tCDA4E090ADA03CD623FD9E7483C78CBEC15FE35C ** get_address_of_retainer__2() { return &___retainer__2; }
	inline void set_retainer__2(Retainer_tCDA4E090ADA03CD623FD9E7483C78CBEC15FE35C * value)
	{
		___retainer__2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___retainer__2), (void*)value);
	}
};


// System.RuntimeTypeHandle
struct RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// easyar.ARAssembly/AssembleMode
struct AssembleMode_t4589A3C172C84116693223292DB9FA496C52A6CB 
{
public:
	// System.Int32 easyar.ARAssembly/AssembleMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AssembleMode_t4589A3C172C84116693223292DB9FA496C52A6CB, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// easyar.ARSession/ARCenterMode
struct ARCenterMode_t83FCE2DD4B9A00F624F9A3D05C96A4E1DD9AC61F 
{
public:
	// System.Int32 easyar.ARSession/ARCenterMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ARCenterMode_t83FCE2DD4B9A00F624F9A3D05C96A4E1DD9AC61F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// easyar.ARSession/ARHorizontalFlipMode
struct ARHorizontalFlipMode_t353952F54B442ABEAA7856F4226E7847F3F1C399 
{
public:
	// System.Int32 easyar.ARSession/ARHorizontalFlipMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ARHorizontalFlipMode_t353952F54B442ABEAA7856F4226E7847F3F1C399, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F  : public UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4
{
public:

public:
};


// easyar.ImageTargetController/DataSource
struct DataSource_tC466C6176B9CAD76D5A1FC82DEF1085E30118F1B 
{
public:
	// System.Int32 easyar.ImageTargetController/DataSource::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DataSource_tC466C6176B9CAD76D5A1FC82DEF1085E30118F1B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Navigation/Mode
struct Mode_t3113FDF05158BBA1DFC78D7F69E4C1D25135CB0F 
{
public:
	// System.Int32 UnityEngine.UI.Navigation/Mode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Mode_t3113FDF05158BBA1DFC78D7F69E4C1D25135CB0F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Selectable/Transition
struct Transition_t1FC449676815A798E758D32E8BE6DC0A2511DF14 
{
public:
	// System.Int32 UnityEngine.UI.Selectable/Transition::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Transition_t1FC449676815A798E758D32E8BE6DC0A2511DF14, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// easyar.TargetController/ActiveControlStrategy
struct ActiveControlStrategy_tDE10A5C53968E7B0F34B3CA81ED3CD09C4C3410A 
{
public:
	// System.Int32 easyar.TargetController/ActiveControlStrategy::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ActiveControlStrategy_tDE10A5C53968E7B0F34B3CA81ED3CD09C4C3410A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// easyar.VideoCameraDevice/CameraDeviceOpenMethod
struct CameraDeviceOpenMethod_t24F79AF1C89CF3E60537431466568FC77DA7C32F 
{
public:
	// System.Int32 easyar.VideoCameraDevice/CameraDeviceOpenMethod::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CameraDeviceOpenMethod_t24F79AF1C89CF3E60537431466568FC77DA7C32F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// easyar.Optional`1<easyar.CameraParameters>
struct Optional_1_t62F9A2FE6A114299975FAC930BF3AA1AB6C2C68F 
{
public:
	// easyar.OptionalTag easyar.Optional`1::_Tag
	int32_t ____Tag_0;
	// easyar.Unit easyar.Optional`1::None
	Unit_tEE307B4A0332306585E616404CFA9683BFCEFA8B  ___None_1;
	// T easyar.Optional`1::Some
	CameraParameters_t76FA28EFD269E4ADF063EB2FFA8A3DC01153BBFA * ___Some_2;

public:
	inline static int32_t get_offset_of__Tag_0() { return static_cast<int32_t>(offsetof(Optional_1_t62F9A2FE6A114299975FAC930BF3AA1AB6C2C68F, ____Tag_0)); }
	inline int32_t get__Tag_0() const { return ____Tag_0; }
	inline int32_t* get_address_of__Tag_0() { return &____Tag_0; }
	inline void set__Tag_0(int32_t value)
	{
		____Tag_0 = value;
	}

	inline static int32_t get_offset_of_None_1() { return static_cast<int32_t>(offsetof(Optional_1_t62F9A2FE6A114299975FAC930BF3AA1AB6C2C68F, ___None_1)); }
	inline Unit_tEE307B4A0332306585E616404CFA9683BFCEFA8B  get_None_1() const { return ___None_1; }
	inline Unit_tEE307B4A0332306585E616404CFA9683BFCEFA8B * get_address_of_None_1() { return &___None_1; }
	inline void set_None_1(Unit_tEE307B4A0332306585E616404CFA9683BFCEFA8B  value)
	{
		___None_1 = value;
	}

	inline static int32_t get_offset_of_Some_2() { return static_cast<int32_t>(offsetof(Optional_1_t62F9A2FE6A114299975FAC930BF3AA1AB6C2C68F, ___Some_2)); }
	inline CameraParameters_t76FA28EFD269E4ADF063EB2FFA8A3DC01153BBFA * get_Some_2() const { return ___Some_2; }
	inline CameraParameters_t76FA28EFD269E4ADF063EB2FFA8A3DC01153BBFA ** get_address_of_Some_2() { return &___Some_2; }
	inline void set_Some_2(CameraParameters_t76FA28EFD269E4ADF063EB2FFA8A3DC01153BBFA * value)
	{
		___Some_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Some_2), (void*)value);
	}
};


// easyar.CameraDevice
struct CameraDevice_tC3CECA485A6FA987D93FB58151FC06EE0E4D8321  : public RefBase_t89BAC9C1493EC25E53A2476EFC3FBD0078383CA0
{
public:

public:
};


// easyar.CameraParameters
struct CameraParameters_t76FA28EFD269E4ADF063EB2FFA8A3DC01153BBFA  : public RefBase_t89BAC9C1493EC25E53A2476EFC3FBD0078383CA0
{
public:

public:
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A 
{
public:
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;

public:
	inline static int32_t get_offset_of_m_Mode_0() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_Mode_0)); }
	inline int32_t get_m_Mode_0() const { return ___m_Mode_0; }
	inline int32_t* get_address_of_m_Mode_0() { return &___m_Mode_0; }
	inline void set_m_Mode_0(int32_t value)
	{
		___m_Mode_0 = value;
	}

	inline static int32_t get_offset_of_m_WrapAround_1() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_WrapAround_1)); }
	inline bool get_m_WrapAround_1() const { return ___m_WrapAround_1; }
	inline bool* get_address_of_m_WrapAround_1() { return &___m_WrapAround_1; }
	inline void set_m_WrapAround_1(bool value)
	{
		___m_WrapAround_1 = value;
	}

	inline static int32_t get_offset_of_m_SelectOnUp_2() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnUp_2)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnUp_2() const { return ___m_SelectOnUp_2; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnUp_2() { return &___m_SelectOnUp_2; }
	inline void set_m_SelectOnUp_2(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnUp_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnUp_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnDown_3() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnDown_3)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnDown_3() const { return ___m_SelectOnDown_3; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnDown_3() { return &___m_SelectOnDown_3; }
	inline void set_m_SelectOnDown_3(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnDown_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnDown_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnLeft_4() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnLeft_4)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnLeft_4() const { return ___m_SelectOnLeft_4; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnLeft_4() { return &___m_SelectOnLeft_4; }
	inline void set_m_SelectOnLeft_4(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnLeft_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnLeft_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnRight_5() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnRight_5)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnRight_5() const { return ___m_SelectOnRight_5; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnRight_5() { return &___m_SelectOnRight_5; }
	inline void set_m_SelectOnRight_5(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnRight_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnRight_5), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;
};

// easyar.Target
struct Target_t88F948B9DEF619469285A1458CE49CE869CBEAD7  : public RefBase_t89BAC9C1493EC25E53A2476EFC3FBD0078383CA0
{
public:

public:
};


// System.Type
struct Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterNameIgnoreCase_2), (void*)value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Missing_3), (void*)value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// easyar.ImageTargetController/ImageFileSourceData
struct ImageFileSourceData_tCA1858F7E5439C496A73D580D43C3E16F78FE35F  : public RuntimeObject
{
public:
	// easyar.PathType easyar.ImageTargetController/ImageFileSourceData::PathType
	int32_t ___PathType_0;
	// System.String easyar.ImageTargetController/ImageFileSourceData::Path
	String_t* ___Path_1;
	// System.String easyar.ImageTargetController/ImageFileSourceData::Name
	String_t* ___Name_2;
	// System.Single easyar.ImageTargetController/ImageFileSourceData::Scale
	float ___Scale_3;

public:
	inline static int32_t get_offset_of_PathType_0() { return static_cast<int32_t>(offsetof(ImageFileSourceData_tCA1858F7E5439C496A73D580D43C3E16F78FE35F, ___PathType_0)); }
	inline int32_t get_PathType_0() const { return ___PathType_0; }
	inline int32_t* get_address_of_PathType_0() { return &___PathType_0; }
	inline void set_PathType_0(int32_t value)
	{
		___PathType_0 = value;
	}

	inline static int32_t get_offset_of_Path_1() { return static_cast<int32_t>(offsetof(ImageFileSourceData_tCA1858F7E5439C496A73D580D43C3E16F78FE35F, ___Path_1)); }
	inline String_t* get_Path_1() const { return ___Path_1; }
	inline String_t** get_address_of_Path_1() { return &___Path_1; }
	inline void set_Path_1(String_t* value)
	{
		___Path_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Path_1), (void*)value);
	}

	inline static int32_t get_offset_of_Name_2() { return static_cast<int32_t>(offsetof(ImageFileSourceData_tCA1858F7E5439C496A73D580D43C3E16F78FE35F, ___Name_2)); }
	inline String_t* get_Name_2() const { return ___Name_2; }
	inline String_t** get_address_of_Name_2() { return &___Name_2; }
	inline void set_Name_2(String_t* value)
	{
		___Name_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Name_2), (void*)value);
	}

	inline static int32_t get_offset_of_Scale_3() { return static_cast<int32_t>(offsetof(ImageFileSourceData_tCA1858F7E5439C496A73D580D43C3E16F78FE35F, ___Scale_3)); }
	inline float get_Scale_3() const { return ___Scale_3; }
	inline float* get_address_of_Scale_3() { return &___Scale_3; }
	inline void set_Scale_3(float value)
	{
		___Scale_3 = value;
	}
};


// System.Action`2<easyar.Target,System.Boolean>
struct Action_2_tFE34E0ECF3448AAF964BE269E354A55B12FF498B  : public MulticastDelegate_t
{
public:

public:
};


// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// easyar.ImageTarget
struct ImageTarget_tA8C5FC0A5A35FC9E978EA583695F80FA45E66F70  : public Target_t88F948B9DEF619469285A1458CE49CE869CBEAD7
{
public:

public:
};


// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// easyar.ARSession
struct ARSession_tD6A86CCAD93871B995E4B9FFAC634BBC5642CCAD  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// easyar.ARSession/ARCenterMode easyar.ARSession::CenterMode
	int32_t ___CenterMode_4;
	// easyar.TargetController easyar.ARSession::CenterTarget
	TargetController_t063F5455F413C882C59737867A3E4D8B560C1B0A * ___CenterTarget_5;
	// easyar.WorldRootController easyar.ARSession::WorldRootController
	WorldRootController_tC93DBC6FF87FCE21FEB5BB1D25BB5428DE303BAB * ___WorldRootController_6;
	// easyar.ARSession/ARHorizontalFlipMode easyar.ARSession::HorizontalFlipNormal
	int32_t ___HorizontalFlipNormal_7;
	// easyar.ARSession/ARHorizontalFlipMode easyar.ARSession::HorizontalFlipFront
	int32_t ___HorizontalFlipFront_8;
	// easyar.ARAssembly/AssembleMode easyar.ARSession::AssembleMode
	int32_t ___AssembleMode_9;
	// easyar.ARAssembly easyar.ARSession::Assembly
	ARAssembly_tB54D4BCB47D72BB6CCA734040AE868B90AF02784 * ___Assembly_10;
	// easyar.WorldRootController easyar.ARSession::previousWorldRootController
	WorldRootController_tC93DBC6FF87FCE21FEB5BB1D25BB5428DE303BAB * ___previousWorldRootController_11;
	// System.Int32 easyar.ARSession::frameIndex
	int32_t ___frameIndex_12;
	// System.Collections.Generic.KeyValuePair`2<System.Boolean,System.Boolean> easyar.ARSession::frameStatus
	KeyValuePair_2_t19F0CDC1FC70851649B03EDD70BD79E548971623  ___frameStatus_13;
	// easyar.ARSession/FrameChangeAction easyar.ARSession::FrameChange
	FrameChangeAction_t9B7BC7FA8D2A133BB06E4605E20837F37914249D * ___FrameChange_14;
	// System.Action`1<easyar.OutputFrame> easyar.ARSession::FrameUpdate
	Action_1_t7F90EAB6739020BAAD99CDC2A12F392423CAB924 * ___FrameUpdate_15;
	// System.Action`1<easyar.WorldRootController> easyar.ARSession::WorldRootChanged
	Action_1_t14415D654CABC2CEA6408DEA253DB20FE9B60E10 * ___WorldRootChanged_16;
	// easyar.Optional`1<easyar.CameraParameters> easyar.ARSession::<FrameCameraParameters>k__BackingField
	Optional_1_t62F9A2FE6A114299975FAC930BF3AA1AB6C2C68F  ___U3CFrameCameraParametersU3Ek__BackingField_17;

public:
	inline static int32_t get_offset_of_CenterMode_4() { return static_cast<int32_t>(offsetof(ARSession_tD6A86CCAD93871B995E4B9FFAC634BBC5642CCAD, ___CenterMode_4)); }
	inline int32_t get_CenterMode_4() const { return ___CenterMode_4; }
	inline int32_t* get_address_of_CenterMode_4() { return &___CenterMode_4; }
	inline void set_CenterMode_4(int32_t value)
	{
		___CenterMode_4 = value;
	}

	inline static int32_t get_offset_of_CenterTarget_5() { return static_cast<int32_t>(offsetof(ARSession_tD6A86CCAD93871B995E4B9FFAC634BBC5642CCAD, ___CenterTarget_5)); }
	inline TargetController_t063F5455F413C882C59737867A3E4D8B560C1B0A * get_CenterTarget_5() const { return ___CenterTarget_5; }
	inline TargetController_t063F5455F413C882C59737867A3E4D8B560C1B0A ** get_address_of_CenterTarget_5() { return &___CenterTarget_5; }
	inline void set_CenterTarget_5(TargetController_t063F5455F413C882C59737867A3E4D8B560C1B0A * value)
	{
		___CenterTarget_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CenterTarget_5), (void*)value);
	}

	inline static int32_t get_offset_of_WorldRootController_6() { return static_cast<int32_t>(offsetof(ARSession_tD6A86CCAD93871B995E4B9FFAC634BBC5642CCAD, ___WorldRootController_6)); }
	inline WorldRootController_tC93DBC6FF87FCE21FEB5BB1D25BB5428DE303BAB * get_WorldRootController_6() const { return ___WorldRootController_6; }
	inline WorldRootController_tC93DBC6FF87FCE21FEB5BB1D25BB5428DE303BAB ** get_address_of_WorldRootController_6() { return &___WorldRootController_6; }
	inline void set_WorldRootController_6(WorldRootController_tC93DBC6FF87FCE21FEB5BB1D25BB5428DE303BAB * value)
	{
		___WorldRootController_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___WorldRootController_6), (void*)value);
	}

	inline static int32_t get_offset_of_HorizontalFlipNormal_7() { return static_cast<int32_t>(offsetof(ARSession_tD6A86CCAD93871B995E4B9FFAC634BBC5642CCAD, ___HorizontalFlipNormal_7)); }
	inline int32_t get_HorizontalFlipNormal_7() const { return ___HorizontalFlipNormal_7; }
	inline int32_t* get_address_of_HorizontalFlipNormal_7() { return &___HorizontalFlipNormal_7; }
	inline void set_HorizontalFlipNormal_7(int32_t value)
	{
		___HorizontalFlipNormal_7 = value;
	}

	inline static int32_t get_offset_of_HorizontalFlipFront_8() { return static_cast<int32_t>(offsetof(ARSession_tD6A86CCAD93871B995E4B9FFAC634BBC5642CCAD, ___HorizontalFlipFront_8)); }
	inline int32_t get_HorizontalFlipFront_8() const { return ___HorizontalFlipFront_8; }
	inline int32_t* get_address_of_HorizontalFlipFront_8() { return &___HorizontalFlipFront_8; }
	inline void set_HorizontalFlipFront_8(int32_t value)
	{
		___HorizontalFlipFront_8 = value;
	}

	inline static int32_t get_offset_of_AssembleMode_9() { return static_cast<int32_t>(offsetof(ARSession_tD6A86CCAD93871B995E4B9FFAC634BBC5642CCAD, ___AssembleMode_9)); }
	inline int32_t get_AssembleMode_9() const { return ___AssembleMode_9; }
	inline int32_t* get_address_of_AssembleMode_9() { return &___AssembleMode_9; }
	inline void set_AssembleMode_9(int32_t value)
	{
		___AssembleMode_9 = value;
	}

	inline static int32_t get_offset_of_Assembly_10() { return static_cast<int32_t>(offsetof(ARSession_tD6A86CCAD93871B995E4B9FFAC634BBC5642CCAD, ___Assembly_10)); }
	inline ARAssembly_tB54D4BCB47D72BB6CCA734040AE868B90AF02784 * get_Assembly_10() const { return ___Assembly_10; }
	inline ARAssembly_tB54D4BCB47D72BB6CCA734040AE868B90AF02784 ** get_address_of_Assembly_10() { return &___Assembly_10; }
	inline void set_Assembly_10(ARAssembly_tB54D4BCB47D72BB6CCA734040AE868B90AF02784 * value)
	{
		___Assembly_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Assembly_10), (void*)value);
	}

	inline static int32_t get_offset_of_previousWorldRootController_11() { return static_cast<int32_t>(offsetof(ARSession_tD6A86CCAD93871B995E4B9FFAC634BBC5642CCAD, ___previousWorldRootController_11)); }
	inline WorldRootController_tC93DBC6FF87FCE21FEB5BB1D25BB5428DE303BAB * get_previousWorldRootController_11() const { return ___previousWorldRootController_11; }
	inline WorldRootController_tC93DBC6FF87FCE21FEB5BB1D25BB5428DE303BAB ** get_address_of_previousWorldRootController_11() { return &___previousWorldRootController_11; }
	inline void set_previousWorldRootController_11(WorldRootController_tC93DBC6FF87FCE21FEB5BB1D25BB5428DE303BAB * value)
	{
		___previousWorldRootController_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___previousWorldRootController_11), (void*)value);
	}

	inline static int32_t get_offset_of_frameIndex_12() { return static_cast<int32_t>(offsetof(ARSession_tD6A86CCAD93871B995E4B9FFAC634BBC5642CCAD, ___frameIndex_12)); }
	inline int32_t get_frameIndex_12() const { return ___frameIndex_12; }
	inline int32_t* get_address_of_frameIndex_12() { return &___frameIndex_12; }
	inline void set_frameIndex_12(int32_t value)
	{
		___frameIndex_12 = value;
	}

	inline static int32_t get_offset_of_frameStatus_13() { return static_cast<int32_t>(offsetof(ARSession_tD6A86CCAD93871B995E4B9FFAC634BBC5642CCAD, ___frameStatus_13)); }
	inline KeyValuePair_2_t19F0CDC1FC70851649B03EDD70BD79E548971623  get_frameStatus_13() const { return ___frameStatus_13; }
	inline KeyValuePair_2_t19F0CDC1FC70851649B03EDD70BD79E548971623 * get_address_of_frameStatus_13() { return &___frameStatus_13; }
	inline void set_frameStatus_13(KeyValuePair_2_t19F0CDC1FC70851649B03EDD70BD79E548971623  value)
	{
		___frameStatus_13 = value;
	}

	inline static int32_t get_offset_of_FrameChange_14() { return static_cast<int32_t>(offsetof(ARSession_tD6A86CCAD93871B995E4B9FFAC634BBC5642CCAD, ___FrameChange_14)); }
	inline FrameChangeAction_t9B7BC7FA8D2A133BB06E4605E20837F37914249D * get_FrameChange_14() const { return ___FrameChange_14; }
	inline FrameChangeAction_t9B7BC7FA8D2A133BB06E4605E20837F37914249D ** get_address_of_FrameChange_14() { return &___FrameChange_14; }
	inline void set_FrameChange_14(FrameChangeAction_t9B7BC7FA8D2A133BB06E4605E20837F37914249D * value)
	{
		___FrameChange_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FrameChange_14), (void*)value);
	}

	inline static int32_t get_offset_of_FrameUpdate_15() { return static_cast<int32_t>(offsetof(ARSession_tD6A86CCAD93871B995E4B9FFAC634BBC5642CCAD, ___FrameUpdate_15)); }
	inline Action_1_t7F90EAB6739020BAAD99CDC2A12F392423CAB924 * get_FrameUpdate_15() const { return ___FrameUpdate_15; }
	inline Action_1_t7F90EAB6739020BAAD99CDC2A12F392423CAB924 ** get_address_of_FrameUpdate_15() { return &___FrameUpdate_15; }
	inline void set_FrameUpdate_15(Action_1_t7F90EAB6739020BAAD99CDC2A12F392423CAB924 * value)
	{
		___FrameUpdate_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FrameUpdate_15), (void*)value);
	}

	inline static int32_t get_offset_of_WorldRootChanged_16() { return static_cast<int32_t>(offsetof(ARSession_tD6A86CCAD93871B995E4B9FFAC634BBC5642CCAD, ___WorldRootChanged_16)); }
	inline Action_1_t14415D654CABC2CEA6408DEA253DB20FE9B60E10 * get_WorldRootChanged_16() const { return ___WorldRootChanged_16; }
	inline Action_1_t14415D654CABC2CEA6408DEA253DB20FE9B60E10 ** get_address_of_WorldRootChanged_16() { return &___WorldRootChanged_16; }
	inline void set_WorldRootChanged_16(Action_1_t14415D654CABC2CEA6408DEA253DB20FE9B60E10 * value)
	{
		___WorldRootChanged_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___WorldRootChanged_16), (void*)value);
	}

	inline static int32_t get_offset_of_U3CFrameCameraParametersU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(ARSession_tD6A86CCAD93871B995E4B9FFAC634BBC5642CCAD, ___U3CFrameCameraParametersU3Ek__BackingField_17)); }
	inline Optional_1_t62F9A2FE6A114299975FAC930BF3AA1AB6C2C68F  get_U3CFrameCameraParametersU3Ek__BackingField_17() const { return ___U3CFrameCameraParametersU3Ek__BackingField_17; }
	inline Optional_1_t62F9A2FE6A114299975FAC930BF3AA1AB6C2C68F * get_address_of_U3CFrameCameraParametersU3Ek__BackingField_17() { return &___U3CFrameCameraParametersU3Ek__BackingField_17; }
	inline void set_U3CFrameCameraParametersU3Ek__BackingField_17(Optional_1_t62F9A2FE6A114299975FAC930BF3AA1AB6C2C68F  value)
	{
		___U3CFrameCameraParametersU3Ek__BackingField_17 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CFrameCameraParametersU3Ek__BackingField_17))->___Some_2), (void*)NULL);
	}
};


// easyar.FrameFilter
struct FrameFilter_t44A639F4549C4277E979E38302B9119DF58018B4  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Boolean easyar.FrameFilter::horizontalFlip
	bool ___horizontalFlip_4;

public:
	inline static int32_t get_offset_of_horizontalFlip_4() { return static_cast<int32_t>(offsetof(FrameFilter_t44A639F4549C4277E979E38302B9119DF58018B4, ___horizontalFlip_4)); }
	inline bool get_horizontalFlip_4() const { return ___horizontalFlip_4; }
	inline bool* get_address_of_horizontalFlip_4() { return &___horizontalFlip_4; }
	inline void set_horizontalFlip_4(bool value)
	{
		___horizontalFlip_4 = value;
	}
};


// easyar.FrameSource
struct FrameSource_tB97FDAE114BD31A9046A42B8C91BF3745017E07E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// easyar.InputFrameSink easyar.FrameSource::sink
	InputFrameSink_t8612C49D65B205A585628C731E49E3117FC89CEB * ___sink_4;
	// easyar.ARSession easyar.FrameSource::arSession
	ARSession_tD6A86CCAD93871B995E4B9FFAC634BBC5642CCAD * ___arSession_5;

public:
	inline static int32_t get_offset_of_sink_4() { return static_cast<int32_t>(offsetof(FrameSource_tB97FDAE114BD31A9046A42B8C91BF3745017E07E, ___sink_4)); }
	inline InputFrameSink_t8612C49D65B205A585628C731E49E3117FC89CEB * get_sink_4() const { return ___sink_4; }
	inline InputFrameSink_t8612C49D65B205A585628C731E49E3117FC89CEB ** get_address_of_sink_4() { return &___sink_4; }
	inline void set_sink_4(InputFrameSink_t8612C49D65B205A585628C731E49E3117FC89CEB * value)
	{
		___sink_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sink_4), (void*)value);
	}

	inline static int32_t get_offset_of_arSession_5() { return static_cast<int32_t>(offsetof(FrameSource_tB97FDAE114BD31A9046A42B8C91BF3745017E07E, ___arSession_5)); }
	inline ARSession_tD6A86CCAD93871B995E4B9FFAC634BBC5642CCAD * get_arSession_5() const { return ___arSession_5; }
	inline ARSession_tD6A86CCAD93871B995E4B9FFAC634BBC5642CCAD ** get_address_of_arSession_5() { return &___arSession_5; }
	inline void set_arSession_5(ARSession_tD6A86CCAD93871B995E4B9FFAC634BBC5642CCAD * value)
	{
		___arSession_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___arSession_5), (void*)value);
	}
};


// ImageTracking_ImageTarget.ImageTrackingSample
struct ImageTrackingSample_tD24CBC2F8D4E9C4B5701BF28F183F65B77E4371F  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// easyar.ARSession ImageTracking_ImageTarget.ImageTrackingSample::Session
	ARSession_tD6A86CCAD93871B995E4B9FFAC634BBC5642CCAD * ___Session_4;
	// UnityEngine.UI.Text ImageTracking_ImageTarget.ImageTrackingSample::Status
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___Status_5;
	// UnityEngine.UI.Button ImageTracking_ImageTarget.ImageTrackingSample::BackButton
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ___BackButton_6;
	// System.Collections.Generic.Dictionary`2<easyar.ImageTargetController,System.Boolean> ImageTracking_ImageTarget.ImageTrackingSample::imageTargetControllers
	Dictionary_2_t33723D7778E13B98CD0BE75946A95FFAD8CC07E5 * ___imageTargetControllers_7;
	// easyar.ImageTargetController ImageTracking_ImageTarget.ImageTrackingSample::controllerNamecard
	ImageTargetController_tE114A6E6910AF4B6A6206889F52DD2C4D15F094A * ___controllerNamecard_8;
	// easyar.ImageTargetController ImageTracking_ImageTarget.ImageTrackingSample::controllerIdback
	ImageTargetController_tE114A6E6910AF4B6A6206889F52DD2C4D15F094A * ___controllerIdback_9;
	// easyar.ImageTrackerFrameFilter ImageTracking_ImageTarget.ImageTrackingSample::imageTracker
	ImageTrackerFrameFilter_t38832986899AF907CF9BB3DED8A38F1EB6DC38BB * ___imageTracker_10;
	// easyar.VideoCameraDevice ImageTracking_ImageTarget.ImageTrackingSample::cameraDevice
	VideoCameraDevice_tE030FD2425274ADA263F159372642355867E6018 * ___cameraDevice_11;

public:
	inline static int32_t get_offset_of_Session_4() { return static_cast<int32_t>(offsetof(ImageTrackingSample_tD24CBC2F8D4E9C4B5701BF28F183F65B77E4371F, ___Session_4)); }
	inline ARSession_tD6A86CCAD93871B995E4B9FFAC634BBC5642CCAD * get_Session_4() const { return ___Session_4; }
	inline ARSession_tD6A86CCAD93871B995E4B9FFAC634BBC5642CCAD ** get_address_of_Session_4() { return &___Session_4; }
	inline void set_Session_4(ARSession_tD6A86CCAD93871B995E4B9FFAC634BBC5642CCAD * value)
	{
		___Session_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Session_4), (void*)value);
	}

	inline static int32_t get_offset_of_Status_5() { return static_cast<int32_t>(offsetof(ImageTrackingSample_tD24CBC2F8D4E9C4B5701BF28F183F65B77E4371F, ___Status_5)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_Status_5() const { return ___Status_5; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_Status_5() { return &___Status_5; }
	inline void set_Status_5(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___Status_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Status_5), (void*)value);
	}

	inline static int32_t get_offset_of_BackButton_6() { return static_cast<int32_t>(offsetof(ImageTrackingSample_tD24CBC2F8D4E9C4B5701BF28F183F65B77E4371F, ___BackButton_6)); }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * get_BackButton_6() const { return ___BackButton_6; }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D ** get_address_of_BackButton_6() { return &___BackButton_6; }
	inline void set_BackButton_6(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * value)
	{
		___BackButton_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BackButton_6), (void*)value);
	}

	inline static int32_t get_offset_of_imageTargetControllers_7() { return static_cast<int32_t>(offsetof(ImageTrackingSample_tD24CBC2F8D4E9C4B5701BF28F183F65B77E4371F, ___imageTargetControllers_7)); }
	inline Dictionary_2_t33723D7778E13B98CD0BE75946A95FFAD8CC07E5 * get_imageTargetControllers_7() const { return ___imageTargetControllers_7; }
	inline Dictionary_2_t33723D7778E13B98CD0BE75946A95FFAD8CC07E5 ** get_address_of_imageTargetControllers_7() { return &___imageTargetControllers_7; }
	inline void set_imageTargetControllers_7(Dictionary_2_t33723D7778E13B98CD0BE75946A95FFAD8CC07E5 * value)
	{
		___imageTargetControllers_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___imageTargetControllers_7), (void*)value);
	}

	inline static int32_t get_offset_of_controllerNamecard_8() { return static_cast<int32_t>(offsetof(ImageTrackingSample_tD24CBC2F8D4E9C4B5701BF28F183F65B77E4371F, ___controllerNamecard_8)); }
	inline ImageTargetController_tE114A6E6910AF4B6A6206889F52DD2C4D15F094A * get_controllerNamecard_8() const { return ___controllerNamecard_8; }
	inline ImageTargetController_tE114A6E6910AF4B6A6206889F52DD2C4D15F094A ** get_address_of_controllerNamecard_8() { return &___controllerNamecard_8; }
	inline void set_controllerNamecard_8(ImageTargetController_tE114A6E6910AF4B6A6206889F52DD2C4D15F094A * value)
	{
		___controllerNamecard_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___controllerNamecard_8), (void*)value);
	}

	inline static int32_t get_offset_of_controllerIdback_9() { return static_cast<int32_t>(offsetof(ImageTrackingSample_tD24CBC2F8D4E9C4B5701BF28F183F65B77E4371F, ___controllerIdback_9)); }
	inline ImageTargetController_tE114A6E6910AF4B6A6206889F52DD2C4D15F094A * get_controllerIdback_9() const { return ___controllerIdback_9; }
	inline ImageTargetController_tE114A6E6910AF4B6A6206889F52DD2C4D15F094A ** get_address_of_controllerIdback_9() { return &___controllerIdback_9; }
	inline void set_controllerIdback_9(ImageTargetController_tE114A6E6910AF4B6A6206889F52DD2C4D15F094A * value)
	{
		___controllerIdback_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___controllerIdback_9), (void*)value);
	}

	inline static int32_t get_offset_of_imageTracker_10() { return static_cast<int32_t>(offsetof(ImageTrackingSample_tD24CBC2F8D4E9C4B5701BF28F183F65B77E4371F, ___imageTracker_10)); }
	inline ImageTrackerFrameFilter_t38832986899AF907CF9BB3DED8A38F1EB6DC38BB * get_imageTracker_10() const { return ___imageTracker_10; }
	inline ImageTrackerFrameFilter_t38832986899AF907CF9BB3DED8A38F1EB6DC38BB ** get_address_of_imageTracker_10() { return &___imageTracker_10; }
	inline void set_imageTracker_10(ImageTrackerFrameFilter_t38832986899AF907CF9BB3DED8A38F1EB6DC38BB * value)
	{
		___imageTracker_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___imageTracker_10), (void*)value);
	}

	inline static int32_t get_offset_of_cameraDevice_11() { return static_cast<int32_t>(offsetof(ImageTrackingSample_tD24CBC2F8D4E9C4B5701BF28F183F65B77E4371F, ___cameraDevice_11)); }
	inline VideoCameraDevice_tE030FD2425274ADA263F159372642355867E6018 * get_cameraDevice_11() const { return ___cameraDevice_11; }
	inline VideoCameraDevice_tE030FD2425274ADA263F159372642355867E6018 ** get_address_of_cameraDevice_11() { return &___cameraDevice_11; }
	inline void set_cameraDevice_11(VideoCameraDevice_tE030FD2425274ADA263F159372642355867E6018 * value)
	{
		___cameraDevice_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cameraDevice_11), (void*)value);
	}
};


// easyar.TargetController
struct TargetController_t063F5455F413C882C59737867A3E4D8B560C1B0A  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// easyar.TargetController/ActiveControlStrategy easyar.TargetController::ActiveControl
	int32_t ___ActiveControl_4;
	// System.Boolean easyar.TargetController::HorizontalFlip
	bool ___HorizontalFlip_5;
	// System.Boolean easyar.TargetController::firstFound
	bool ___firstFound_6;
	// System.Action easyar.TargetController::TargetFound
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___TargetFound_7;
	// System.Action easyar.TargetController::TargetLost
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___TargetLost_8;
	// System.Boolean easyar.TargetController::<IsTracked>k__BackingField
	bool ___U3CIsTrackedU3Ek__BackingField_9;
	// System.Boolean easyar.TargetController::<IsLoaded>k__BackingField
	bool ___U3CIsLoadedU3Ek__BackingField_10;

public:
	inline static int32_t get_offset_of_ActiveControl_4() { return static_cast<int32_t>(offsetof(TargetController_t063F5455F413C882C59737867A3E4D8B560C1B0A, ___ActiveControl_4)); }
	inline int32_t get_ActiveControl_4() const { return ___ActiveControl_4; }
	inline int32_t* get_address_of_ActiveControl_4() { return &___ActiveControl_4; }
	inline void set_ActiveControl_4(int32_t value)
	{
		___ActiveControl_4 = value;
	}

	inline static int32_t get_offset_of_HorizontalFlip_5() { return static_cast<int32_t>(offsetof(TargetController_t063F5455F413C882C59737867A3E4D8B560C1B0A, ___HorizontalFlip_5)); }
	inline bool get_HorizontalFlip_5() const { return ___HorizontalFlip_5; }
	inline bool* get_address_of_HorizontalFlip_5() { return &___HorizontalFlip_5; }
	inline void set_HorizontalFlip_5(bool value)
	{
		___HorizontalFlip_5 = value;
	}

	inline static int32_t get_offset_of_firstFound_6() { return static_cast<int32_t>(offsetof(TargetController_t063F5455F413C882C59737867A3E4D8B560C1B0A, ___firstFound_6)); }
	inline bool get_firstFound_6() const { return ___firstFound_6; }
	inline bool* get_address_of_firstFound_6() { return &___firstFound_6; }
	inline void set_firstFound_6(bool value)
	{
		___firstFound_6 = value;
	}

	inline static int32_t get_offset_of_TargetFound_7() { return static_cast<int32_t>(offsetof(TargetController_t063F5455F413C882C59737867A3E4D8B560C1B0A, ___TargetFound_7)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_TargetFound_7() const { return ___TargetFound_7; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_TargetFound_7() { return &___TargetFound_7; }
	inline void set_TargetFound_7(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___TargetFound_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TargetFound_7), (void*)value);
	}

	inline static int32_t get_offset_of_TargetLost_8() { return static_cast<int32_t>(offsetof(TargetController_t063F5455F413C882C59737867A3E4D8B560C1B0A, ___TargetLost_8)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_TargetLost_8() const { return ___TargetLost_8; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_TargetLost_8() { return &___TargetLost_8; }
	inline void set_TargetLost_8(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___TargetLost_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TargetLost_8), (void*)value);
	}

	inline static int32_t get_offset_of_U3CIsTrackedU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(TargetController_t063F5455F413C882C59737867A3E4D8B560C1B0A, ___U3CIsTrackedU3Ek__BackingField_9)); }
	inline bool get_U3CIsTrackedU3Ek__BackingField_9() const { return ___U3CIsTrackedU3Ek__BackingField_9; }
	inline bool* get_address_of_U3CIsTrackedU3Ek__BackingField_9() { return &___U3CIsTrackedU3Ek__BackingField_9; }
	inline void set_U3CIsTrackedU3Ek__BackingField_9(bool value)
	{
		___U3CIsTrackedU3Ek__BackingField_9 = value;
	}

	inline static int32_t get_offset_of_U3CIsLoadedU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(TargetController_t063F5455F413C882C59737867A3E4D8B560C1B0A, ___U3CIsLoadedU3Ek__BackingField_10)); }
	inline bool get_U3CIsLoadedU3Ek__BackingField_10() const { return ___U3CIsLoadedU3Ek__BackingField_10; }
	inline bool* get_address_of_U3CIsLoadedU3Ek__BackingField_10() { return &___U3CIsLoadedU3Ek__BackingField_10; }
	inline void set_U3CIsLoadedU3Ek__BackingField_10(bool value)
	{
		___U3CIsLoadedU3Ek__BackingField_10 = value;
	}
};


// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// easyar.CameraSource
struct CameraSource_t6CD459E4D2844AC4385A326556408EA6B8F359D9  : public FrameSource_tB97FDAE114BD31A9046A42B8C91BF3745017E07E
{
public:
	// System.Int32 easyar.CameraSource::bufferCapacity
	int32_t ___bufferCapacity_6;

public:
	inline static int32_t get_offset_of_bufferCapacity_6() { return static_cast<int32_t>(offsetof(CameraSource_t6CD459E4D2844AC4385A326556408EA6B8F359D9, ___bufferCapacity_6)); }
	inline int32_t get_bufferCapacity_6() const { return ___bufferCapacity_6; }
	inline int32_t* get_address_of_bufferCapacity_6() { return &___bufferCapacity_6; }
	inline void set_bufferCapacity_6(int32_t value)
	{
		___bufferCapacity_6 = value;
	}
};


// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Material_6)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Material_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Color_7)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_SkipLayoutUpdate_8() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipLayoutUpdate_8)); }
	inline bool get_m_SkipLayoutUpdate_8() const { return ___m_SkipLayoutUpdate_8; }
	inline bool* get_address_of_m_SkipLayoutUpdate_8() { return &___m_SkipLayoutUpdate_8; }
	inline void set_m_SkipLayoutUpdate_8(bool value)
	{
		___m_SkipLayoutUpdate_8 = value;
	}

	inline static int32_t get_offset_of_m_SkipMaterialUpdate_9() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipMaterialUpdate_9)); }
	inline bool get_m_SkipMaterialUpdate_9() const { return ___m_SkipMaterialUpdate_9; }
	inline bool* get_address_of_m_SkipMaterialUpdate_9() { return &___m_SkipMaterialUpdate_9; }
	inline void set_m_SkipMaterialUpdate_9(bool value)
	{
		___m_SkipMaterialUpdate_9 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_10() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastTarget_10)); }
	inline bool get_m_RaycastTarget_10() const { return ___m_RaycastTarget_10; }
	inline bool* get_address_of_m_RaycastTarget_10() { return &___m_RaycastTarget_10; }
	inline void set_m_RaycastTarget_10(bool value)
	{
		___m_RaycastTarget_10 = value;
	}

	inline static int32_t get_offset_of_m_RaycastPadding_11() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastPadding_11)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_m_RaycastPadding_11() const { return ___m_RaycastPadding_11; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_m_RaycastPadding_11() { return &___m_RaycastPadding_11; }
	inline void set_m_RaycastPadding_11(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___m_RaycastPadding_11 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_12() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RectTransform_12)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_RectTransform_12() const { return ___m_RectTransform_12; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_RectTransform_12() { return &___m_RectTransform_12; }
	inline void set_m_RectTransform_12(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_RectTransform_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransform_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_13() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CanvasRenderer_13)); }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * get_m_CanvasRenderer_13() const { return ___m_CanvasRenderer_13; }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E ** get_address_of_m_CanvasRenderer_13() { return &___m_CanvasRenderer_13; }
	inline void set_m_CanvasRenderer_13(CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * value)
	{
		___m_CanvasRenderer_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasRenderer_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_Canvas_14() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Canvas_14)); }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * get_m_Canvas_14() const { return ___m_Canvas_14; }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA ** get_address_of_m_Canvas_14() { return &___m_Canvas_14; }
	inline void set_m_Canvas_14(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * value)
	{
		___m_Canvas_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Canvas_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_15() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_VertsDirty_15)); }
	inline bool get_m_VertsDirty_15() const { return ___m_VertsDirty_15; }
	inline bool* get_address_of_m_VertsDirty_15() { return &___m_VertsDirty_15; }
	inline void set_m_VertsDirty_15(bool value)
	{
		___m_VertsDirty_15 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_16() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_MaterialDirty_16)); }
	inline bool get_m_MaterialDirty_16() const { return ___m_MaterialDirty_16; }
	inline bool* get_address_of_m_MaterialDirty_16() { return &___m_MaterialDirty_16; }
	inline void set_m_MaterialDirty_16(bool value)
	{
		___m_MaterialDirty_16 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_17() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyLayoutCallback_17)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyLayoutCallback_17() const { return ___m_OnDirtyLayoutCallback_17; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyLayoutCallback_17() { return &___m_OnDirtyLayoutCallback_17; }
	inline void set_m_OnDirtyLayoutCallback_17(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyLayoutCallback_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyLayoutCallback_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_18() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyVertsCallback_18)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyVertsCallback_18() const { return ___m_OnDirtyVertsCallback_18; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyVertsCallback_18() { return &___m_OnDirtyVertsCallback_18; }
	inline void set_m_OnDirtyVertsCallback_18(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyVertsCallback_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyVertsCallback_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_19() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyMaterialCallback_19)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyMaterialCallback_19() const { return ___m_OnDirtyMaterialCallback_19; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyMaterialCallback_19() { return &___m_OnDirtyMaterialCallback_19; }
	inline void set_m_OnDirtyMaterialCallback_19(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyMaterialCallback_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyMaterialCallback_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedMesh_22() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedMesh_22)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_m_CachedMesh_22() const { return ___m_CachedMesh_22; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_m_CachedMesh_22() { return &___m_CachedMesh_22; }
	inline void set_m_CachedMesh_22(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___m_CachedMesh_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedMesh_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedUvs_23() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedUvs_23)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_m_CachedUvs_23() const { return ___m_CachedUvs_23; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_m_CachedUvs_23() { return &___m_CachedUvs_23; }
	inline void set_m_CachedUvs_23(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___m_CachedUvs_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedUvs_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_24() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_ColorTweenRunner_24)); }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * get_m_ColorTweenRunner_24() const { return ___m_ColorTweenRunner_24; }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 ** get_address_of_m_ColorTweenRunner_24() { return &___m_ColorTweenRunner_24; }
	inline void set_m_ColorTweenRunner_24(TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * value)
	{
		___m_ColorTweenRunner_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ColorTweenRunner_24), (void*)value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_25(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_25 = value;
	}
};

struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * ___s_VertexHelper_21;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_DefaultUI_4)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultUI_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_WhiteTexture_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_Mesh_20() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_Mesh_20)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_s_Mesh_20() const { return ___s_Mesh_20; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_s_Mesh_20() { return &___s_Mesh_20; }
	inline void set_s_Mesh_20(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___s_Mesh_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Mesh_20), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_21() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_VertexHelper_21)); }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * get_s_VertexHelper_21() const { return ___s_VertexHelper_21; }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 ** get_address_of_s_VertexHelper_21() { return &___s_VertexHelper_21; }
	inline void set_s_VertexHelper_21(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * value)
	{
		___s_VertexHelper_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertexHelper_21), (void*)value);
	}
};


// easyar.ImageTargetController
struct ImageTargetController_tE114A6E6910AF4B6A6206889F52DD2C4D15F094A  : public TargetController_t063F5455F413C882C59737867A3E4D8B560C1B0A
{
public:
	// easyar.ImageTarget easyar.ImageTargetController::<Target>k__BackingField
	ImageTarget_tA8C5FC0A5A35FC9E978EA583695F80FA45E66F70 * ___U3CTargetU3Ek__BackingField_11;
	// easyar.ImageTargetController/DataSource easyar.ImageTargetController::SourceType
	int32_t ___SourceType_12;
	// easyar.ImageTargetController/ImageFileSourceData easyar.ImageTargetController::ImageFileSource
	ImageFileSourceData_tCA1858F7E5439C496A73D580D43C3E16F78FE35F * ___ImageFileSource_13;
	// easyar.ImageTargetController/TargetDataFileSourceData easyar.ImageTargetController::TargetDataFileSource
	TargetDataFileSourceData_tCF21B462E860A8A917747457703A162BC8A8BF8A * ___TargetDataFileSource_14;
	// easyar.ImageTarget easyar.ImageTargetController::TargetSource
	ImageTarget_tA8C5FC0A5A35FC9E978EA583695F80FA45E66F70 * ___TargetSource_15;
	// System.Boolean easyar.ImageTargetController::trackerHasSet
	bool ___trackerHasSet_16;
	// easyar.ImageTrackerFrameFilter easyar.ImageTargetController::tracker
	ImageTrackerFrameFilter_t38832986899AF907CF9BB3DED8A38F1EB6DC38BB * ___tracker_17;
	// easyar.ImageTrackerFrameFilter easyar.ImageTargetController::loader
	ImageTrackerFrameFilter_t38832986899AF907CF9BB3DED8A38F1EB6DC38BB * ___loader_18;
	// System.Single easyar.ImageTargetController::scale
	float ___scale_19;
	// System.Single easyar.ImageTargetController::scaleX
	float ___scaleX_20;
	// System.Boolean easyar.ImageTargetController::preHFlip
	bool ___preHFlip_21;
	// System.Action easyar.ImageTargetController::TargetAvailable
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___TargetAvailable_22;
	// System.Action`2<easyar.Target,System.Boolean> easyar.ImageTargetController::TargetLoad
	Action_2_tFE34E0ECF3448AAF964BE269E354A55B12FF498B * ___TargetLoad_23;
	// System.Action`2<easyar.Target,System.Boolean> easyar.ImageTargetController::TargetUnload
	Action_2_tFE34E0ECF3448AAF964BE269E354A55B12FF498B * ___TargetUnload_24;

public:
	inline static int32_t get_offset_of_U3CTargetU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(ImageTargetController_tE114A6E6910AF4B6A6206889F52DD2C4D15F094A, ___U3CTargetU3Ek__BackingField_11)); }
	inline ImageTarget_tA8C5FC0A5A35FC9E978EA583695F80FA45E66F70 * get_U3CTargetU3Ek__BackingField_11() const { return ___U3CTargetU3Ek__BackingField_11; }
	inline ImageTarget_tA8C5FC0A5A35FC9E978EA583695F80FA45E66F70 ** get_address_of_U3CTargetU3Ek__BackingField_11() { return &___U3CTargetU3Ek__BackingField_11; }
	inline void set_U3CTargetU3Ek__BackingField_11(ImageTarget_tA8C5FC0A5A35FC9E978EA583695F80FA45E66F70 * value)
	{
		___U3CTargetU3Ek__BackingField_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CTargetU3Ek__BackingField_11), (void*)value);
	}

	inline static int32_t get_offset_of_SourceType_12() { return static_cast<int32_t>(offsetof(ImageTargetController_tE114A6E6910AF4B6A6206889F52DD2C4D15F094A, ___SourceType_12)); }
	inline int32_t get_SourceType_12() const { return ___SourceType_12; }
	inline int32_t* get_address_of_SourceType_12() { return &___SourceType_12; }
	inline void set_SourceType_12(int32_t value)
	{
		___SourceType_12 = value;
	}

	inline static int32_t get_offset_of_ImageFileSource_13() { return static_cast<int32_t>(offsetof(ImageTargetController_tE114A6E6910AF4B6A6206889F52DD2C4D15F094A, ___ImageFileSource_13)); }
	inline ImageFileSourceData_tCA1858F7E5439C496A73D580D43C3E16F78FE35F * get_ImageFileSource_13() const { return ___ImageFileSource_13; }
	inline ImageFileSourceData_tCA1858F7E5439C496A73D580D43C3E16F78FE35F ** get_address_of_ImageFileSource_13() { return &___ImageFileSource_13; }
	inline void set_ImageFileSource_13(ImageFileSourceData_tCA1858F7E5439C496A73D580D43C3E16F78FE35F * value)
	{
		___ImageFileSource_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ImageFileSource_13), (void*)value);
	}

	inline static int32_t get_offset_of_TargetDataFileSource_14() { return static_cast<int32_t>(offsetof(ImageTargetController_tE114A6E6910AF4B6A6206889F52DD2C4D15F094A, ___TargetDataFileSource_14)); }
	inline TargetDataFileSourceData_tCF21B462E860A8A917747457703A162BC8A8BF8A * get_TargetDataFileSource_14() const { return ___TargetDataFileSource_14; }
	inline TargetDataFileSourceData_tCF21B462E860A8A917747457703A162BC8A8BF8A ** get_address_of_TargetDataFileSource_14() { return &___TargetDataFileSource_14; }
	inline void set_TargetDataFileSource_14(TargetDataFileSourceData_tCF21B462E860A8A917747457703A162BC8A8BF8A * value)
	{
		___TargetDataFileSource_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TargetDataFileSource_14), (void*)value);
	}

	inline static int32_t get_offset_of_TargetSource_15() { return static_cast<int32_t>(offsetof(ImageTargetController_tE114A6E6910AF4B6A6206889F52DD2C4D15F094A, ___TargetSource_15)); }
	inline ImageTarget_tA8C5FC0A5A35FC9E978EA583695F80FA45E66F70 * get_TargetSource_15() const { return ___TargetSource_15; }
	inline ImageTarget_tA8C5FC0A5A35FC9E978EA583695F80FA45E66F70 ** get_address_of_TargetSource_15() { return &___TargetSource_15; }
	inline void set_TargetSource_15(ImageTarget_tA8C5FC0A5A35FC9E978EA583695F80FA45E66F70 * value)
	{
		___TargetSource_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TargetSource_15), (void*)value);
	}

	inline static int32_t get_offset_of_trackerHasSet_16() { return static_cast<int32_t>(offsetof(ImageTargetController_tE114A6E6910AF4B6A6206889F52DD2C4D15F094A, ___trackerHasSet_16)); }
	inline bool get_trackerHasSet_16() const { return ___trackerHasSet_16; }
	inline bool* get_address_of_trackerHasSet_16() { return &___trackerHasSet_16; }
	inline void set_trackerHasSet_16(bool value)
	{
		___trackerHasSet_16 = value;
	}

	inline static int32_t get_offset_of_tracker_17() { return static_cast<int32_t>(offsetof(ImageTargetController_tE114A6E6910AF4B6A6206889F52DD2C4D15F094A, ___tracker_17)); }
	inline ImageTrackerFrameFilter_t38832986899AF907CF9BB3DED8A38F1EB6DC38BB * get_tracker_17() const { return ___tracker_17; }
	inline ImageTrackerFrameFilter_t38832986899AF907CF9BB3DED8A38F1EB6DC38BB ** get_address_of_tracker_17() { return &___tracker_17; }
	inline void set_tracker_17(ImageTrackerFrameFilter_t38832986899AF907CF9BB3DED8A38F1EB6DC38BB * value)
	{
		___tracker_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tracker_17), (void*)value);
	}

	inline static int32_t get_offset_of_loader_18() { return static_cast<int32_t>(offsetof(ImageTargetController_tE114A6E6910AF4B6A6206889F52DD2C4D15F094A, ___loader_18)); }
	inline ImageTrackerFrameFilter_t38832986899AF907CF9BB3DED8A38F1EB6DC38BB * get_loader_18() const { return ___loader_18; }
	inline ImageTrackerFrameFilter_t38832986899AF907CF9BB3DED8A38F1EB6DC38BB ** get_address_of_loader_18() { return &___loader_18; }
	inline void set_loader_18(ImageTrackerFrameFilter_t38832986899AF907CF9BB3DED8A38F1EB6DC38BB * value)
	{
		___loader_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___loader_18), (void*)value);
	}

	inline static int32_t get_offset_of_scale_19() { return static_cast<int32_t>(offsetof(ImageTargetController_tE114A6E6910AF4B6A6206889F52DD2C4D15F094A, ___scale_19)); }
	inline float get_scale_19() const { return ___scale_19; }
	inline float* get_address_of_scale_19() { return &___scale_19; }
	inline void set_scale_19(float value)
	{
		___scale_19 = value;
	}

	inline static int32_t get_offset_of_scaleX_20() { return static_cast<int32_t>(offsetof(ImageTargetController_tE114A6E6910AF4B6A6206889F52DD2C4D15F094A, ___scaleX_20)); }
	inline float get_scaleX_20() const { return ___scaleX_20; }
	inline float* get_address_of_scaleX_20() { return &___scaleX_20; }
	inline void set_scaleX_20(float value)
	{
		___scaleX_20 = value;
	}

	inline static int32_t get_offset_of_preHFlip_21() { return static_cast<int32_t>(offsetof(ImageTargetController_tE114A6E6910AF4B6A6206889F52DD2C4D15F094A, ___preHFlip_21)); }
	inline bool get_preHFlip_21() const { return ___preHFlip_21; }
	inline bool* get_address_of_preHFlip_21() { return &___preHFlip_21; }
	inline void set_preHFlip_21(bool value)
	{
		___preHFlip_21 = value;
	}

	inline static int32_t get_offset_of_TargetAvailable_22() { return static_cast<int32_t>(offsetof(ImageTargetController_tE114A6E6910AF4B6A6206889F52DD2C4D15F094A, ___TargetAvailable_22)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_TargetAvailable_22() const { return ___TargetAvailable_22; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_TargetAvailable_22() { return &___TargetAvailable_22; }
	inline void set_TargetAvailable_22(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___TargetAvailable_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TargetAvailable_22), (void*)value);
	}

	inline static int32_t get_offset_of_TargetLoad_23() { return static_cast<int32_t>(offsetof(ImageTargetController_tE114A6E6910AF4B6A6206889F52DD2C4D15F094A, ___TargetLoad_23)); }
	inline Action_2_tFE34E0ECF3448AAF964BE269E354A55B12FF498B * get_TargetLoad_23() const { return ___TargetLoad_23; }
	inline Action_2_tFE34E0ECF3448AAF964BE269E354A55B12FF498B ** get_address_of_TargetLoad_23() { return &___TargetLoad_23; }
	inline void set_TargetLoad_23(Action_2_tFE34E0ECF3448AAF964BE269E354A55B12FF498B * value)
	{
		___TargetLoad_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TargetLoad_23), (void*)value);
	}

	inline static int32_t get_offset_of_TargetUnload_24() { return static_cast<int32_t>(offsetof(ImageTargetController_tE114A6E6910AF4B6A6206889F52DD2C4D15F094A, ___TargetUnload_24)); }
	inline Action_2_tFE34E0ECF3448AAF964BE269E354A55B12FF498B * get_TargetUnload_24() const { return ___TargetUnload_24; }
	inline Action_2_tFE34E0ECF3448AAF964BE269E354A55B12FF498B ** get_address_of_TargetUnload_24() { return &___TargetUnload_24; }
	inline void set_TargetUnload_24(Action_2_tFE34E0ECF3448AAF964BE269E354A55B12FF498B * value)
	{
		___TargetUnload_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TargetUnload_24), (void*)value);
	}
};


// easyar.ImageTrackerFrameFilter
struct ImageTrackerFrameFilter_t38832986899AF907CF9BB3DED8A38F1EB6DC38BB  : public FrameFilter_t44A639F4549C4277E979E38302B9119DF58018B4
{
public:
	// easyar.ImageTracker easyar.ImageTrackerFrameFilter::<Tracker>k__BackingField
	ImageTracker_t2596F20FED14203B1FDAABAC21844279AFE9CE25 * ___U3CTrackerU3Ek__BackingField_5;
	// easyar.ImageTrackerMode easyar.ImageTrackerFrameFilter::TrackerMode
	int32_t ___TrackerMode_6;
	// System.Int32 easyar.ImageTrackerFrameFilter::simultaneousNum
	int32_t ___simultaneousNum_7;
	// System.Collections.Generic.List`1<System.Int32> easyar.ImageTrackerFrameFilter::previousTargetIDs
	List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * ___previousTargetIDs_8;
	// System.Collections.Generic.Dictionary`2<System.Int32,easyar.TargetController> easyar.ImageTrackerFrameFilter::allTargetController
	Dictionary_2_tF885F6FDAD8F633A55FFB108EC53350DDA975AF4 * ___allTargetController_9;
	// System.Boolean easyar.ImageTrackerFrameFilter::isStarted
	bool ___isStarted_10;
	// System.Action`3<easyar.ImageTargetController,easyar.Target,System.Boolean> easyar.ImageTrackerFrameFilter::TargetLoad
	Action_3_tC9E0B2C94C4E06922F22DE7562AEB52676E45FB7 * ___TargetLoad_11;
	// System.Action`3<easyar.ImageTargetController,easyar.Target,System.Boolean> easyar.ImageTrackerFrameFilter::TargetUnload
	Action_3_tC9E0B2C94C4E06922F22DE7562AEB52676E45FB7 * ___TargetUnload_12;
	// System.Action easyar.ImageTrackerFrameFilter::SimultaneousNumChanged
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___SimultaneousNumChanged_13;

public:
	inline static int32_t get_offset_of_U3CTrackerU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(ImageTrackerFrameFilter_t38832986899AF907CF9BB3DED8A38F1EB6DC38BB, ___U3CTrackerU3Ek__BackingField_5)); }
	inline ImageTracker_t2596F20FED14203B1FDAABAC21844279AFE9CE25 * get_U3CTrackerU3Ek__BackingField_5() const { return ___U3CTrackerU3Ek__BackingField_5; }
	inline ImageTracker_t2596F20FED14203B1FDAABAC21844279AFE9CE25 ** get_address_of_U3CTrackerU3Ek__BackingField_5() { return &___U3CTrackerU3Ek__BackingField_5; }
	inline void set_U3CTrackerU3Ek__BackingField_5(ImageTracker_t2596F20FED14203B1FDAABAC21844279AFE9CE25 * value)
	{
		___U3CTrackerU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CTrackerU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_TrackerMode_6() { return static_cast<int32_t>(offsetof(ImageTrackerFrameFilter_t38832986899AF907CF9BB3DED8A38F1EB6DC38BB, ___TrackerMode_6)); }
	inline int32_t get_TrackerMode_6() const { return ___TrackerMode_6; }
	inline int32_t* get_address_of_TrackerMode_6() { return &___TrackerMode_6; }
	inline void set_TrackerMode_6(int32_t value)
	{
		___TrackerMode_6 = value;
	}

	inline static int32_t get_offset_of_simultaneousNum_7() { return static_cast<int32_t>(offsetof(ImageTrackerFrameFilter_t38832986899AF907CF9BB3DED8A38F1EB6DC38BB, ___simultaneousNum_7)); }
	inline int32_t get_simultaneousNum_7() const { return ___simultaneousNum_7; }
	inline int32_t* get_address_of_simultaneousNum_7() { return &___simultaneousNum_7; }
	inline void set_simultaneousNum_7(int32_t value)
	{
		___simultaneousNum_7 = value;
	}

	inline static int32_t get_offset_of_previousTargetIDs_8() { return static_cast<int32_t>(offsetof(ImageTrackerFrameFilter_t38832986899AF907CF9BB3DED8A38F1EB6DC38BB, ___previousTargetIDs_8)); }
	inline List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * get_previousTargetIDs_8() const { return ___previousTargetIDs_8; }
	inline List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 ** get_address_of_previousTargetIDs_8() { return &___previousTargetIDs_8; }
	inline void set_previousTargetIDs_8(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * value)
	{
		___previousTargetIDs_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___previousTargetIDs_8), (void*)value);
	}

	inline static int32_t get_offset_of_allTargetController_9() { return static_cast<int32_t>(offsetof(ImageTrackerFrameFilter_t38832986899AF907CF9BB3DED8A38F1EB6DC38BB, ___allTargetController_9)); }
	inline Dictionary_2_tF885F6FDAD8F633A55FFB108EC53350DDA975AF4 * get_allTargetController_9() const { return ___allTargetController_9; }
	inline Dictionary_2_tF885F6FDAD8F633A55FFB108EC53350DDA975AF4 ** get_address_of_allTargetController_9() { return &___allTargetController_9; }
	inline void set_allTargetController_9(Dictionary_2_tF885F6FDAD8F633A55FFB108EC53350DDA975AF4 * value)
	{
		___allTargetController_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___allTargetController_9), (void*)value);
	}

	inline static int32_t get_offset_of_isStarted_10() { return static_cast<int32_t>(offsetof(ImageTrackerFrameFilter_t38832986899AF907CF9BB3DED8A38F1EB6DC38BB, ___isStarted_10)); }
	inline bool get_isStarted_10() const { return ___isStarted_10; }
	inline bool* get_address_of_isStarted_10() { return &___isStarted_10; }
	inline void set_isStarted_10(bool value)
	{
		___isStarted_10 = value;
	}

	inline static int32_t get_offset_of_TargetLoad_11() { return static_cast<int32_t>(offsetof(ImageTrackerFrameFilter_t38832986899AF907CF9BB3DED8A38F1EB6DC38BB, ___TargetLoad_11)); }
	inline Action_3_tC9E0B2C94C4E06922F22DE7562AEB52676E45FB7 * get_TargetLoad_11() const { return ___TargetLoad_11; }
	inline Action_3_tC9E0B2C94C4E06922F22DE7562AEB52676E45FB7 ** get_address_of_TargetLoad_11() { return &___TargetLoad_11; }
	inline void set_TargetLoad_11(Action_3_tC9E0B2C94C4E06922F22DE7562AEB52676E45FB7 * value)
	{
		___TargetLoad_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TargetLoad_11), (void*)value);
	}

	inline static int32_t get_offset_of_TargetUnload_12() { return static_cast<int32_t>(offsetof(ImageTrackerFrameFilter_t38832986899AF907CF9BB3DED8A38F1EB6DC38BB, ___TargetUnload_12)); }
	inline Action_3_tC9E0B2C94C4E06922F22DE7562AEB52676E45FB7 * get_TargetUnload_12() const { return ___TargetUnload_12; }
	inline Action_3_tC9E0B2C94C4E06922F22DE7562AEB52676E45FB7 ** get_address_of_TargetUnload_12() { return &___TargetUnload_12; }
	inline void set_TargetUnload_12(Action_3_tC9E0B2C94C4E06922F22DE7562AEB52676E45FB7 * value)
	{
		___TargetUnload_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TargetUnload_12), (void*)value);
	}

	inline static int32_t get_offset_of_SimultaneousNumChanged_13() { return static_cast<int32_t>(offsetof(ImageTrackerFrameFilter_t38832986899AF907CF9BB3DED8A38F1EB6DC38BB, ___SimultaneousNumChanged_13)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_SimultaneousNumChanged_13() const { return ___SimultaneousNumChanged_13; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_SimultaneousNumChanged_13() { return &___SimultaneousNumChanged_13; }
	inline void set_SimultaneousNumChanged_13(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___SimultaneousNumChanged_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SimultaneousNumChanged_13), (void*)value);
	}
};


// UnityEngine.UI.Selectable
struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * ___m_CanvasGroupCache_19;

public:
	inline static int32_t get_offset_of_m_EnableCalled_6() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_EnableCalled_6)); }
	inline bool get_m_EnableCalled_6() const { return ___m_EnableCalled_6; }
	inline bool* get_address_of_m_EnableCalled_6() { return &___m_EnableCalled_6; }
	inline void set_m_EnableCalled_6(bool value)
	{
		___m_EnableCalled_6 = value;
	}

	inline static int32_t get_offset_of_m_Navigation_7() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Navigation_7)); }
	inline Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  get_m_Navigation_7() const { return ___m_Navigation_7; }
	inline Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A * get_address_of_m_Navigation_7() { return &___m_Navigation_7; }
	inline void set_m_Navigation_7(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  value)
	{
		___m_Navigation_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnUp_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnDown_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnLeft_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnRight_5), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Transition_8() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Transition_8)); }
	inline int32_t get_m_Transition_8() const { return ___m_Transition_8; }
	inline int32_t* get_address_of_m_Transition_8() { return &___m_Transition_8; }
	inline void set_m_Transition_8(int32_t value)
	{
		___m_Transition_8 = value;
	}

	inline static int32_t get_offset_of_m_Colors_9() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Colors_9)); }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  get_m_Colors_9() const { return ___m_Colors_9; }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 * get_address_of_m_Colors_9() { return &___m_Colors_9; }
	inline void set_m_Colors_9(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  value)
	{
		___m_Colors_9 = value;
	}

	inline static int32_t get_offset_of_m_SpriteState_10() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_SpriteState_10)); }
	inline SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  get_m_SpriteState_10() const { return ___m_SpriteState_10; }
	inline SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E * get_address_of_m_SpriteState_10() { return &___m_SpriteState_10; }
	inline void set_m_SpriteState_10(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  value)
	{
		___m_SpriteState_10 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_HighlightedSprite_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_PressedSprite_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_SelectedSprite_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_DisabledSprite_3), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_AnimationTriggers_11() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_AnimationTriggers_11)); }
	inline AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * get_m_AnimationTriggers_11() const { return ___m_AnimationTriggers_11; }
	inline AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 ** get_address_of_m_AnimationTriggers_11() { return &___m_AnimationTriggers_11; }
	inline void set_m_AnimationTriggers_11(AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * value)
	{
		___m_AnimationTriggers_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AnimationTriggers_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_Interactable_12() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Interactable_12)); }
	inline bool get_m_Interactable_12() const { return ___m_Interactable_12; }
	inline bool* get_address_of_m_Interactable_12() { return &___m_Interactable_12; }
	inline void set_m_Interactable_12(bool value)
	{
		___m_Interactable_12 = value;
	}

	inline static int32_t get_offset_of_m_TargetGraphic_13() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_TargetGraphic_13)); }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * get_m_TargetGraphic_13() const { return ___m_TargetGraphic_13; }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 ** get_address_of_m_TargetGraphic_13() { return &___m_TargetGraphic_13; }
	inline void set_m_TargetGraphic_13(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * value)
	{
		___m_TargetGraphic_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TargetGraphic_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_GroupsAllowInteraction_14() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_GroupsAllowInteraction_14)); }
	inline bool get_m_GroupsAllowInteraction_14() const { return ___m_GroupsAllowInteraction_14; }
	inline bool* get_address_of_m_GroupsAllowInteraction_14() { return &___m_GroupsAllowInteraction_14; }
	inline void set_m_GroupsAllowInteraction_14(bool value)
	{
		___m_GroupsAllowInteraction_14 = value;
	}

	inline static int32_t get_offset_of_m_CurrentIndex_15() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_CurrentIndex_15)); }
	inline int32_t get_m_CurrentIndex_15() const { return ___m_CurrentIndex_15; }
	inline int32_t* get_address_of_m_CurrentIndex_15() { return &___m_CurrentIndex_15; }
	inline void set_m_CurrentIndex_15(int32_t value)
	{
		___m_CurrentIndex_15 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerInsideU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3CisPointerInsideU3Ek__BackingField_16)); }
	inline bool get_U3CisPointerInsideU3Ek__BackingField_16() const { return ___U3CisPointerInsideU3Ek__BackingField_16; }
	inline bool* get_address_of_U3CisPointerInsideU3Ek__BackingField_16() { return &___U3CisPointerInsideU3Ek__BackingField_16; }
	inline void set_U3CisPointerInsideU3Ek__BackingField_16(bool value)
	{
		___U3CisPointerInsideU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerDownU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3CisPointerDownU3Ek__BackingField_17)); }
	inline bool get_U3CisPointerDownU3Ek__BackingField_17() const { return ___U3CisPointerDownU3Ek__BackingField_17; }
	inline bool* get_address_of_U3CisPointerDownU3Ek__BackingField_17() { return &___U3CisPointerDownU3Ek__BackingField_17; }
	inline void set_U3CisPointerDownU3Ek__BackingField_17(bool value)
	{
		___U3CisPointerDownU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3ChasSelectionU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3ChasSelectionU3Ek__BackingField_18)); }
	inline bool get_U3ChasSelectionU3Ek__BackingField_18() const { return ___U3ChasSelectionU3Ek__BackingField_18; }
	inline bool* get_address_of_U3ChasSelectionU3Ek__BackingField_18() { return &___U3ChasSelectionU3Ek__BackingField_18; }
	inline void set_U3ChasSelectionU3Ek__BackingField_18(bool value)
	{
		___U3ChasSelectionU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_m_CanvasGroupCache_19() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_CanvasGroupCache_19)); }
	inline List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * get_m_CanvasGroupCache_19() const { return ___m_CanvasGroupCache_19; }
	inline List_1_t34AA4AF4E7352129CA58045901530E41445AC16D ** get_address_of_m_CanvasGroupCache_19() { return &___m_CanvasGroupCache_19; }
	inline void set_m_CanvasGroupCache_19(List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * value)
	{
		___m_CanvasGroupCache_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasGroupCache_19), (void*)value);
	}
};

struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields
{
public:
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;

public:
	inline static int32_t get_offset_of_s_Selectables_4() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields, ___s_Selectables_4)); }
	inline SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* get_s_Selectables_4() const { return ___s_Selectables_4; }
	inline SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535** get_address_of_s_Selectables_4() { return &___s_Selectables_4; }
	inline void set_s_Selectables_4(SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* value)
	{
		___s_Selectables_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Selectables_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_SelectableCount_5() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields, ___s_SelectableCount_5)); }
	inline int32_t get_s_SelectableCount_5() const { return ___s_SelectableCount_5; }
	inline int32_t* get_address_of_s_SelectableCount_5() { return &___s_SelectableCount_5; }
	inline void set_s_SelectableCount_5(int32_t value)
	{
		___s_SelectableCount_5 = value;
	}
};


// UnityEngine.UI.Button
struct Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D  : public Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD
{
public:
	// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::m_OnClick
	ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * ___m_OnClick_20;

public:
	inline static int32_t get_offset_of_m_OnClick_20() { return static_cast<int32_t>(offsetof(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D, ___m_OnClick_20)); }
	inline ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * get_m_OnClick_20() const { return ___m_OnClick_20; }
	inline ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F ** get_address_of_m_OnClick_20() { return &___m_OnClick_20; }
	inline void set_m_OnClick_20(ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * value)
	{
		___m_OnClick_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnClick_20), (void*)value);
	}
};


// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE  : public Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___m_Corners_35;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculateStencil_26)); }
	inline bool get_m_ShouldRecalculateStencil_26() const { return ___m_ShouldRecalculateStencil_26; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_26() { return &___m_ShouldRecalculateStencil_26; }
	inline void set_m_ShouldRecalculateStencil_26(bool value)
	{
		___m_ShouldRecalculateStencil_26 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_MaskMaterial_27)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_MaskMaterial_27() const { return ___m_MaskMaterial_27; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_MaskMaterial_27() { return &___m_MaskMaterial_27; }
	inline void set_m_MaskMaterial_27(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_MaskMaterial_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MaskMaterial_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_ParentMask_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ParentMask_28)); }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * get_m_ParentMask_28() const { return ___m_ParentMask_28; }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 ** get_address_of_m_ParentMask_28() { return &___m_ParentMask_28; }
	inline void set_m_ParentMask_28(RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * value)
	{
		___m_ParentMask_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParentMask_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_Maskable_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Maskable_29)); }
	inline bool get_m_Maskable_29() const { return ___m_Maskable_29; }
	inline bool* get_address_of_m_Maskable_29() { return &___m_Maskable_29; }
	inline void set_m_Maskable_29(bool value)
	{
		___m_Maskable_29 = value;
	}

	inline static int32_t get_offset_of_m_IsMaskingGraphic_30() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IsMaskingGraphic_30)); }
	inline bool get_m_IsMaskingGraphic_30() const { return ___m_IsMaskingGraphic_30; }
	inline bool* get_address_of_m_IsMaskingGraphic_30() { return &___m_IsMaskingGraphic_30; }
	inline void set_m_IsMaskingGraphic_30(bool value)
	{
		___m_IsMaskingGraphic_30 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_31() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IncludeForMasking_31)); }
	inline bool get_m_IncludeForMasking_31() const { return ___m_IncludeForMasking_31; }
	inline bool* get_address_of_m_IncludeForMasking_31() { return &___m_IncludeForMasking_31; }
	inline void set_m_IncludeForMasking_31(bool value)
	{
		___m_IncludeForMasking_31 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_32() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_OnCullStateChanged_32)); }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * get_m_OnCullStateChanged_32() const { return ___m_OnCullStateChanged_32; }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 ** get_address_of_m_OnCullStateChanged_32() { return &___m_OnCullStateChanged_32; }
	inline void set_m_OnCullStateChanged_32(CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * value)
	{
		___m_OnCullStateChanged_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnCullStateChanged_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_33() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculate_33)); }
	inline bool get_m_ShouldRecalculate_33() const { return ___m_ShouldRecalculate_33; }
	inline bool* get_address_of_m_ShouldRecalculate_33() { return &___m_ShouldRecalculate_33; }
	inline void set_m_ShouldRecalculate_33(bool value)
	{
		___m_ShouldRecalculate_33 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_34() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_StencilValue_34)); }
	inline int32_t get_m_StencilValue_34() const { return ___m_StencilValue_34; }
	inline int32_t* get_address_of_m_StencilValue_34() { return &___m_StencilValue_34; }
	inline void set_m_StencilValue_34(int32_t value)
	{
		___m_StencilValue_34 = value;
	}

	inline static int32_t get_offset_of_m_Corners_35() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Corners_35)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_m_Corners_35() const { return ___m_Corners_35; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_m_Corners_35() { return &___m_Corners_35; }
	inline void set_m_Corners_35(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___m_Corners_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Corners_35), (void*)value);
	}
};


// easyar.VideoCameraDevice
struct VideoCameraDevice_tE030FD2425274ADA263F159372642355867E6018  : public CameraSource_t6CD459E4D2844AC4385A326556408EA6B8F359D9
{
public:
	// easyar.CameraDevice easyar.VideoCameraDevice::<Device>k__BackingField
	CameraDevice_tC3CECA485A6FA987D93FB58151FC06EE0E4D8321 * ___U3CDeviceU3Ek__BackingField_7;
	// easyar.CameraDeviceFocusMode easyar.VideoCameraDevice::FocusMode
	int32_t ___FocusMode_8;
	// UnityEngine.Vector2 easyar.VideoCameraDevice::CameraSize
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___CameraSize_9;
	// easyar.VideoCameraDevice/CameraDeviceOpenMethod easyar.VideoCameraDevice::CameraOpenMethod
	int32_t ___CameraOpenMethod_10;
	// easyar.CameraDeviceType easyar.VideoCameraDevice::CameraType
	int32_t ___CameraType_11;
	// System.Int32 easyar.VideoCameraDevice::CameraIndex
	int32_t ___CameraIndex_12;
	// easyar.CameraDevicePreference easyar.VideoCameraDevice::cameraPreference
	int32_t ___cameraPreference_13;
	// easyar.CameraParameters easyar.VideoCameraDevice::parameters
	CameraParameters_t76FA28EFD269E4ADF063EB2FFA8A3DC01153BBFA * ___parameters_14;
	// System.Boolean easyar.VideoCameraDevice::willOpen
	bool ___willOpen_15;
	// System.Action easyar.VideoCameraDevice::DeviceCreated
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___DeviceCreated_16;
	// System.Action easyar.VideoCameraDevice::DeviceOpened
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___DeviceOpened_17;
	// System.Action easyar.VideoCameraDevice::DeviceClosed
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___DeviceClosed_18;

public:
	inline static int32_t get_offset_of_U3CDeviceU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(VideoCameraDevice_tE030FD2425274ADA263F159372642355867E6018, ___U3CDeviceU3Ek__BackingField_7)); }
	inline CameraDevice_tC3CECA485A6FA987D93FB58151FC06EE0E4D8321 * get_U3CDeviceU3Ek__BackingField_7() const { return ___U3CDeviceU3Ek__BackingField_7; }
	inline CameraDevice_tC3CECA485A6FA987D93FB58151FC06EE0E4D8321 ** get_address_of_U3CDeviceU3Ek__BackingField_7() { return &___U3CDeviceU3Ek__BackingField_7; }
	inline void set_U3CDeviceU3Ek__BackingField_7(CameraDevice_tC3CECA485A6FA987D93FB58151FC06EE0E4D8321 * value)
	{
		___U3CDeviceU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CDeviceU3Ek__BackingField_7), (void*)value);
	}

	inline static int32_t get_offset_of_FocusMode_8() { return static_cast<int32_t>(offsetof(VideoCameraDevice_tE030FD2425274ADA263F159372642355867E6018, ___FocusMode_8)); }
	inline int32_t get_FocusMode_8() const { return ___FocusMode_8; }
	inline int32_t* get_address_of_FocusMode_8() { return &___FocusMode_8; }
	inline void set_FocusMode_8(int32_t value)
	{
		___FocusMode_8 = value;
	}

	inline static int32_t get_offset_of_CameraSize_9() { return static_cast<int32_t>(offsetof(VideoCameraDevice_tE030FD2425274ADA263F159372642355867E6018, ___CameraSize_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_CameraSize_9() const { return ___CameraSize_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_CameraSize_9() { return &___CameraSize_9; }
	inline void set_CameraSize_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___CameraSize_9 = value;
	}

	inline static int32_t get_offset_of_CameraOpenMethod_10() { return static_cast<int32_t>(offsetof(VideoCameraDevice_tE030FD2425274ADA263F159372642355867E6018, ___CameraOpenMethod_10)); }
	inline int32_t get_CameraOpenMethod_10() const { return ___CameraOpenMethod_10; }
	inline int32_t* get_address_of_CameraOpenMethod_10() { return &___CameraOpenMethod_10; }
	inline void set_CameraOpenMethod_10(int32_t value)
	{
		___CameraOpenMethod_10 = value;
	}

	inline static int32_t get_offset_of_CameraType_11() { return static_cast<int32_t>(offsetof(VideoCameraDevice_tE030FD2425274ADA263F159372642355867E6018, ___CameraType_11)); }
	inline int32_t get_CameraType_11() const { return ___CameraType_11; }
	inline int32_t* get_address_of_CameraType_11() { return &___CameraType_11; }
	inline void set_CameraType_11(int32_t value)
	{
		___CameraType_11 = value;
	}

	inline static int32_t get_offset_of_CameraIndex_12() { return static_cast<int32_t>(offsetof(VideoCameraDevice_tE030FD2425274ADA263F159372642355867E6018, ___CameraIndex_12)); }
	inline int32_t get_CameraIndex_12() const { return ___CameraIndex_12; }
	inline int32_t* get_address_of_CameraIndex_12() { return &___CameraIndex_12; }
	inline void set_CameraIndex_12(int32_t value)
	{
		___CameraIndex_12 = value;
	}

	inline static int32_t get_offset_of_cameraPreference_13() { return static_cast<int32_t>(offsetof(VideoCameraDevice_tE030FD2425274ADA263F159372642355867E6018, ___cameraPreference_13)); }
	inline int32_t get_cameraPreference_13() const { return ___cameraPreference_13; }
	inline int32_t* get_address_of_cameraPreference_13() { return &___cameraPreference_13; }
	inline void set_cameraPreference_13(int32_t value)
	{
		___cameraPreference_13 = value;
	}

	inline static int32_t get_offset_of_parameters_14() { return static_cast<int32_t>(offsetof(VideoCameraDevice_tE030FD2425274ADA263F159372642355867E6018, ___parameters_14)); }
	inline CameraParameters_t76FA28EFD269E4ADF063EB2FFA8A3DC01153BBFA * get_parameters_14() const { return ___parameters_14; }
	inline CameraParameters_t76FA28EFD269E4ADF063EB2FFA8A3DC01153BBFA ** get_address_of_parameters_14() { return &___parameters_14; }
	inline void set_parameters_14(CameraParameters_t76FA28EFD269E4ADF063EB2FFA8A3DC01153BBFA * value)
	{
		___parameters_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parameters_14), (void*)value);
	}

	inline static int32_t get_offset_of_willOpen_15() { return static_cast<int32_t>(offsetof(VideoCameraDevice_tE030FD2425274ADA263F159372642355867E6018, ___willOpen_15)); }
	inline bool get_willOpen_15() const { return ___willOpen_15; }
	inline bool* get_address_of_willOpen_15() { return &___willOpen_15; }
	inline void set_willOpen_15(bool value)
	{
		___willOpen_15 = value;
	}

	inline static int32_t get_offset_of_DeviceCreated_16() { return static_cast<int32_t>(offsetof(VideoCameraDevice_tE030FD2425274ADA263F159372642355867E6018, ___DeviceCreated_16)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_DeviceCreated_16() const { return ___DeviceCreated_16; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_DeviceCreated_16() { return &___DeviceCreated_16; }
	inline void set_DeviceCreated_16(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___DeviceCreated_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DeviceCreated_16), (void*)value);
	}

	inline static int32_t get_offset_of_DeviceOpened_17() { return static_cast<int32_t>(offsetof(VideoCameraDevice_tE030FD2425274ADA263F159372642355867E6018, ___DeviceOpened_17)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_DeviceOpened_17() const { return ___DeviceOpened_17; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_DeviceOpened_17() { return &___DeviceOpened_17; }
	inline void set_DeviceOpened_17(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___DeviceOpened_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DeviceOpened_17), (void*)value);
	}

	inline static int32_t get_offset_of_DeviceClosed_18() { return static_cast<int32_t>(offsetof(VideoCameraDevice_tE030FD2425274ADA263F159372642355867E6018, ___DeviceClosed_18)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_DeviceClosed_18() const { return ___DeviceClosed_18; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_DeviceClosed_18() { return &___DeviceClosed_18; }
	inline void set_DeviceClosed_18(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___DeviceClosed_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DeviceClosed_18), (void*)value);
	}
};


// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* ___m_TempVerts_42;

public:
	inline static int32_t get_offset_of_m_FontData_36() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_FontData_36)); }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * get_m_FontData_36() const { return ___m_FontData_36; }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 ** get_address_of_m_FontData_36() { return &___m_FontData_36; }
	inline void set_m_FontData_36(FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * value)
	{
		___m_FontData_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FontData_36), (void*)value);
	}

	inline static int32_t get_offset_of_m_Text_37() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_Text_37)); }
	inline String_t* get_m_Text_37() const { return ___m_Text_37; }
	inline String_t** get_address_of_m_Text_37() { return &___m_Text_37; }
	inline void set_m_Text_37(String_t* value)
	{
		___m_Text_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Text_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCache_38() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCache_38)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCache_38() const { return ___m_TextCache_38; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCache_38() { return &___m_TextCache_38; }
	inline void set_m_TextCache_38(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCache_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCache_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCacheForLayout_39() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCacheForLayout_39)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCacheForLayout_39() const { return ___m_TextCacheForLayout_39; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCacheForLayout_39() { return &___m_TextCacheForLayout_39; }
	inline void set_m_TextCacheForLayout_39(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCacheForLayout_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCacheForLayout_39), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisableFontTextureRebuiltCallback_41() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_DisableFontTextureRebuiltCallback_41)); }
	inline bool get_m_DisableFontTextureRebuiltCallback_41() const { return ___m_DisableFontTextureRebuiltCallback_41; }
	inline bool* get_address_of_m_DisableFontTextureRebuiltCallback_41() { return &___m_DisableFontTextureRebuiltCallback_41; }
	inline void set_m_DisableFontTextureRebuiltCallback_41(bool value)
	{
		___m_DisableFontTextureRebuiltCallback_41 = value;
	}

	inline static int32_t get_offset_of_m_TempVerts_42() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TempVerts_42)); }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* get_m_TempVerts_42() const { return ___m_TempVerts_42; }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A** get_address_of_m_TempVerts_42() { return &___m_TempVerts_42; }
	inline void set_m_TempVerts_42(UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* value)
	{
		___m_TempVerts_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TempVerts_42), (void*)value);
	}
};

struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultText_40;

public:
	inline static int32_t get_offset_of_s_DefaultText_40() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields, ___s_DefaultText_40)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultText_40() const { return ___s_DefaultText_40; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultText_40() { return &___s_DefaultText_40; }
	inline void set_s_DefaultText_40(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultText_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultText_40), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// ImageTracking_ImageTarget.ImageTrackingSample/ImageFile[]
struct ImageFileU5BU5D_t74471C0FC6238B2E40ABBB894C4A12B113FBDB16  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) ImageFile_t5D3F3D881BABF7E68D51721CC307EB7B52709229 * m_Items[1];

public:
	inline ImageFile_t5D3F3D881BABF7E68D51721CC307EB7B52709229 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ImageFile_t5D3F3D881BABF7E68D51721CC307EB7B52709229 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ImageFile_t5D3F3D881BABF7E68D51721CC307EB7B52709229 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ImageFile_t5D3F3D881BABF7E68D51721CC307EB7B52709229 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ImageFile_t5D3F3D881BABF7E68D51721CC307EB7B52709229 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ImageFile_t5D3F3D881BABF7E68D51721CC307EB7B52709229 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// !!0 UnityEngine.Component::GetComponentInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponentInChildren_TisRuntimeObject_m2D53662347629A70E2A610B61ACC705D63F22D34_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_m533C28B362284747FD5138B02D183642545146E8_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::set_Item(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m96A95CDE46B37299C66F4EDE859B53F12E026BA7_gshared (Dictionary_2_t8A3F8777BEF075E009D085E3BC9B9ADB00F47345 * __this, RuntimeObject * ___key0, bool ___value1, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_mDC2250CC3F24F6FE45660AF6153056ABDA5ED60F_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t7CF1480E8063E004FE105D7E9D3A68CD5AC7D851  Dictionary_2_GetEnumerator_mB3CCDDB055EE837A629A816F013534A09A8DBE28_gshared (Dictionary_2_t8A3F8777BEF075E009D085E3BC9B9ADB00F47345 * __this, const RuntimeMethod* method);
// System.Collections.Generic.KeyValuePair`2<!0,!1> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tF48C056DF83BF9AF3BAE277B149EC5E4E436BD1A  Enumerator_get_Current_m1C83309EB4D7074A7C08B98AB84BD64926DE0113_gshared_inline (Enumerator_t7CF1480E8063E004FE105D7E9D3A68CD5AC7D851 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Key_m0811BBC9021B11DC1F804BB595C644CBE8E6DD01_gshared_inline (KeyValuePair_2_tF48C056DF83BF9AF3BAE277B149EC5E4E436BD1A * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool KeyValuePair_2_get_Value_m65076207C2BD77BB76C0FA0499724D61726996DD_gshared_inline (KeyValuePair_2_tF48C056DF83BF9AF3BAE277B149EC5E4E436BD1A * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mA7E6268589E54CC062050593BBB47F1073271207_gshared (Enumerator_t7CF1480E8063E004FE105D7E9D3A68CD5AC7D851 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m9286BC4CBE66DC783C782EC14D286D08DF8C9D60_gshared (Enumerator_t7CF1480E8063E004FE105D7E9D3A68CD5AC7D851 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.JsonUtility::FromJson<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * JsonUtility_FromJson_TisRuntimeObject_m1F74BC3B29E63392FBC9312D0AE74CC7B1C143A5_gshared (String_t* ___json0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_AddComponent_TisRuntimeObject_mF5562A0C81CEDFE1C295F7E16FC6904B5057CB2D_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void System.Action`2<System.Object,System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2__ctor_mF25B58BCEED1ADAB1ECAA8070229667422ABA543_gshared (Action_2_tB46DEF21BEFDF9B046381C5FE787F08B0397DAB5 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mCB81D2E16433EA0BB063264694162BD7E3DE1DA0_gshared (Dictionary_2_t8A3F8777BEF075E009D085E3BC9B9ADB00F47345 * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>::get_Item(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_get_Item_mB5094E3C4A0953A61DBA874C0B7E023609C8B805_gshared (Dictionary_2_t8A3F8777BEF075E009D085E3BC9B9ADB00F47345 * __this, RuntimeObject * ___key0, const RuntimeMethod* method);

// System.Void ImageTracking_ImageTarget.ImageTrackingSample/<>c__DisplayClass8_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass8_0__ctor_mE2625B6A7B899B3C2C37D98682AB3F6289C0DA7C (U3CU3Ec__DisplayClass8_0_t60374A69B9DB8DDCABB6BB8C04FB7087A115C827 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponentInChildren<easyar.ImageTrackerFrameFilter>()
inline ImageTrackerFrameFilter_t38832986899AF907CF9BB3DED8A38F1EB6DC38BB * Component_GetComponentInChildren_TisImageTrackerFrameFilter_t38832986899AF907CF9BB3DED8A38F1EB6DC38BB_m69DC23706ECB589CA8A6FC3A3C29E26FFE8BB9FA (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  ImageTrackerFrameFilter_t38832986899AF907CF9BB3DED8A38F1EB6DC38BB * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponentInChildren_TisRuntimeObject_m2D53662347629A70E2A610B61ACC705D63F22D34_gshared)(__this, method);
}
// !!0 UnityEngine.Component::GetComponentInChildren<easyar.VideoCameraDevice>()
inline VideoCameraDevice_tE030FD2425274ADA263F159372642355867E6018 * Component_GetComponentInChildren_TisVideoCameraDevice_tE030FD2425274ADA263F159372642355867E6018_mDA35EC0FCF5B3B4DF03630EB5BB123C0DEBCB0EE (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  VideoCameraDevice_tE030FD2425274ADA263F159372642355867E6018 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponentInChildren_TisRuntimeObject_m2D53662347629A70E2A610B61ACC705D63F22D34_gshared)(__this, method);
}
// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B (String_t* ___name0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<easyar.ImageTargetController>()
inline ImageTargetController_tE114A6E6910AF4B6A6206889F52DD2C4D15F094A * GameObject_GetComponent_TisImageTargetController_tE114A6E6910AF4B6A6206889F52DD2C4D15F094A_m85EFB1F0909DD8F536F474650D7A8952DBB61A2E (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  ImageTargetController_tE114A6E6910AF4B6A6206889F52DD2C4D15F094A * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m533C28B362284747FD5138B02D183642545146E8_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<easyar.ImageTargetController,System.Boolean>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_mCE55410BC242D9CAECB52D0BCA4BAE953398BF28 (Dictionary_2_t33723D7778E13B98CD0BE75946A95FFAD8CC07E5 * __this, ImageTargetController_tE114A6E6910AF4B6A6206889F52DD2C4D15F094A * ___key0, bool ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t33723D7778E13B98CD0BE75946A95FFAD8CC07E5 *, ImageTargetController_tE114A6E6910AF4B6A6206889F52DD2C4D15F094A *, bool, const RuntimeMethod*))Dictionary_2_set_Item_m96A95CDE46B37299C66F4EDE859B53F12E026BA7_gshared)(__this, ___key0, ___value1, method);
}
// System.Void ImageTracking_ImageTarget.ImageTrackingSample::AddTargetControllerEvents(easyar.ImageTargetController)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageTrackingSample_AddTargetControllerEvents_mF682613B55F1433787D8222FDFF6B567C4D6E0A3 (ImageTrackingSample_tD24CBC2F8D4E9C4B5701BF28F183F65B77E4371F * __this, ImageTargetController_tE114A6E6910AF4B6A6206889F52DD2C4D15F094A * ___controller0, const RuntimeMethod* method);
// System.Void ImageTracking_ImageTarget.ImageTrackingSample::CreateTargets()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageTrackingSample_CreateTargets_mD01B48EAB7B3D102D10C89A7B571B6835F7DCF5B (ImageTrackingSample_tD24CBC2F8D4E9C4B5701BF28F183F65B77E4371F * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Application::CanStreamedLevelBeLoaded(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_CanStreamedLevelBeLoaded_mC6D30415C88C5ADBC9DF8D18FBE4FE92AB7B92E2 (String_t* ___levelName0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.UI.Button>()
inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * Component_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_mED8C9575844B41F67CB4C2B13685FC0174CB61BC (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_mDC2250CC3F24F6FE45660AF6153056ABDA5ED60F_gshared)(__this, method);
}
// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::get_onClick()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * Button_get_onClick_m28BD8C670676D4E2B292B5A7F59387D4BF61F8F4_inline (Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityAction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction__ctor_m48C04C4C0F46918CF216A2410A4E58D31B6362BA (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent::AddListener(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_AddListener_m0ACFF0706176ECCB20E0BC2542D07396616F436D (UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * __this, UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___call0, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, bool ___value0, const RuntimeMethod* method);
// easyar.CameraDevice easyar.VideoCameraDevice::get_Device()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CameraDevice_tC3CECA485A6FA987D93FB58151FC06EE0E4D8321 * VideoCameraDevice_get_Device_m77FFDB8D31391BB2F320894375098D943EE2A1A9_inline (VideoCameraDevice_tE030FD2425274ADA263F159372642355867E6018 * __this, const RuntimeMethod* method);
// System.String System.Environment::get_NewLine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Environment_get_NewLine_mD145C8EE917C986BAA7C5243DEFAF4D333C521B4 (const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___exists0, const RuntimeMethod* method);
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Behaviour::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Behaviour_get_enabled_m08077AB79934634E1EAE909C2B482BEF4C15A800 (Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9 (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___values0, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2<easyar.ImageTargetController,System.Boolean>::GetEnumerator()
inline Enumerator_t771777407FF5589AB133F1A819A3A050E7293A67  Dictionary_2_GetEnumerator_m8E4E939B34C1FFFE6E6BC59A5FC062F126F5C320 (Dictionary_2_t33723D7778E13B98CD0BE75946A95FFAD8CC07E5 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t771777407FF5589AB133F1A819A3A050E7293A67  (*) (Dictionary_2_t33723D7778E13B98CD0BE75946A95FFAD8CC07E5 *, const RuntimeMethod*))Dictionary_2_GetEnumerator_mB3CCDDB055EE837A629A816F013534A09A8DBE28_gshared)(__this, method);
}
// System.Collections.Generic.KeyValuePair`2<!0,!1> System.Collections.Generic.Dictionary`2/Enumerator<easyar.ImageTargetController,System.Boolean>::get_Current()
inline KeyValuePair_2_tCE1C71A7043B5E2EF1D939DF3F8E09D15391DFDD  Enumerator_get_Current_mBB40B9605AF1EF1CF7CB9EBE731BFF124454E9D2_inline (Enumerator_t771777407FF5589AB133F1A819A3A050E7293A67 * __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_tCE1C71A7043B5E2EF1D939DF3F8E09D15391DFDD  (*) (Enumerator_t771777407FF5589AB133F1A819A3A050E7293A67 *, const RuntimeMethod*))Enumerator_get_Current_m1C83309EB4D7074A7C08B98AB84BD64926DE0113_gshared_inline)(__this, method);
}
// !0 System.Collections.Generic.KeyValuePair`2<easyar.ImageTargetController,System.Boolean>::get_Key()
inline ImageTargetController_tE114A6E6910AF4B6A6206889F52DD2C4D15F094A * KeyValuePair_2_get_Key_m907D63078F5F9090FA7E33719A0FFC649F4AB762_inline (KeyValuePair_2_tCE1C71A7043B5E2EF1D939DF3F8E09D15391DFDD * __this, const RuntimeMethod* method)
{
	return ((  ImageTargetController_tE114A6E6910AF4B6A6206889F52DD2C4D15F094A * (*) (KeyValuePair_2_tCE1C71A7043B5E2EF1D939DF3F8E09D15391DFDD *, const RuntimeMethod*))KeyValuePair_2_get_Key_m0811BBC9021B11DC1F804BB595C644CBE8E6DD01_gshared_inline)(__this, method);
}
// !1 System.Collections.Generic.KeyValuePair`2<easyar.ImageTargetController,System.Boolean>::get_Value()
inline bool KeyValuePair_2_get_Value_m4383D0C8C3CCE3CDCA9568C5F9CF6B5B9DC90883_inline (KeyValuePair_2_tCE1C71A7043B5E2EF1D939DF3F8E09D15391DFDD * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (KeyValuePair_2_tCE1C71A7043B5E2EF1D939DF3F8E09D15391DFDD *, const RuntimeMethod*))KeyValuePair_2_get_Value_m65076207C2BD77BB76C0FA0499724D61726996DD_gshared_inline)(__this, method);
}
// System.String System.Boolean::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Boolean_ToString_m59BB8456DD05A874BBD756E57EA8AD983287015C (bool* __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<easyar.ImageTargetController,System.Boolean>::MoveNext()
inline bool Enumerator_MoveNext_m9F5787C33BFE1EA8ECF433C93BAF8B5ED0ED1825 (Enumerator_t771777407FF5589AB133F1A819A3A050E7293A67 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t771777407FF5589AB133F1A819A3A050E7293A67 *, const RuntimeMethod*))Enumerator_MoveNext_mA7E6268589E54CC062050593BBB47F1073271207_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<easyar.ImageTargetController,System.Boolean>::Dispose()
inline void Enumerator_Dispose_m9AB85FA1393DFF10512CB0A6D93D623366D3045D (Enumerator_t771777407FF5589AB133F1A819A3A050E7293A67 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t771777407FF5589AB133F1A819A3A050E7293A67 *, const RuntimeMethod*))Enumerator_Dispose_m9286BC4CBE66DC783C782EC14D286D08DF8C9D60_gshared)(__this, method);
}
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32 (Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void easyar.ImageTargetController::set_Tracker(easyar.ImageTrackerFrameFilter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageTargetController_set_Tracker_m696FD5271D0AE2CBE1875018734D456FEF3D0618 (ImageTargetController_tE114A6E6910AF4B6A6206889F52DD2C4D15F094A * __this, ImageTrackerFrameFilter_t38832986899AF907CF9BB3DED8A38F1EB6DC38BB * ___value0, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E (RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ___handle0, const RuntimeMethod* method);
// System.Array System.Enum::GetValues(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeArray * Enum_GetValues_m8EEC6B32F297FDB2F7375DC8B197E0E1AB8643BD (Type_t * ___enumType0, const RuntimeMethod* method);
// System.Int32 System.Array::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_get_Length_m12B3E61F1BF9880AB252640D69269B49665C0A10 (RuntimeArray * __this, const RuntimeMethod* method);
// System.Int32 easyar.CameraDevice::cameraCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CameraDevice_cameraCount_m80CC35FC3320A4FD56414C3430F6502E3D29A29C (const RuntimeMethod* method);
// System.Void easyar.GUIPopup::EnqueueMessage(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIPopup_EnqueueMessage_m5522999693F7256EFFCD9C351C221E81119A5201 (String_t* ___message0, float ___seconds1, const RuntimeMethod* method);
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411 (int32_t* __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// easyar.ImageTargetController ImageTracking_ImageTarget.ImageTrackingSample::CreateTargetNode(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ImageTargetController_tE114A6E6910AF4B6A6206889F52DD2C4D15F094A * ImageTrackingSample_CreateTargetNode_m650FFCAD7A72E26F95C04AAFD5462BF8778E2B43 (ImageTrackingSample_tD24CBC2F8D4E9C4B5701BF28F183F65B77E4371F * __this, String_t* ___targetName0, const RuntimeMethod* method);
// UnityEngine.Object UnityEngine.Resources::Load(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * Resources_Load_m011631B3740AFD38D496838F10D3DA635A061120 (String_t* ___path0, const RuntimeMethod* method);
// UnityEngine.Object UnityEngine.Object::Instantiate(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * Object_Instantiate_m565A02EA45AEA7442E19FDC8E82695491938CB5A (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___original0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_parent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_parent_mEAE304E1A804E8B83054CEECB5BF1E517196EC13 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.JsonUtility::FromJson<ImageTracking_ImageTarget.ImageTrackingSample/ImageJson>(System.String)
inline ImageJson_t5E105E6DB96A0ED2FD3FF970160F15E8FA1C3FBE * JsonUtility_FromJson_TisImageJson_t5E105E6DB96A0ED2FD3FF970160F15E8FA1C3FBE_m725F03E9AE1BBF6547E9EDDE653CC3F47CBBF5C3 (String_t* ___json0, const RuntimeMethod* method)
{
	return ((  ImageJson_t5E105E6DB96A0ED2FD3FF970160F15E8FA1C3FBE * (*) (String_t*, const RuntimeMethod*))JsonUtility_FromJson_TisRuntimeObject_m1F74BC3B29E63392FBC9312D0AE74CC7B1C143A5_gshared)(___json0, method);
}
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_mDF8BF31EAE3E03F24421531B25FB4BEDB7C87144 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, String_t* ___name0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<easyar.ImageTargetController>()
inline ImageTargetController_tE114A6E6910AF4B6A6206889F52DD2C4D15F094A * GameObject_AddComponent_TisImageTargetController_tE114A6E6910AF4B6A6206889F52DD2C4D15F094A_m36A09AC1060111D52C131101177EF68C6A7C502D (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  ImageTargetController_tE114A6E6910AF4B6A6206889F52DD2C4D15F094A * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_mF5562A0C81CEDFE1C295F7E16FC6904B5057CB2D_gshared)(__this, method);
}
// System.Void ImageTracking_ImageTarget.ImageTrackingSample/<>c__DisplayClass19_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass19_0__ctor_mE3E24097B8CC99E4D414DF010F59C9A12101A559 (U3CU3Ec__DisplayClass19_0_tAC486BFFECAC899048DCD1077A01E0A9987F7983 * __this, const RuntimeMethod* method);
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void easyar.TargetController::add_TargetFound(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TargetController_add_TargetFound_mBF555608DE5FF83FF7086834DE72F040981DA6CC (TargetController_t063F5455F413C882C59737867A3E4D8B560C1B0A * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___value0, const RuntimeMethod* method);
// System.Void easyar.TargetController::add_TargetLost(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TargetController_add_TargetLost_m196F18A27B139113BD8CC326773B8341C188B574 (TargetController_t063F5455F413C882C59737867A3E4D8B560C1B0A * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___value0, const RuntimeMethod* method);
// System.Void System.Action`2<easyar.Target,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_m1869DFB1B7F135D3A64B8923A3404D9D5E84D017 (Action_2_tFE34E0ECF3448AAF964BE269E354A55B12FF498B * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_2_tFE34E0ECF3448AAF964BE269E354A55B12FF498B *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_2__ctor_mF25B58BCEED1ADAB1ECAA8070229667422ABA543_gshared)(__this, ___object0, ___method1, method);
}
// System.Void easyar.ImageTargetController::add_TargetLoad(System.Action`2<easyar.Target,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageTargetController_add_TargetLoad_m94E48618FD79E4D972EFD15DA84DD72F75060116 (ImageTargetController_tE114A6E6910AF4B6A6206889F52DD2C4D15F094A * __this, Action_2_tFE34E0ECF3448AAF964BE269E354A55B12FF498B * ___value0, const RuntimeMethod* method);
// System.Void easyar.ImageTargetController::add_TargetUnload(System.Action`2<easyar.Target,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageTargetController_add_TargetUnload_mE2CCF32A06471A3E22DA9A468AD1475AF6033A93 (ImageTargetController_tE114A6E6910AF4B6A6206889F52DD2C4D15F094A * __this, Action_2_tFE34E0ECF3448AAF964BE269E354A55B12FF498B * ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<easyar.ImageTargetController,System.Boolean>::.ctor()
inline void Dictionary_2__ctor_mCD11050E009992EEF66A6AC46DB6F0491E615CB7 (Dictionary_2_t33723D7778E13B98CD0BE75946A95FFAD8CC07E5 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t33723D7778E13B98CD0BE75946A95FFAD8CC07E5 *, const RuntimeMethod*))Dictionary_2__ctor_mCB81D2E16433EA0BB063264694162BD7E3DE1DA0_gshared)(__this, method);
}
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// easyar.ImageTarget easyar.ImageTargetController::get_Target()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ImageTarget_tA8C5FC0A5A35FC9E978EA583695F80FA45E66F70 * ImageTargetController_get_Target_mA05E98E932BFBF4F270B0E020517404165627CC6_inline (ImageTargetController_tE114A6E6910AF4B6A6206889F52DD2C4D15F094A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogFormat(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogFormat_m3FD4ED373B54BC92F95360449859CD95D45D73C6 (String_t* ___format0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<easyar.ImageTargetController,System.Boolean>::get_Item(!0)
inline bool Dictionary_2_get_Item_m3789FE3DCE0BB8925C674AAE9B067AD0BEEB59A2 (Dictionary_2_t33723D7778E13B98CD0BE75946A95FFAD8CC07E5 * __this, ImageTargetController_tE114A6E6910AF4B6A6206889F52DD2C4D15F094A * ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t33723D7778E13B98CD0BE75946A95FFAD8CC07E5 *, ImageTargetController_tE114A6E6910AF4B6A6206889F52DD2C4D15F094A *, const RuntimeMethod*))Dictionary_2_get_Item_mB5094E3C4A0953A61DBA874C0B7E023609C8B805_gshared)(__this, ___key0, method);
}
// UnityEngine.Vector2 easyar.ImageTargetController::get_Size()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ImageTargetController_get_Size_mD092F83CFB3A039DCB8CBE67ED234293B157393A (ImageTargetController_tE114A6E6910AF4B6A6206889F52DD2C4D15F094A * __this, const RuntimeMethod* method);
// easyar.ImageTrackerFrameFilter easyar.ImageTargetController::get_Tracker()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ImageTrackerFrameFilter_t38832986899AF907CF9BB3DED8A38F1EB6DC38BB * ImageTargetController_get_Tracker_mD2EB76EC46A56BBC54637488A2A511A2322EDEAF_inline (ImageTargetController_tE114A6E6910AF4B6A6206889F52DD2C4D15F094A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092 (String_t* ___sceneName0, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ImageTracking_ImageTarget.ImageTrackingSample::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageTrackingSample_Awake_mE6DC6BC366C1AC63FFEA6093B42152414DB1F98C (ImageTrackingSample_tD24CBC2F8D4E9C4B5701BF28F183F65B77E4371F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInChildren_TisImageTrackerFrameFilter_t38832986899AF907CF9BB3DED8A38F1EB6DC38BB_m69DC23706ECB589CA8A6FC3A3C29E26FFE8BB9FA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInChildren_TisVideoCameraDevice_tE030FD2425274ADA263F159372642355867E6018_mDA35EC0FCF5B3B4DF03630EB5BB123C0DEBCB0EE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_mED8C9575844B41F67CB4C2B13685FC0174CB61BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_mCE55410BC242D9CAECB52D0BCA4BAE953398BF28_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisImageTargetController_tE114A6E6910AF4B6A6206889F52DD2C4D15F094A_m85EFB1F0909DD8F536F474650D7A8952DBB61A2E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass8_0_U3CAwakeU3Eb__0_mD689E032F8DE15E3D2F0EC2254C713E91534B653_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass8_0_t60374A69B9DB8DDCABB6BB8C04FB7087A115C827_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral42B857DCA1FE24EA99D77A53859F0916B3433DFA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7281452A3DC77AEE11B7BF6EA8596FE4074AAEBE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB538CA43524DB0615DBD5761697FBEA96E081131);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass8_0_t60374A69B9DB8DDCABB6BB8C04FB7087A115C827 * V_0 = NULL;
	{
		U3CU3Ec__DisplayClass8_0_t60374A69B9DB8DDCABB6BB8C04FB7087A115C827 * L_0 = (U3CU3Ec__DisplayClass8_0_t60374A69B9DB8DDCABB6BB8C04FB7087A115C827 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass8_0_t60374A69B9DB8DDCABB6BB8C04FB7087A115C827_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass8_0__ctor_mE2625B6A7B899B3C2C37D98682AB3F6289C0DA7C(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		// imageTracker = Session.GetComponentInChildren<ImageTrackerFrameFilter>();
		ARSession_tD6A86CCAD93871B995E4B9FFAC634BBC5642CCAD * L_1 = __this->get_Session_4();
		NullCheck(L_1);
		ImageTrackerFrameFilter_t38832986899AF907CF9BB3DED8A38F1EB6DC38BB * L_2;
		L_2 = Component_GetComponentInChildren_TisImageTrackerFrameFilter_t38832986899AF907CF9BB3DED8A38F1EB6DC38BB_m69DC23706ECB589CA8A6FC3A3C29E26FFE8BB9FA(L_1, /*hidden argument*/Component_GetComponentInChildren_TisImageTrackerFrameFilter_t38832986899AF907CF9BB3DED8A38F1EB6DC38BB_m69DC23706ECB589CA8A6FC3A3C29E26FFE8BB9FA_RuntimeMethod_var);
		__this->set_imageTracker_10(L_2);
		// cameraDevice = Session.GetComponentInChildren<VideoCameraDevice>();
		ARSession_tD6A86CCAD93871B995E4B9FFAC634BBC5642CCAD * L_3 = __this->get_Session_4();
		NullCheck(L_3);
		VideoCameraDevice_tE030FD2425274ADA263F159372642355867E6018 * L_4;
		L_4 = Component_GetComponentInChildren_TisVideoCameraDevice_tE030FD2425274ADA263F159372642355867E6018_mDA35EC0FCF5B3B4DF03630EB5BB123C0DEBCB0EE(L_3, /*hidden argument*/Component_GetComponentInChildren_TisVideoCameraDevice_tE030FD2425274ADA263F159372642355867E6018_mDA35EC0FCF5B3B4DF03630EB5BB123C0DEBCB0EE_RuntimeMethod_var);
		__this->set_cameraDevice_11(L_4);
		// controllerNamecard = GameObject.Find("ImageTarget-namecard").GetComponent<ImageTargetController>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
		L_5 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteralB538CA43524DB0615DBD5761697FBEA96E081131, /*hidden argument*/NULL);
		NullCheck(L_5);
		ImageTargetController_tE114A6E6910AF4B6A6206889F52DD2C4D15F094A * L_6;
		L_6 = GameObject_GetComponent_TisImageTargetController_tE114A6E6910AF4B6A6206889F52DD2C4D15F094A_m85EFB1F0909DD8F536F474650D7A8952DBB61A2E(L_5, /*hidden argument*/GameObject_GetComponent_TisImageTargetController_tE114A6E6910AF4B6A6206889F52DD2C4D15F094A_m85EFB1F0909DD8F536F474650D7A8952DBB61A2E_RuntimeMethod_var);
		__this->set_controllerNamecard_8(L_6);
		// controllerIdback = GameObject.Find("ImageTarget-idback").GetComponent<ImageTargetController>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7;
		L_7 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral42B857DCA1FE24EA99D77A53859F0916B3433DFA, /*hidden argument*/NULL);
		NullCheck(L_7);
		ImageTargetController_tE114A6E6910AF4B6A6206889F52DD2C4D15F094A * L_8;
		L_8 = GameObject_GetComponent_TisImageTargetController_tE114A6E6910AF4B6A6206889F52DD2C4D15F094A_m85EFB1F0909DD8F536F474650D7A8952DBB61A2E(L_7, /*hidden argument*/GameObject_GetComponent_TisImageTargetController_tE114A6E6910AF4B6A6206889F52DD2C4D15F094A_m85EFB1F0909DD8F536F474650D7A8952DBB61A2E_RuntimeMethod_var);
		__this->set_controllerIdback_9(L_8);
		// imageTargetControllers[controllerNamecard] = false;
		Dictionary_2_t33723D7778E13B98CD0BE75946A95FFAD8CC07E5 * L_9 = __this->get_imageTargetControllers_7();
		ImageTargetController_tE114A6E6910AF4B6A6206889F52DD2C4D15F094A * L_10 = __this->get_controllerNamecard_8();
		NullCheck(L_9);
		Dictionary_2_set_Item_mCE55410BC242D9CAECB52D0BCA4BAE953398BF28(L_9, L_10, (bool)0, /*hidden argument*/Dictionary_2_set_Item_mCE55410BC242D9CAECB52D0BCA4BAE953398BF28_RuntimeMethod_var);
		// imageTargetControllers[controllerIdback] = false;
		Dictionary_2_t33723D7778E13B98CD0BE75946A95FFAD8CC07E5 * L_11 = __this->get_imageTargetControllers_7();
		ImageTargetController_tE114A6E6910AF4B6A6206889F52DD2C4D15F094A * L_12 = __this->get_controllerIdback_9();
		NullCheck(L_11);
		Dictionary_2_set_Item_mCE55410BC242D9CAECB52D0BCA4BAE953398BF28(L_11, L_12, (bool)0, /*hidden argument*/Dictionary_2_set_Item_mCE55410BC242D9CAECB52D0BCA4BAE953398BF28_RuntimeMethod_var);
		// AddTargetControllerEvents(controllerNamecard);
		ImageTargetController_tE114A6E6910AF4B6A6206889F52DD2C4D15F094A * L_13 = __this->get_controllerNamecard_8();
		ImageTrackingSample_AddTargetControllerEvents_mF682613B55F1433787D8222FDFF6B567C4D6E0A3(__this, L_13, /*hidden argument*/NULL);
		// AddTargetControllerEvents(controllerIdback);
		ImageTargetController_tE114A6E6910AF4B6A6206889F52DD2C4D15F094A * L_14 = __this->get_controllerIdback_9();
		ImageTrackingSample_AddTargetControllerEvents_mF682613B55F1433787D8222FDFF6B567C4D6E0A3(__this, L_14, /*hidden argument*/NULL);
		// CreateTargets();
		ImageTrackingSample_CreateTargets_mD01B48EAB7B3D102D10C89A7B571B6835F7DCF5B(__this, /*hidden argument*/NULL);
		// var launcher = "AllSamplesLauncher";
		U3CU3Ec__DisplayClass8_0_t60374A69B9DB8DDCABB6BB8C04FB7087A115C827 * L_15 = V_0;
		NullCheck(L_15);
		L_15->set_launcher_0(_stringLiteral7281452A3DC77AEE11B7BF6EA8596FE4074AAEBE);
		// if (Application.CanStreamedLevelBeLoaded(launcher))
		U3CU3Ec__DisplayClass8_0_t60374A69B9DB8DDCABB6BB8C04FB7087A115C827 * L_16 = V_0;
		NullCheck(L_16);
		String_t* L_17 = L_16->get_launcher_0();
		bool L_18;
		L_18 = Application_CanStreamedLevelBeLoaded_mC6D30415C88C5ADBC9DF8D18FBE4FE92AB7B92E2(L_17, /*hidden argument*/NULL);
		if (!L_18)
		{
			goto IL_00ce;
		}
	}
	{
		// var button = BackButton.GetComponent<Button>();
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_19 = __this->get_BackButton_6();
		NullCheck(L_19);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_20;
		L_20 = Component_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_mED8C9575844B41F67CB4C2B13685FC0174CB61BC(L_19, /*hidden argument*/Component_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_mED8C9575844B41F67CB4C2B13685FC0174CB61BC_RuntimeMethod_var);
		// button.onClick.AddListener(() => { UnityEngine.SceneManagement.SceneManager.LoadScene(launcher); });
		NullCheck(L_20);
		ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * L_21;
		L_21 = Button_get_onClick_m28BD8C670676D4E2B292B5A7F59387D4BF61F8F4_inline(L_20, /*hidden argument*/NULL);
		U3CU3Ec__DisplayClass8_0_t60374A69B9DB8DDCABB6BB8C04FB7087A115C827 * L_22 = V_0;
		UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * L_23 = (UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 *)il2cpp_codegen_object_new(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099_il2cpp_TypeInfo_var);
		UnityAction__ctor_m48C04C4C0F46918CF216A2410A4E58D31B6362BA(L_23, L_22, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass8_0_U3CAwakeU3Eb__0_mD689E032F8DE15E3D2F0EC2254C713E91534B653_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_21);
		UnityEvent_AddListener_m0ACFF0706176ECCB20E0BC2542D07396616F436D(L_21, L_23, /*hidden argument*/NULL);
		// }
		return;
	}

IL_00ce:
	{
		// BackButton.gameObject.SetActive(false);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_24 = __this->get_BackButton_6();
		NullCheck(L_24);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_25;
		L_25 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_24, /*hidden argument*/NULL);
		NullCheck(L_25);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_25, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ImageTracking_ImageTarget.ImageTrackingSample::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageTrackingSample_Update_m8DFB8BA9F147ADD5D4E1E51A09CDF4962DBBA189 (ImageTrackingSample_tD24CBC2F8D4E9C4B5701BF28F183F65B77E4371F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARCenterMode_t83FCE2DD4B9A00F624F9A3D05C96A4E1DD9AC61F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARHorizontalFlipMode_t353952F54B442ABEAA7856F4226E7847F3F1C399_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_GetEnumerator_m8E4E939B34C1FFFE6E6BC59A5FC062F126F5C320_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m9AB85FA1393DFF10512CB0A6D93D623366D3045D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m9F5787C33BFE1EA8ECF433C93BAF8B5ED0ED1825_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mBB40B9605AF1EF1CF7CB9EBE731BFF124454E9D2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_m907D63078F5F9090FA7E33719A0FFC649F4AB762_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m4383D0C8C3CCE3CDCA9568C5F9CF6B5B9DC90883_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral083AB95C507154B86F7218869F1C6B65C6886003);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0E8CD1E34507F5A3FFA3D074EE3DF7B1F702458B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1168E92C164109D6220480DEDA987085B2A21155);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral24313380B89749FA23D81C8CFE7ECADF5F282DF3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral24384261B6324D1B1FACC1EBCBFAEC5E59A0062B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral616FA8FACA4BD63856D14D13CE36C30A22C4AE73);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7A71A119AB19DAEDD0B973DCB57AA0B794DBFBBA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7DB229E4B4513366157C0D536C533A2B6C5F7AA5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEEE0FB26F879234275046023F3D7FEE278B1684C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF7D70AB4110EC818FAF857316C4DE38C027FE186);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	String_t* V_1 = NULL;
	CameraParameters_t76FA28EFD269E4ADF063EB2FFA8A3DC01153BBFA * V_2 = NULL;
	int32_t V_3 = 0;
	Enumerator_t771777407FF5589AB133F1A819A3A050E7293A67  V_4;
	memset((&V_4), 0, sizeof(V_4));
	KeyValuePair_2_tCE1C71A7043B5E2EF1D939DF3F8E09D15391DFDD  V_5;
	memset((&V_5), 0, sizeof(V_5));
	bool V_6 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	int32_t G_B10_0 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B10_1 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B10_2 = NULL;
	int32_t G_B9_0 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B9_1 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B9_2 = NULL;
	String_t* G_B11_0 = NULL;
	int32_t G_B11_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B11_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B11_3 = NULL;
	int32_t G_B13_0 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B13_1 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B13_2 = NULL;
	int32_t G_B12_0 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B12_1 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B12_2 = NULL;
	int32_t G_B14_0 = 0;
	int32_t G_B14_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B14_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B14_3 = NULL;
	int32_t G_B16_0 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B16_1 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B16_2 = NULL;
	int32_t G_B15_0 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B15_1 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B15_2 = NULL;
	int32_t G_B17_0 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B17_1 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B17_2 = NULL;
	String_t* G_B18_0 = NULL;
	int32_t G_B18_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B18_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B18_3 = NULL;
	int32_t G_B20_0 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B20_1 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B20_2 = NULL;
	int32_t G_B19_0 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B19_1 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B19_2 = NULL;
	int32_t G_B21_0 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B21_1 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B21_2 = NULL;
	String_t* G_B22_0 = NULL;
	int32_t G_B22_1 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B22_2 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B22_3 = NULL;
	{
		// bool isFront = false;
		V_0 = (bool)0;
		// if(cameraDevice.Device != null)
		VideoCameraDevice_tE030FD2425274ADA263F159372642355867E6018 * L_0 = __this->get_cameraDevice_11();
		NullCheck(L_0);
		CameraDevice_tC3CECA485A6FA987D93FB58151FC06EE0E4D8321 * L_1;
		L_1 = VideoCameraDevice_get_Device_m77FFDB8D31391BB2F320894375098D943EE2A1A9_inline(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0037;
		}
	}
	{
		// using (var cameraParameters = cameraDevice.Device.cameraParameters())
		VideoCameraDevice_tE030FD2425274ADA263F159372642355867E6018 * L_2 = __this->get_cameraDevice_11();
		NullCheck(L_2);
		CameraDevice_tC3CECA485A6FA987D93FB58151FC06EE0E4D8321 * L_3;
		L_3 = VideoCameraDevice_get_Device_m77FFDB8D31391BB2F320894375098D943EE2A1A9_inline(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		CameraParameters_t76FA28EFD269E4ADF063EB2FFA8A3DC01153BBFA * L_4;
		L_4 = VirtualFuncInvoker0< CameraParameters_t76FA28EFD269E4ADF063EB2FFA8A3DC01153BBFA * >::Invoke(20 /* easyar.CameraParameters easyar.CameraDevice::cameraParameters() */, L_3);
		V_2 = L_4;
	}

IL_0020:
	try
	{// begin try (depth: 1)
		{
			// if (cameraParameters.cameraDeviceType() == CameraDeviceType.Front)
			CameraParameters_t76FA28EFD269E4ADF063EB2FFA8A3DC01153BBFA * L_5 = V_2;
			NullCheck(L_5);
			int32_t L_6;
			L_6 = VirtualFuncInvoker0< int32_t >::Invoke(9 /* easyar.CameraDeviceType easyar.CameraParameters::cameraDeviceType() */, L_5);
			if ((!(((uint32_t)L_6) == ((uint32_t)2))))
			{
				goto IL_002b;
			}
		}

IL_0029:
		{
			// isFront = true;
			V_0 = (bool)1;
		}

IL_002b:
		{
			// }
			IL2CPP_LEAVE(0x37, FINALLY_002d);
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_002d;
	}

FINALLY_002d:
	{// begin finally (depth: 1)
		{
			CameraParameters_t76FA28EFD269E4ADF063EB2FFA8A3DC01153BBFA * L_7 = V_2;
			if (!L_7)
			{
				goto IL_0036;
			}
		}

IL_0030:
		{
			CameraParameters_t76FA28EFD269E4ADF063EB2FFA8A3DC01153BBFA * L_8 = V_2;
			NullCheck(L_8);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_8);
		}

IL_0036:
		{
			IL2CPP_END_FINALLY(45)
		}
	}// end finally (depth: 1)
	IL2CPP_CLEANUP(45)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x37, IL_0037)
	}

IL_0037:
	{
		// var statusText = "CenterMode: " + Session.CenterMode + Environment.NewLine +
		//     "CenterTarget: " + (Session.CenterTarget ? Session.CenterTarget.name : null) + Environment.NewLine +
		//     "HorizontalFlip: " + (isFront ? Session.HorizontalFlipFront : Session.HorizontalFlipNormal) + Environment.NewLine +
		//     "Camera: " + (cameraDevice && cameraDevice.enabled ? "On" : "Off") + Environment.NewLine +
		//     "Tracking: " + (imageTracker && imageTracker.enabled ? "On" : "Off") + Environment.NewLine + Environment.NewLine +
		//     "Target Load Status:" + Environment.NewLine;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_9 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)((int32_t)18));
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_10 = L_9;
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, _stringLiteral0E8CD1E34507F5A3FFA3D074EE3DF7B1F702458B);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral0E8CD1E34507F5A3FFA3D074EE3DF7B1F702458B);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_11 = L_10;
		ARSession_tD6A86CCAD93871B995E4B9FFAC634BBC5642CCAD * L_12 = __this->get_Session_4();
		NullCheck(L_12);
		int32_t* L_13 = L_12->get_address_of_CenterMode_4();
		RuntimeObject * L_14 = Box(ARCenterMode_t83FCE2DD4B9A00F624F9A3D05C96A4E1DD9AC61F_il2cpp_TypeInfo_var, L_13);
		NullCheck(L_14);
		String_t* L_15;
		L_15 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_14);
		*L_13 = *(int32_t*)UnBox(L_14);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_15);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_15);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_16 = L_11;
		String_t* L_17;
		L_17 = Environment_get_NewLine_mD145C8EE917C986BAA7C5243DEFAF4D333C521B4(/*hidden argument*/NULL);
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, L_17);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_17);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_18 = L_16;
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, _stringLiteral083AB95C507154B86F7218869F1C6B65C6886003);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral083AB95C507154B86F7218869F1C6B65C6886003);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_19 = L_18;
		ARSession_tD6A86CCAD93871B995E4B9FFAC634BBC5642CCAD * L_20 = __this->get_Session_4();
		NullCheck(L_20);
		TargetController_t063F5455F413C882C59737867A3E4D8B560C1B0A * L_21 = L_20->get_CenterTarget_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_22;
		L_22 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_21, /*hidden argument*/NULL);
		G_B9_0 = 4;
		G_B9_1 = L_19;
		G_B9_2 = L_19;
		if (L_22)
		{
			G_B10_0 = 4;
			G_B10_1 = L_19;
			G_B10_2 = L_19;
			goto IL_0086;
		}
	}
	{
		G_B11_0 = ((String_t*)(NULL));
		G_B11_1 = G_B9_0;
		G_B11_2 = G_B9_1;
		G_B11_3 = G_B9_2;
		goto IL_0096;
	}

IL_0086:
	{
		ARSession_tD6A86CCAD93871B995E4B9FFAC634BBC5642CCAD * L_23 = __this->get_Session_4();
		NullCheck(L_23);
		TargetController_t063F5455F413C882C59737867A3E4D8B560C1B0A * L_24 = L_23->get_CenterTarget_5();
		NullCheck(L_24);
		String_t* L_25;
		L_25 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_24, /*hidden argument*/NULL);
		G_B11_0 = L_25;
		G_B11_1 = G_B10_0;
		G_B11_2 = G_B10_1;
		G_B11_3 = G_B10_2;
	}

IL_0096:
	{
		NullCheck(G_B11_2);
		ArrayElementTypeCheck (G_B11_2, G_B11_0);
		(G_B11_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B11_1), (String_t*)G_B11_0);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_26 = G_B11_3;
		String_t* L_27;
		L_27 = Environment_get_NewLine_mD145C8EE917C986BAA7C5243DEFAF4D333C521B4(/*hidden argument*/NULL);
		NullCheck(L_26);
		ArrayElementTypeCheck (L_26, L_27);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)L_27);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_28 = L_26;
		NullCheck(L_28);
		ArrayElementTypeCheck (L_28, _stringLiteral24384261B6324D1B1FACC1EBCBFAEC5E59A0062B);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(6), (String_t*)_stringLiteral24384261B6324D1B1FACC1EBCBFAEC5E59A0062B);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_29 = L_28;
		bool L_30 = V_0;
		G_B12_0 = 7;
		G_B12_1 = L_29;
		G_B12_2 = L_29;
		if (L_30)
		{
			G_B13_0 = 7;
			G_B13_1 = L_29;
			G_B13_2 = L_29;
			goto IL_00b9;
		}
	}
	{
		ARSession_tD6A86CCAD93871B995E4B9FFAC634BBC5642CCAD * L_31 = __this->get_Session_4();
		NullCheck(L_31);
		int32_t L_32 = L_31->get_HorizontalFlipNormal_7();
		G_B14_0 = L_32;
		G_B14_1 = G_B12_0;
		G_B14_2 = G_B12_1;
		G_B14_3 = G_B12_2;
		goto IL_00c4;
	}

IL_00b9:
	{
		ARSession_tD6A86CCAD93871B995E4B9FFAC634BBC5642CCAD * L_33 = __this->get_Session_4();
		NullCheck(L_33);
		int32_t L_34 = L_33->get_HorizontalFlipFront_8();
		G_B14_0 = L_34;
		G_B14_1 = G_B13_0;
		G_B14_2 = G_B13_1;
		G_B14_3 = G_B13_2;
	}

IL_00c4:
	{
		V_3 = G_B14_0;
		RuntimeObject * L_35 = Box(ARHorizontalFlipMode_t353952F54B442ABEAA7856F4226E7847F3F1C399_il2cpp_TypeInfo_var, (&V_3));
		NullCheck(L_35);
		String_t* L_36;
		L_36 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_35);
		V_3 = *(int32_t*)UnBox(L_35);
		NullCheck(G_B14_2);
		ArrayElementTypeCheck (G_B14_2, L_36);
		(G_B14_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B14_1), (String_t*)L_36);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_37 = G_B14_3;
		String_t* L_38;
		L_38 = Environment_get_NewLine_mD145C8EE917C986BAA7C5243DEFAF4D333C521B4(/*hidden argument*/NULL);
		NullCheck(L_37);
		ArrayElementTypeCheck (L_37, L_38);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(8), (String_t*)L_38);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_39 = L_37;
		NullCheck(L_39);
		ArrayElementTypeCheck (L_39, _stringLiteral7A71A119AB19DAEDD0B973DCB57AA0B794DBFBBA);
		(L_39)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (String_t*)_stringLiteral7A71A119AB19DAEDD0B973DCB57AA0B794DBFBBA);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_40 = L_39;
		VideoCameraDevice_tE030FD2425274ADA263F159372642355867E6018 * L_41 = __this->get_cameraDevice_11();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_42;
		L_42 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_41, /*hidden argument*/NULL);
		G_B15_0 = ((int32_t)10);
		G_B15_1 = L_40;
		G_B15_2 = L_40;
		if (!L_42)
		{
			G_B16_0 = ((int32_t)10);
			G_B16_1 = L_40;
			G_B16_2 = L_40;
			goto IL_0101;
		}
	}
	{
		VideoCameraDevice_tE030FD2425274ADA263F159372642355867E6018 * L_43 = __this->get_cameraDevice_11();
		NullCheck(L_43);
		bool L_44;
		L_44 = Behaviour_get_enabled_m08077AB79934634E1EAE909C2B482BEF4C15A800(L_43, /*hidden argument*/NULL);
		G_B16_0 = G_B15_0;
		G_B16_1 = G_B15_1;
		G_B16_2 = G_B15_2;
		if (L_44)
		{
			G_B17_0 = G_B15_0;
			G_B17_1 = G_B15_1;
			G_B17_2 = G_B15_2;
			goto IL_0108;
		}
	}

IL_0101:
	{
		G_B18_0 = _stringLiteral7DB229E4B4513366157C0D536C533A2B6C5F7AA5;
		G_B18_1 = G_B16_0;
		G_B18_2 = G_B16_1;
		G_B18_3 = G_B16_2;
		goto IL_010d;
	}

IL_0108:
	{
		G_B18_0 = _stringLiteral616FA8FACA4BD63856D14D13CE36C30A22C4AE73;
		G_B18_1 = G_B17_0;
		G_B18_2 = G_B17_1;
		G_B18_3 = G_B17_2;
	}

IL_010d:
	{
		NullCheck(G_B18_2);
		ArrayElementTypeCheck (G_B18_2, G_B18_0);
		(G_B18_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B18_1), (String_t*)G_B18_0);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_45 = G_B18_3;
		String_t* L_46;
		L_46 = Environment_get_NewLine_mD145C8EE917C986BAA7C5243DEFAF4D333C521B4(/*hidden argument*/NULL);
		NullCheck(L_45);
		ArrayElementTypeCheck (L_45, L_46);
		(L_45)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)11)), (String_t*)L_46);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_47 = L_45;
		NullCheck(L_47);
		ArrayElementTypeCheck (L_47, _stringLiteralF7D70AB4110EC818FAF857316C4DE38C027FE186);
		(L_47)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)12)), (String_t*)_stringLiteralF7D70AB4110EC818FAF857316C4DE38C027FE186);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_48 = L_47;
		ImageTrackerFrameFilter_t38832986899AF907CF9BB3DED8A38F1EB6DC38BB * L_49 = __this->get_imageTracker_10();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_50;
		L_50 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_49, /*hidden argument*/NULL);
		G_B19_0 = ((int32_t)13);
		G_B19_1 = L_48;
		G_B19_2 = L_48;
		if (!L_50)
		{
			G_B20_0 = ((int32_t)13);
			G_B20_1 = L_48;
			G_B20_2 = L_48;
			goto IL_013d;
		}
	}
	{
		ImageTrackerFrameFilter_t38832986899AF907CF9BB3DED8A38F1EB6DC38BB * L_51 = __this->get_imageTracker_10();
		NullCheck(L_51);
		bool L_52;
		L_52 = Behaviour_get_enabled_m08077AB79934634E1EAE909C2B482BEF4C15A800(L_51, /*hidden argument*/NULL);
		G_B20_0 = G_B19_0;
		G_B20_1 = G_B19_1;
		G_B20_2 = G_B19_2;
		if (L_52)
		{
			G_B21_0 = G_B19_0;
			G_B21_1 = G_B19_1;
			G_B21_2 = G_B19_2;
			goto IL_0144;
		}
	}

IL_013d:
	{
		G_B22_0 = _stringLiteral7DB229E4B4513366157C0D536C533A2B6C5F7AA5;
		G_B22_1 = G_B20_0;
		G_B22_2 = G_B20_1;
		G_B22_3 = G_B20_2;
		goto IL_0149;
	}

IL_0144:
	{
		G_B22_0 = _stringLiteral616FA8FACA4BD63856D14D13CE36C30A22C4AE73;
		G_B22_1 = G_B21_0;
		G_B22_2 = G_B21_1;
		G_B22_3 = G_B21_2;
	}

IL_0149:
	{
		NullCheck(G_B22_2);
		ArrayElementTypeCheck (G_B22_2, G_B22_0);
		(G_B22_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B22_1), (String_t*)G_B22_0);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_53 = G_B22_3;
		String_t* L_54;
		L_54 = Environment_get_NewLine_mD145C8EE917C986BAA7C5243DEFAF4D333C521B4(/*hidden argument*/NULL);
		NullCheck(L_53);
		ArrayElementTypeCheck (L_53, L_54);
		(L_53)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)14)), (String_t*)L_54);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_55 = L_53;
		String_t* L_56;
		L_56 = Environment_get_NewLine_mD145C8EE917C986BAA7C5243DEFAF4D333C521B4(/*hidden argument*/NULL);
		NullCheck(L_55);
		ArrayElementTypeCheck (L_55, L_56);
		(L_55)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)15)), (String_t*)L_56);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_57 = L_55;
		NullCheck(L_57);
		ArrayElementTypeCheck (L_57, _stringLiteralEEE0FB26F879234275046023F3D7FEE278B1684C);
		(L_57)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)16)), (String_t*)_stringLiteralEEE0FB26F879234275046023F3D7FEE278B1684C);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_58 = L_57;
		String_t* L_59;
		L_59 = Environment_get_NewLine_mD145C8EE917C986BAA7C5243DEFAF4D333C521B4(/*hidden argument*/NULL);
		NullCheck(L_58);
		ArrayElementTypeCheck (L_58, L_59);
		(L_58)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)17)), (String_t*)L_59);
		String_t* L_60;
		L_60 = String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9(L_58, /*hidden argument*/NULL);
		V_1 = L_60;
		// foreach (var item in imageTargetControllers)
		Dictionary_2_t33723D7778E13B98CD0BE75946A95FFAD8CC07E5 * L_61 = __this->get_imageTargetControllers_7();
		NullCheck(L_61);
		Enumerator_t771777407FF5589AB133F1A819A3A050E7293A67  L_62;
		L_62 = Dictionary_2_GetEnumerator_m8E4E939B34C1FFFE6E6BC59A5FC062F126F5C320(L_61, /*hidden argument*/Dictionary_2_GetEnumerator_m8E4E939B34C1FFFE6E6BC59A5FC062F126F5C320_RuntimeMethod_var);
		V_4 = L_62;
	}

IL_0181:
	try
	{// begin try (depth: 1)
		{
			goto IL_01db;
		}

IL_0183:
		{
			// foreach (var item in imageTargetControllers)
			KeyValuePair_2_tCE1C71A7043B5E2EF1D939DF3F8E09D15391DFDD  L_63;
			L_63 = Enumerator_get_Current_mBB40B9605AF1EF1CF7CB9EBE731BFF124454E9D2_inline((Enumerator_t771777407FF5589AB133F1A819A3A050E7293A67 *)(&V_4), /*hidden argument*/Enumerator_get_Current_mBB40B9605AF1EF1CF7CB9EBE731BFF124454E9D2_RuntimeMethod_var);
			V_5 = L_63;
			// statusText += "\t" + item.Key.gameObject.name + ": " + item.Value + Environment.NewLine;
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_64 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)6);
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_65 = L_64;
			String_t* L_66 = V_1;
			NullCheck(L_65);
			ArrayElementTypeCheck (L_65, L_66);
			(L_65)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)L_66);
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_67 = L_65;
			NullCheck(L_67);
			ArrayElementTypeCheck (L_67, _stringLiteral24313380B89749FA23D81C8CFE7ECADF5F282DF3);
			(L_67)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral24313380B89749FA23D81C8CFE7ECADF5F282DF3);
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_68 = L_67;
			ImageTargetController_tE114A6E6910AF4B6A6206889F52DD2C4D15F094A * L_69;
			L_69 = KeyValuePair_2_get_Key_m907D63078F5F9090FA7E33719A0FFC649F4AB762_inline((KeyValuePair_2_tCE1C71A7043B5E2EF1D939DF3F8E09D15391DFDD *)(&V_5), /*hidden argument*/KeyValuePair_2_get_Key_m907D63078F5F9090FA7E33719A0FFC649F4AB762_RuntimeMethod_var);
			NullCheck(L_69);
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_70;
			L_70 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_69, /*hidden argument*/NULL);
			NullCheck(L_70);
			String_t* L_71;
			L_71 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_70, /*hidden argument*/NULL);
			NullCheck(L_68);
			ArrayElementTypeCheck (L_68, L_71);
			(L_68)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)L_71);
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_72 = L_68;
			NullCheck(L_72);
			ArrayElementTypeCheck (L_72, _stringLiteral1168E92C164109D6220480DEDA987085B2A21155);
			(L_72)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral1168E92C164109D6220480DEDA987085B2A21155);
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_73 = L_72;
			bool L_74;
			L_74 = KeyValuePair_2_get_Value_m4383D0C8C3CCE3CDCA9568C5F9CF6B5B9DC90883_inline((KeyValuePair_2_tCE1C71A7043B5E2EF1D939DF3F8E09D15391DFDD *)(&V_5), /*hidden argument*/KeyValuePair_2_get_Value_m4383D0C8C3CCE3CDCA9568C5F9CF6B5B9DC90883_RuntimeMethod_var);
			V_6 = L_74;
			String_t* L_75;
			L_75 = Boolean_ToString_m59BB8456DD05A874BBD756E57EA8AD983287015C((bool*)(&V_6), /*hidden argument*/NULL);
			NullCheck(L_73);
			ArrayElementTypeCheck (L_73, L_75);
			(L_73)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)L_75);
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_76 = L_73;
			String_t* L_77;
			L_77 = Environment_get_NewLine_mD145C8EE917C986BAA7C5243DEFAF4D333C521B4(/*hidden argument*/NULL);
			NullCheck(L_76);
			ArrayElementTypeCheck (L_76, L_77);
			(L_76)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)L_77);
			String_t* L_78;
			L_78 = String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9(L_76, /*hidden argument*/NULL);
			V_1 = L_78;
		}

IL_01db:
		{
			// foreach (var item in imageTargetControllers)
			bool L_79;
			L_79 = Enumerator_MoveNext_m9F5787C33BFE1EA8ECF433C93BAF8B5ED0ED1825((Enumerator_t771777407FF5589AB133F1A819A3A050E7293A67 *)(&V_4), /*hidden argument*/Enumerator_MoveNext_m9F5787C33BFE1EA8ECF433C93BAF8B5ED0ED1825_RuntimeMethod_var);
			if (L_79)
			{
				goto IL_0183;
			}
		}

IL_01e4:
		{
			IL2CPP_LEAVE(0x1F4, FINALLY_01e6);
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_01e6;
	}

FINALLY_01e6:
	{// begin finally (depth: 1)
		Enumerator_Dispose_m9AB85FA1393DFF10512CB0A6D93D623366D3045D((Enumerator_t771777407FF5589AB133F1A819A3A050E7293A67 *)(&V_4), /*hidden argument*/Enumerator_Dispose_m9AB85FA1393DFF10512CB0A6D93D623366D3045D_RuntimeMethod_var);
		IL2CPP_END_FINALLY(486)
	}// end finally (depth: 1)
	IL2CPP_CLEANUP(486)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x1F4, IL_01f4)
	}

IL_01f4:
	{
		// Status.text = statusText;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_80 = __this->get_Status_5();
		String_t* L_81 = V_1;
		NullCheck(L_80);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_80, L_81);
		// }
		return;
	}
}
// System.Void ImageTracking_ImageTarget.ImageTrackingSample::Tracking(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageTrackingSample_Tracking_m4DD424902731557F0E6671113B598881837FFB6C (ImageTrackingSample_tD24CBC2F8D4E9C4B5701BF28F183F65B77E4371F * __this, bool ___on0, const RuntimeMethod* method)
{
	{
		// imageTracker.enabled = on;
		ImageTrackerFrameFilter_t38832986899AF907CF9BB3DED8A38F1EB6DC38BB * L_0 = __this->get_imageTracker_10();
		bool L_1 = ___on0;
		NullCheck(L_0);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ImageTracking_ImageTarget.ImageTrackingSample::UnloadTargets()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageTrackingSample_UnloadTargets_m478011F00F106D4BA87CE45A9F1AC7925B9FC0BF (ImageTrackingSample_tD24CBC2F8D4E9C4B5701BF28F183F65B77E4371F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_GetEnumerator_m8E4E939B34C1FFFE6E6BC59A5FC062F126F5C320_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m9AB85FA1393DFF10512CB0A6D93D623366D3045D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m9F5787C33BFE1EA8ECF433C93BAF8B5ED0ED1825_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mBB40B9605AF1EF1CF7CB9EBE731BFF124454E9D2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_m907D63078F5F9090FA7E33719A0FFC649F4AB762_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t771777407FF5589AB133F1A819A3A050E7293A67  V_0;
	memset((&V_0), 0, sizeof(V_0));
	KeyValuePair_2_tCE1C71A7043B5E2EF1D939DF3F8E09D15391DFDD  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// foreach (var item in imageTargetControllers)
		Dictionary_2_t33723D7778E13B98CD0BE75946A95FFAD8CC07E5 * L_0 = __this->get_imageTargetControllers_7();
		NullCheck(L_0);
		Enumerator_t771777407FF5589AB133F1A819A3A050E7293A67  L_1;
		L_1 = Dictionary_2_GetEnumerator_m8E4E939B34C1FFFE6E6BC59A5FC062F126F5C320(L_0, /*hidden argument*/Dictionary_2_GetEnumerator_m8E4E939B34C1FFFE6E6BC59A5FC062F126F5C320_RuntimeMethod_var);
		V_0 = L_1;
	}

IL_000c:
	try
	{// begin try (depth: 1)
		{
			goto IL_0023;
		}

IL_000e:
		{
			// foreach (var item in imageTargetControllers)
			KeyValuePair_2_tCE1C71A7043B5E2EF1D939DF3F8E09D15391DFDD  L_2;
			L_2 = Enumerator_get_Current_mBB40B9605AF1EF1CF7CB9EBE731BFF124454E9D2_inline((Enumerator_t771777407FF5589AB133F1A819A3A050E7293A67 *)(&V_0), /*hidden argument*/Enumerator_get_Current_mBB40B9605AF1EF1CF7CB9EBE731BFF124454E9D2_RuntimeMethod_var);
			V_1 = L_2;
			// item.Key.Tracker = null;
			ImageTargetController_tE114A6E6910AF4B6A6206889F52DD2C4D15F094A * L_3;
			L_3 = KeyValuePair_2_get_Key_m907D63078F5F9090FA7E33719A0FFC649F4AB762_inline((KeyValuePair_2_tCE1C71A7043B5E2EF1D939DF3F8E09D15391DFDD *)(&V_1), /*hidden argument*/KeyValuePair_2_get_Key_m907D63078F5F9090FA7E33719A0FFC649F4AB762_RuntimeMethod_var);
			NullCheck(L_3);
			ImageTargetController_set_Tracker_m696FD5271D0AE2CBE1875018734D456FEF3D0618(L_3, (ImageTrackerFrameFilter_t38832986899AF907CF9BB3DED8A38F1EB6DC38BB *)NULL, /*hidden argument*/NULL);
		}

IL_0023:
		{
			// foreach (var item in imageTargetControllers)
			bool L_4;
			L_4 = Enumerator_MoveNext_m9F5787C33BFE1EA8ECF433C93BAF8B5ED0ED1825((Enumerator_t771777407FF5589AB133F1A819A3A050E7293A67 *)(&V_0), /*hidden argument*/Enumerator_MoveNext_m9F5787C33BFE1EA8ECF433C93BAF8B5ED0ED1825_RuntimeMethod_var);
			if (L_4)
			{
				goto IL_000e;
			}
		}

IL_002c:
		{
			IL2CPP_LEAVE(0x3C, FINALLY_002e);
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_002e;
	}

FINALLY_002e:
	{// begin finally (depth: 1)
		Enumerator_Dispose_m9AB85FA1393DFF10512CB0A6D93D623366D3045D((Enumerator_t771777407FF5589AB133F1A819A3A050E7293A67 *)(&V_0), /*hidden argument*/Enumerator_Dispose_m9AB85FA1393DFF10512CB0A6D93D623366D3045D_RuntimeMethod_var);
		IL2CPP_END_FINALLY(46)
	}// end finally (depth: 1)
	IL2CPP_CLEANUP(46)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x3C, IL_003c)
	}

IL_003c:
	{
		// }
		return;
	}
}
// System.Void ImageTracking_ImageTarget.ImageTrackingSample::LoadTargets()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageTrackingSample_LoadTargets_m152259A177B851735A75914AB9E50AF759D0998F (ImageTrackingSample_tD24CBC2F8D4E9C4B5701BF28F183F65B77E4371F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_GetEnumerator_m8E4E939B34C1FFFE6E6BC59A5FC062F126F5C320_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m9AB85FA1393DFF10512CB0A6D93D623366D3045D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m9F5787C33BFE1EA8ECF433C93BAF8B5ED0ED1825_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mBB40B9605AF1EF1CF7CB9EBE731BFF124454E9D2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_m907D63078F5F9090FA7E33719A0FFC649F4AB762_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t771777407FF5589AB133F1A819A3A050E7293A67  V_0;
	memset((&V_0), 0, sizeof(V_0));
	KeyValuePair_2_tCE1C71A7043B5E2EF1D939DF3F8E09D15391DFDD  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// foreach (var item in imageTargetControllers)
		Dictionary_2_t33723D7778E13B98CD0BE75946A95FFAD8CC07E5 * L_0 = __this->get_imageTargetControllers_7();
		NullCheck(L_0);
		Enumerator_t771777407FF5589AB133F1A819A3A050E7293A67  L_1;
		L_1 = Dictionary_2_GetEnumerator_m8E4E939B34C1FFFE6E6BC59A5FC062F126F5C320(L_0, /*hidden argument*/Dictionary_2_GetEnumerator_m8E4E939B34C1FFFE6E6BC59A5FC062F126F5C320_RuntimeMethod_var);
		V_0 = L_1;
	}

IL_000c:
	try
	{// begin try (depth: 1)
		{
			goto IL_0028;
		}

IL_000e:
		{
			// foreach (var item in imageTargetControllers)
			KeyValuePair_2_tCE1C71A7043B5E2EF1D939DF3F8E09D15391DFDD  L_2;
			L_2 = Enumerator_get_Current_mBB40B9605AF1EF1CF7CB9EBE731BFF124454E9D2_inline((Enumerator_t771777407FF5589AB133F1A819A3A050E7293A67 *)(&V_0), /*hidden argument*/Enumerator_get_Current_mBB40B9605AF1EF1CF7CB9EBE731BFF124454E9D2_RuntimeMethod_var);
			V_1 = L_2;
			// item.Key.Tracker = imageTracker;
			ImageTargetController_tE114A6E6910AF4B6A6206889F52DD2C4D15F094A * L_3;
			L_3 = KeyValuePair_2_get_Key_m907D63078F5F9090FA7E33719A0FFC649F4AB762_inline((KeyValuePair_2_tCE1C71A7043B5E2EF1D939DF3F8E09D15391DFDD *)(&V_1), /*hidden argument*/KeyValuePair_2_get_Key_m907D63078F5F9090FA7E33719A0FFC649F4AB762_RuntimeMethod_var);
			ImageTrackerFrameFilter_t38832986899AF907CF9BB3DED8A38F1EB6DC38BB * L_4 = __this->get_imageTracker_10();
			NullCheck(L_3);
			ImageTargetController_set_Tracker_m696FD5271D0AE2CBE1875018734D456FEF3D0618(L_3, L_4, /*hidden argument*/NULL);
		}

IL_0028:
		{
			// foreach (var item in imageTargetControllers)
			bool L_5;
			L_5 = Enumerator_MoveNext_m9F5787C33BFE1EA8ECF433C93BAF8B5ED0ED1825((Enumerator_t771777407FF5589AB133F1A819A3A050E7293A67 *)(&V_0), /*hidden argument*/Enumerator_MoveNext_m9F5787C33BFE1EA8ECF433C93BAF8B5ED0ED1825_RuntimeMethod_var);
			if (L_5)
			{
				goto IL_000e;
			}
		}

IL_0031:
		{
			IL2CPP_LEAVE(0x41, FINALLY_0033);
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0033;
	}

FINALLY_0033:
	{// begin finally (depth: 1)
		Enumerator_Dispose_m9AB85FA1393DFF10512CB0A6D93D623366D3045D((Enumerator_t771777407FF5589AB133F1A819A3A050E7293A67 *)(&V_0), /*hidden argument*/Enumerator_Dispose_m9AB85FA1393DFF10512CB0A6D93D623366D3045D_RuntimeMethod_var);
		IL2CPP_END_FINALLY(51)
	}// end finally (depth: 1)
	IL2CPP_CLEANUP(51)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x41, IL_0041)
	}

IL_0041:
	{
		// }
		return;
	}
}
// System.Void ImageTracking_ImageTarget.ImageTrackingSample::SwitchCenterMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageTrackingSample_SwitchCenterMode_m410555F345E5FF4D94210B89CA26C6BF462616DC (ImageTrackingSample_tD24CBC2F8D4E9C4B5701BF28F183F65B77E4371F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARCenterMode_t83FCE2DD4B9A00F624F9A3D05C96A4E1DD9AC61F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enum_t23B90B40F60E677A8025267341651C94AE079CDA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}

IL_0000:
	{
		// Session.CenterMode = (ARSession.ARCenterMode)(((int)Session.CenterMode + 1) % Enum.GetValues(typeof(ARSession.ARCenterMode)).Length);
		ARSession_tD6A86CCAD93871B995E4B9FFAC634BBC5642CCAD * L_0 = __this->get_Session_4();
		ARSession_tD6A86CCAD93871B995E4B9FFAC634BBC5642CCAD * L_1 = __this->get_Session_4();
		NullCheck(L_1);
		int32_t L_2 = L_1->get_CenterMode_4();
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_3 = { reinterpret_cast<intptr_t> (ARCenterMode_t83FCE2DD4B9A00F624F9A3D05C96A4E1DD9AC61F_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4;
		L_4 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_il2cpp_TypeInfo_var);
		RuntimeArray * L_5;
		L_5 = Enum_GetValues_m8EEC6B32F297FDB2F7375DC8B197E0E1AB8643BD(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		int32_t L_6;
		L_6 = Array_get_Length_m12B3E61F1BF9880AB252640D69269B49665C0A10(L_5, /*hidden argument*/NULL);
		NullCheck(L_0);
		L_0->set_CenterMode_4(((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1))%(int32_t)L_6)));
		// if (Session.CenterMode == ARSession.ARCenterMode.SpecificTarget)
		ARSession_tD6A86CCAD93871B995E4B9FFAC634BBC5642CCAD * L_7 = __this->get_Session_4();
		NullCheck(L_7);
		int32_t L_8 = L_7->get_CenterMode_4();
		if ((!(((uint32_t)L_8) == ((uint32_t)2))))
		{
			goto IL_004c;
		}
	}
	{
		// Session.CenterTarget = controllerNamecard;
		ARSession_tD6A86CCAD93871B995E4B9FFAC634BBC5642CCAD * L_9 = __this->get_Session_4();
		ImageTargetController_tE114A6E6910AF4B6A6206889F52DD2C4D15F094A * L_10 = __this->get_controllerNamecard_8();
		NullCheck(L_9);
		L_9->set_CenterTarget_5(L_10);
	}

IL_004c:
	{
		// if (Session.CenterMode == ARSession.ARCenterMode.FirstTarget ||
		//     Session.CenterMode == ARSession.ARCenterMode.Camera ||
		//     Session.CenterMode == ARSession.ARCenterMode.SpecificTarget)
		ARSession_tD6A86CCAD93871B995E4B9FFAC634BBC5642CCAD * L_11 = __this->get_Session_4();
		NullCheck(L_11);
		int32_t L_12 = L_11->get_CenterMode_4();
		if (!L_12)
		{
			goto IL_0075;
		}
	}
	{
		ARSession_tD6A86CCAD93871B995E4B9FFAC634BBC5642CCAD * L_13 = __this->get_Session_4();
		NullCheck(L_13);
		int32_t L_14 = L_13->get_CenterMode_4();
		if ((((int32_t)L_14) == ((int32_t)1)))
		{
			goto IL_0075;
		}
	}
	{
		ARSession_tD6A86CCAD93871B995E4B9FFAC634BBC5642CCAD * L_15 = __this->get_Session_4();
		NullCheck(L_15);
		int32_t L_16 = L_15->get_CenterMode_4();
		if ((!(((uint32_t)L_16) == ((uint32_t)2))))
		{
			goto IL_0000;
		}
	}

IL_0075:
	{
		// }
		return;
	}
}
// System.Void ImageTracking_ImageTarget.ImageTrackingSample::EnableCamera(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageTrackingSample_EnableCamera_mEBFB62687E4BE66A12B287346BDF0BB084862932 (ImageTrackingSample_tD24CBC2F8D4E9C4B5701BF28F183F65B77E4371F * __this, bool ___enable0, const RuntimeMethod* method)
{
	{
		// cameraDevice.enabled = enable;
		VideoCameraDevice_tE030FD2425274ADA263F159372642355867E6018 * L_0 = __this->get_cameraDevice_11();
		bool L_1 = ___enable0;
		NullCheck(L_0);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ImageTracking_ImageTarget.ImageTrackingSample::SwitchHFlipMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageTrackingSample_SwitchHFlipMode_m03EE3C0727F4F4A653F5D819885767BF263112A9 (ImageTrackingSample_tD24CBC2F8D4E9C4B5701BF28F183F65B77E4371F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ARHorizontalFlipMode_t353952F54B442ABEAA7856F4226E7847F3F1C399_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enum_t23B90B40F60E677A8025267341651C94AE079CDA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CameraParameters_t76FA28EFD269E4ADF063EB2FFA8A3DC01153BBFA * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		// if (cameraDevice.Device == null)
		VideoCameraDevice_tE030FD2425274ADA263F159372642355867E6018 * L_0 = __this->get_cameraDevice_11();
		NullCheck(L_0);
		CameraDevice_tC3CECA485A6FA987D93FB58151FC06EE0E4D8321 * L_1;
		L_1 = VideoCameraDevice_get_Device_m77FFDB8D31391BB2F320894375098D943EE2A1A9_inline(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_000e;
		}
	}
	{
		// return;
		return;
	}

IL_000e:
	{
		// using (var cameraParameters = cameraDevice.Device.cameraParameters())
		VideoCameraDevice_tE030FD2425274ADA263F159372642355867E6018 * L_2 = __this->get_cameraDevice_11();
		NullCheck(L_2);
		CameraDevice_tC3CECA485A6FA987D93FB58151FC06EE0E4D8321 * L_3;
		L_3 = VideoCameraDevice_get_Device_m77FFDB8D31391BB2F320894375098D943EE2A1A9_inline(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		CameraParameters_t76FA28EFD269E4ADF063EB2FFA8A3DC01153BBFA * L_4;
		L_4 = VirtualFuncInvoker0< CameraParameters_t76FA28EFD269E4ADF063EB2FFA8A3DC01153BBFA * >::Invoke(20 /* easyar.CameraParameters easyar.CameraDevice::cameraParameters() */, L_3);
		V_0 = L_4;
	}

IL_001f:
	try
	{// begin try (depth: 1)
		{
			// if (cameraParameters.cameraDeviceType() == CameraDeviceType.Front)
			CameraParameters_t76FA28EFD269E4ADF063EB2FFA8A3DC01153BBFA * L_5 = V_0;
			NullCheck(L_5);
			int32_t L_6;
			L_6 = VirtualFuncInvoker0< int32_t >::Invoke(9 /* easyar.CameraDeviceType easyar.CameraParameters::cameraDeviceType() */, L_5);
			if ((!(((uint32_t)L_6) == ((uint32_t)2))))
			{
				goto IL_0057;
			}
		}

IL_0028:
		{
			// Session.HorizontalFlipFront = (ARSession.ARHorizontalFlipMode)(((int)Session.HorizontalFlipFront + 1) % Enum.GetValues(typeof(ARSession.ARHorizontalFlipMode)).Length);
			ARSession_tD6A86CCAD93871B995E4B9FFAC634BBC5642CCAD * L_7 = __this->get_Session_4();
			ARSession_tD6A86CCAD93871B995E4B9FFAC634BBC5642CCAD * L_8 = __this->get_Session_4();
			NullCheck(L_8);
			int32_t L_9 = L_8->get_HorizontalFlipFront_8();
			RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_10 = { reinterpret_cast<intptr_t> (ARHorizontalFlipMode_t353952F54B442ABEAA7856F4226E7847F3F1C399_0_0_0_var) };
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_11;
			L_11 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_10, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_il2cpp_TypeInfo_var);
			RuntimeArray * L_12;
			L_12 = Enum_GetValues_m8EEC6B32F297FDB2F7375DC8B197E0E1AB8643BD(L_11, /*hidden argument*/NULL);
			NullCheck(L_12);
			int32_t L_13;
			L_13 = Array_get_Length_m12B3E61F1BF9880AB252640D69269B49665C0A10(L_12, /*hidden argument*/NULL);
			NullCheck(L_7);
			L_7->set_HorizontalFlipFront_8(((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1))%(int32_t)L_13)));
			// }
			IL2CPP_LEAVE(0x90, FINALLY_0086);
		}

IL_0057:
		{
			// Session.HorizontalFlipNormal = (ARSession.ARHorizontalFlipMode)(((int)Session.HorizontalFlipNormal + 1) % Enum.GetValues(typeof(ARSession.ARHorizontalFlipMode)).Length);
			ARSession_tD6A86CCAD93871B995E4B9FFAC634BBC5642CCAD * L_14 = __this->get_Session_4();
			ARSession_tD6A86CCAD93871B995E4B9FFAC634BBC5642CCAD * L_15 = __this->get_Session_4();
			NullCheck(L_15);
			int32_t L_16 = L_15->get_HorizontalFlipNormal_7();
			RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_17 = { reinterpret_cast<intptr_t> (ARHorizontalFlipMode_t353952F54B442ABEAA7856F4226E7847F3F1C399_0_0_0_var) };
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_18;
			L_18 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_17, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_il2cpp_TypeInfo_var);
			RuntimeArray * L_19;
			L_19 = Enum_GetValues_m8EEC6B32F297FDB2F7375DC8B197E0E1AB8643BD(L_18, /*hidden argument*/NULL);
			NullCheck(L_19);
			int32_t L_20;
			L_20 = Array_get_Length_m12B3E61F1BF9880AB252640D69269B49665C0A10(L_19, /*hidden argument*/NULL);
			NullCheck(L_14);
			L_14->set_HorizontalFlipNormal_7(((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)1))%(int32_t)L_20)));
			// }
			IL2CPP_LEAVE(0x90, FINALLY_0086);
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0086;
	}

FINALLY_0086:
	{// begin finally (depth: 1)
		{
			CameraParameters_t76FA28EFD269E4ADF063EB2FFA8A3DC01153BBFA * L_21 = V_0;
			if (!L_21)
			{
				goto IL_008f;
			}
		}

IL_0089:
		{
			CameraParameters_t76FA28EFD269E4ADF063EB2FFA8A3DC01153BBFA * L_22 = V_0;
			NullCheck(L_22);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_22);
		}

IL_008f:
		{
			IL2CPP_END_FINALLY(134)
		}
	}// end finally (depth: 1)
	IL2CPP_CLEANUP(134)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x90, IL_0090)
	}

IL_0090:
	{
		// }
		return;
	}
}
// System.Void ImageTracking_ImageTarget.ImageTrackingSample::NextCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageTrackingSample_NextCamera_m5D4BAABE88C12ADF4DF54B363FD567665E9A17EE (ImageTrackingSample_tD24CBC2F8D4E9C4B5701BF28F183F65B77E4371F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral05CD887F615D875D8D276E57FE6EA68A4DA458B4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9781C415DF8DCDF90F2B330680B9D230ED6E94EF);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (!cameraDevice || cameraDevice.Device == null)
		VideoCameraDevice_tE030FD2425274ADA263F159372642355867E6018 * L_0 = __this->get_cameraDevice_11();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		VideoCameraDevice_tE030FD2425274ADA263F159372642355867E6018 * L_2 = __this->get_cameraDevice_11();
		NullCheck(L_2);
		CameraDevice_tC3CECA485A6FA987D93FB58151FC06EE0E4D8321 * L_3;
		L_3 = VideoCameraDevice_get_Device_m77FFDB8D31391BB2F320894375098D943EE2A1A9_inline(L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_001b;
		}
	}

IL_001a:
	{
		// return;
		return;
	}

IL_001b:
	{
		// if (CameraDevice.cameraCount() == 0)
		int32_t L_4;
		L_4 = CameraDevice_cameraCount_m80CC35FC3320A4FD56414C3430F6502E3D29A29C(/*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_003d;
		}
	}
	{
		// GUIPopup.EnqueueMessage("Camera unavailable", 3);
		GUIPopup_EnqueueMessage_m5522999693F7256EFFCD9C351C221E81119A5201(_stringLiteral05CD887F615D875D8D276E57FE6EA68A4DA458B4, (3.0f), /*hidden argument*/NULL);
		// cameraDevice.Close();
		VideoCameraDevice_tE030FD2425274ADA263F159372642355867E6018 * L_5 = __this->get_cameraDevice_11();
		NullCheck(L_5);
		VirtualActionInvoker0::Invoke(15 /* System.Void easyar.CameraSource::Close() */, L_5);
		// return;
		return;
	}

IL_003d:
	{
		// var index = cameraDevice.Device.index();
		VideoCameraDevice_tE030FD2425274ADA263F159372642355867E6018 * L_6 = __this->get_cameraDevice_11();
		NullCheck(L_6);
		CameraDevice_tC3CECA485A6FA987D93FB58151FC06EE0E4D8321 * L_7;
		L_7 = VideoCameraDevice_get_Device_m77FFDB8D31391BB2F320894375098D943EE2A1A9_inline(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		int32_t L_8;
		L_8 = VirtualFuncInvoker0< int32_t >::Invoke(18 /* System.Int32 easyar.CameraDevice::index() */, L_7);
		V_0 = L_8;
		// index = (index + 1) % CameraDevice.cameraCount();
		int32_t L_9 = V_0;
		int32_t L_10;
		L_10 = CameraDevice_cameraCount_m80CC35FC3320A4FD56414C3430F6502E3D29A29C(/*hidden argument*/NULL);
		V_0 = ((int32_t)((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1))%(int32_t)L_10));
		// cameraDevice.CameraOpenMethod = VideoCameraDevice.CameraDeviceOpenMethod.DeviceIndex;
		VideoCameraDevice_tE030FD2425274ADA263F159372642355867E6018 * L_11 = __this->get_cameraDevice_11();
		NullCheck(L_11);
		L_11->set_CameraOpenMethod_10(1);
		// cameraDevice.CameraIndex = index;
		VideoCameraDevice_tE030FD2425274ADA263F159372642355867E6018 * L_12 = __this->get_cameraDevice_11();
		int32_t L_13 = V_0;
		NullCheck(L_12);
		L_12->set_CameraIndex_12(L_13);
		// GUIPopup.EnqueueMessage("Switch to camera index: " + index, 3);
		String_t* L_14;
		L_14 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_0), /*hidden argument*/NULL);
		String_t* L_15;
		L_15 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral9781C415DF8DCDF90F2B330680B9D230ED6E94EF, L_14, /*hidden argument*/NULL);
		GUIPopup_EnqueueMessage_m5522999693F7256EFFCD9C351C221E81119A5201(L_15, (3.0f), /*hidden argument*/NULL);
		// cameraDevice.Close();
		VideoCameraDevice_tE030FD2425274ADA263F159372642355867E6018 * L_16 = __this->get_cameraDevice_11();
		NullCheck(L_16);
		VirtualActionInvoker0::Invoke(15 /* System.Void easyar.CameraSource::Close() */, L_16);
		// cameraDevice.Open();
		VideoCameraDevice_tE030FD2425274ADA263F159372642355867E6018 * L_17 = __this->get_cameraDevice_11();
		NullCheck(L_17);
		VirtualActionInvoker0::Invoke(14 /* System.Void easyar.CameraSource::Open() */, L_17);
		// }
		return;
	}
}
// System.Void ImageTracking_ImageTarget.ImageTrackingSample::CreateTargets()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageTrackingSample_CreateTargets_mD01B48EAB7B3D102D10C89A7B571B6835F7DCF5B (ImageTrackingSample_tD24CBC2F8D4E9C4B5701BF28F183F65B77E4371F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonUtility_FromJson_TisImageJson_t5E105E6DB96A0ED2FD3FF970160F15E8FA1C3FBE_m725F03E9AE1BBF6547E9EDDE653CC3F47CBBF5C3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral19283BE63ADDEA9CBFC12EBFA62FE7E55DACF193);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B622538F8D6EF362BBE0A6AE380DA4313075685);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral206F3739AB9C2465DE900934CBBFEF89F05FE721);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2AE63833CD2080313CFBF6FB7EAE61276E4B5ED4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5543CB947D1FE978A2DD95D4508E315A8B749B25);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral84F4E5C538709D63C98F6DD552A0D906C004EC4E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA4E02162CD27965406A2EB59A9DEEC044B27AB4A);
		s_Il2CppMethodInitialized = true;
	}
	ImageTargetController_tE114A6E6910AF4B6A6206889F52DD2C4D15F094A * V_0 = NULL;
	ImageFileU5BU5D_t74471C0FC6238B2E40ABBB894C4A12B113FBDB16* V_1 = NULL;
	int32_t V_2 = 0;
	ImageFile_t5D3F3D881BABF7E68D51721CC307EB7B52709229 * V_3 = NULL;
	{
		// var targetController = CreateTargetNode("ImageTarget-argame00");
		ImageTargetController_tE114A6E6910AF4B6A6206889F52DD2C4D15F094A * L_0;
		L_0 = ImageTrackingSample_CreateTargetNode_m650FFCAD7A72E26F95C04AAFD5462BF8778E2B43(__this, _stringLiteral84F4E5C538709D63C98F6DD552A0D906C004EC4E, /*hidden argument*/NULL);
		V_0 = L_0;
		// targetController.Tracker = imageTracker;
		ImageTargetController_tE114A6E6910AF4B6A6206889F52DD2C4D15F094A * L_1 = V_0;
		ImageTrackerFrameFilter_t38832986899AF907CF9BB3DED8A38F1EB6DC38BB * L_2 = __this->get_imageTracker_10();
		NullCheck(L_1);
		ImageTargetController_set_Tracker_m696FD5271D0AE2CBE1875018734D456FEF3D0618(L_1, L_2, /*hidden argument*/NULL);
		// targetController.SourceType = ImageTargetController.DataSource.ImageFile;
		ImageTargetController_tE114A6E6910AF4B6A6206889F52DD2C4D15F094A * L_3 = V_0;
		NullCheck(L_3);
		L_3->set_SourceType_12(0);
		// targetController.ImageFileSource.PathType = PathType.StreamingAssets;
		ImageTargetController_tE114A6E6910AF4B6A6206889F52DD2C4D15F094A * L_4 = V_0;
		NullCheck(L_4);
		ImageFileSourceData_tCA1858F7E5439C496A73D580D43C3E16F78FE35F * L_5 = L_4->get_ImageFileSource_13();
		NullCheck(L_5);
		L_5->set_PathType_0(1);
		// targetController.ImageFileSource.Path = "sightplus/argame00.jpg";
		ImageTargetController_tE114A6E6910AF4B6A6206889F52DD2C4D15F094A * L_6 = V_0;
		NullCheck(L_6);
		ImageFileSourceData_tCA1858F7E5439C496A73D580D43C3E16F78FE35F * L_7 = L_6->get_ImageFileSource_13();
		NullCheck(L_7);
		L_7->set_Path_1(_stringLiteral5543CB947D1FE978A2DD95D4508E315A8B749B25);
		// targetController.ImageFileSource.Name = "argame00";
		ImageTargetController_tE114A6E6910AF4B6A6206889F52DD2C4D15F094A * L_8 = V_0;
		NullCheck(L_8);
		ImageFileSourceData_tCA1858F7E5439C496A73D580D43C3E16F78FE35F * L_9 = L_8->get_ImageFileSource_13();
		NullCheck(L_9);
		L_9->set_Name_2(_stringLiteralA4E02162CD27965406A2EB59A9DEEC044B27AB4A);
		// targetController.ImageFileSource.Scale = 0.1f;
		ImageTargetController_tE114A6E6910AF4B6A6206889F52DD2C4D15F094A * L_10 = V_0;
		NullCheck(L_10);
		ImageFileSourceData_tCA1858F7E5439C496A73D580D43C3E16F78FE35F * L_11 = L_10->get_ImageFileSource_13();
		NullCheck(L_11);
		L_11->set_Scale_3((0.100000001f));
		// GameObject duck02 = Instantiate(Resources.Load("duck02")) as GameObject;
		Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * L_12;
		L_12 = Resources_Load_m011631B3740AFD38D496838F10D3DA635A061120(_stringLiteral19283BE63ADDEA9CBFC12EBFA62FE7E55DACF193, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * L_13;
		L_13 = Object_Instantiate_m565A02EA45AEA7442E19FDC8E82695491938CB5A(L_12, /*hidden argument*/NULL);
		// duck02.transform.parent = targetController.gameObject.transform;
		NullCheck(((GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)IsInstSealed((RuntimeObject*)L_13, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var)));
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_14;
		L_14 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(((GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)IsInstSealed((RuntimeObject*)L_13, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		ImageTargetController_tE114A6E6910AF4B6A6206889F52DD2C4D15F094A * L_15 = V_0;
		NullCheck(L_15);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_16;
		L_16 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_15, /*hidden argument*/NULL);
		NullCheck(L_16);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_17;
		L_17 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_16, /*hidden argument*/NULL);
		NullCheck(L_14);
		Transform_set_parent_mEAE304E1A804E8B83054CEECB5BF1E517196EC13(L_14, L_17, /*hidden argument*/NULL);
		// var imageJosn = JsonUtility.FromJson<ImageJson>(@"
		// {
		//     ""images"" :
		//     [
		//         {
		//             ""image"" : ""sightplus/argame01.png"",
		//             ""name"" : ""argame01""
		//         },
		//         {
		//             ""image"" : ""sightplus/argame02.jpg"",
		//             ""name"" : ""argame02"",
		//             ""scale"" : 0.2
		//         },
		//         {
		//             ""image"" : ""sightplus/argame03.jpg"",
		//             ""name"" : ""argame03"",
		//             ""scale"" : 1,
		//             ""uid"" : ""uid string will be ignored""
		//         }
		//     ]
		// }");
		ImageJson_t5E105E6DB96A0ED2FD3FF970160F15E8FA1C3FBE * L_18;
		L_18 = JsonUtility_FromJson_TisImageJson_t5E105E6DB96A0ED2FD3FF970160F15E8FA1C3FBE_m725F03E9AE1BBF6547E9EDDE653CC3F47CBBF5C3(_stringLiteral2AE63833CD2080313CFBF6FB7EAE61276E4B5ED4, /*hidden argument*/JsonUtility_FromJson_TisImageJson_t5E105E6DB96A0ED2FD3FF970160F15E8FA1C3FBE_m725F03E9AE1BBF6547E9EDDE653CC3F47CBBF5C3_RuntimeMethod_var);
		// foreach (var image in imageJosn.images)
		NullCheck(L_18);
		ImageFileU5BU5D_t74471C0FC6238B2E40ABBB894C4A12B113FBDB16* L_19 = L_18->get_images_0();
		V_1 = L_19;
		V_2 = 0;
		goto IL_012e;
	}

IL_009b:
	{
		// foreach (var image in imageJosn.images)
		ImageFileU5BU5D_t74471C0FC6238B2E40ABBB894C4A12B113FBDB16* L_20 = V_1;
		int32_t L_21 = V_2;
		NullCheck(L_20);
		int32_t L_22 = L_21;
		ImageFile_t5D3F3D881BABF7E68D51721CC307EB7B52709229 * L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		V_3 = L_23;
		// targetController = CreateTargetNode("ImageTarget-" + image.name);
		ImageFile_t5D3F3D881BABF7E68D51721CC307EB7B52709229 * L_24 = V_3;
		NullCheck(L_24);
		String_t* L_25 = L_24->get_name_1();
		String_t* L_26;
		L_26 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral206F3739AB9C2465DE900934CBBFEF89F05FE721, L_25, /*hidden argument*/NULL);
		ImageTargetController_tE114A6E6910AF4B6A6206889F52DD2C4D15F094A * L_27;
		L_27 = ImageTrackingSample_CreateTargetNode_m650FFCAD7A72E26F95C04AAFD5462BF8778E2B43(__this, L_26, /*hidden argument*/NULL);
		V_0 = L_27;
		// targetController.Tracker = imageTracker;
		ImageTargetController_tE114A6E6910AF4B6A6206889F52DD2C4D15F094A * L_28 = V_0;
		ImageTrackerFrameFilter_t38832986899AF907CF9BB3DED8A38F1EB6DC38BB * L_29 = __this->get_imageTracker_10();
		NullCheck(L_28);
		ImageTargetController_set_Tracker_m696FD5271D0AE2CBE1875018734D456FEF3D0618(L_28, L_29, /*hidden argument*/NULL);
		// targetController.ImageFileSource.PathType = PathType.StreamingAssets;
		ImageTargetController_tE114A6E6910AF4B6A6206889F52DD2C4D15F094A * L_30 = V_0;
		NullCheck(L_30);
		ImageFileSourceData_tCA1858F7E5439C496A73D580D43C3E16F78FE35F * L_31 = L_30->get_ImageFileSource_13();
		NullCheck(L_31);
		L_31->set_PathType_0(1);
		// targetController.ImageFileSource.Path = image.image;
		ImageTargetController_tE114A6E6910AF4B6A6206889F52DD2C4D15F094A * L_32 = V_0;
		NullCheck(L_32);
		ImageFileSourceData_tCA1858F7E5439C496A73D580D43C3E16F78FE35F * L_33 = L_32->get_ImageFileSource_13();
		ImageFile_t5D3F3D881BABF7E68D51721CC307EB7B52709229 * L_34 = V_3;
		NullCheck(L_34);
		String_t* L_35 = L_34->get_image_0();
		NullCheck(L_33);
		L_33->set_Path_1(L_35);
		// targetController.ImageFileSource.Name = image.name;
		ImageTargetController_tE114A6E6910AF4B6A6206889F52DD2C4D15F094A * L_36 = V_0;
		NullCheck(L_36);
		ImageFileSourceData_tCA1858F7E5439C496A73D580D43C3E16F78FE35F * L_37 = L_36->get_ImageFileSource_13();
		ImageFile_t5D3F3D881BABF7E68D51721CC307EB7B52709229 * L_38 = V_3;
		NullCheck(L_38);
		String_t* L_39 = L_38->get_name_1();
		NullCheck(L_37);
		L_37->set_Name_2(L_39);
		// targetController.ImageFileSource.Scale = image.scale;
		ImageTargetController_tE114A6E6910AF4B6A6206889F52DD2C4D15F094A * L_40 = V_0;
		NullCheck(L_40);
		ImageFileSourceData_tCA1858F7E5439C496A73D580D43C3E16F78FE35F * L_41 = L_40->get_ImageFileSource_13();
		ImageFile_t5D3F3D881BABF7E68D51721CC307EB7B52709229 * L_42 = V_3;
		NullCheck(L_42);
		float L_43 = L_42->get_scale_2();
		NullCheck(L_41);
		L_41->set_Scale_3(L_43);
		// var duck03 = Instantiate(Resources.Load("duck03")) as GameObject;
		Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * L_44;
		L_44 = Resources_Load_m011631B3740AFD38D496838F10D3DA635A061120(_stringLiteral1B622538F8D6EF362BBE0A6AE380DA4313075685, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * L_45;
		L_45 = Object_Instantiate_m565A02EA45AEA7442E19FDC8E82695491938CB5A(L_44, /*hidden argument*/NULL);
		// duck03.transform.parent = targetController.gameObject.transform;
		NullCheck(((GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)IsInstSealed((RuntimeObject*)L_45, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var)));
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_46;
		L_46 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(((GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)IsInstSealed((RuntimeObject*)L_45, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		ImageTargetController_tE114A6E6910AF4B6A6206889F52DD2C4D15F094A * L_47 = V_0;
		NullCheck(L_47);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_48;
		L_48 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_47, /*hidden argument*/NULL);
		NullCheck(L_48);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_49;
		L_49 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_48, /*hidden argument*/NULL);
		NullCheck(L_46);
		Transform_set_parent_mEAE304E1A804E8B83054CEECB5BF1E517196EC13(L_46, L_49, /*hidden argument*/NULL);
		int32_t L_50 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_50, (int32_t)1));
	}

IL_012e:
	{
		// foreach (var image in imageJosn.images)
		int32_t L_51 = V_2;
		ImageFileU5BU5D_t74471C0FC6238B2E40ABBB894C4A12B113FBDB16* L_52 = V_1;
		NullCheck(L_52);
		if ((((int32_t)L_51) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_52)->max_length))))))
		{
			goto IL_009b;
		}
	}
	{
		// }
		return;
	}
}
// easyar.ImageTargetController ImageTracking_ImageTarget.ImageTrackingSample::CreateTargetNode(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ImageTargetController_tE114A6E6910AF4B6A6206889F52DD2C4D15F094A * ImageTrackingSample_CreateTargetNode_m650FFCAD7A72E26F95C04AAFD5462BF8778E2B43 (ImageTrackingSample_tD24CBC2F8D4E9C4B5701BF28F183F65B77E4371F * __this, String_t* ___targetName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_mCE55410BC242D9CAECB52D0BCA4BAE953398BF28_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisImageTargetController_tE114A6E6910AF4B6A6206889F52DD2C4D15F094A_m36A09AC1060111D52C131101177EF68C6A7C502D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ImageTargetController_tE114A6E6910AF4B6A6206889F52DD2C4D15F094A * V_0 = NULL;
	{
		// GameObject go = new GameObject(targetName);
		String_t* L_0 = ___targetName0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)il2cpp_codegen_object_new(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		GameObject__ctor_mDF8BF31EAE3E03F24421531B25FB4BEDB7C87144(L_1, L_0, /*hidden argument*/NULL);
		// var targetController = go.AddComponent<ImageTargetController>();
		NullCheck(L_1);
		ImageTargetController_tE114A6E6910AF4B6A6206889F52DD2C4D15F094A * L_2;
		L_2 = GameObject_AddComponent_TisImageTargetController_tE114A6E6910AF4B6A6206889F52DD2C4D15F094A_m36A09AC1060111D52C131101177EF68C6A7C502D(L_1, /*hidden argument*/GameObject_AddComponent_TisImageTargetController_tE114A6E6910AF4B6A6206889F52DD2C4D15F094A_m36A09AC1060111D52C131101177EF68C6A7C502D_RuntimeMethod_var);
		V_0 = L_2;
		// AddTargetControllerEvents(targetController);
		ImageTargetController_tE114A6E6910AF4B6A6206889F52DD2C4D15F094A * L_3 = V_0;
		ImageTrackingSample_AddTargetControllerEvents_mF682613B55F1433787D8222FDFF6B567C4D6E0A3(__this, L_3, /*hidden argument*/NULL);
		// imageTargetControllers[targetController] = false;
		Dictionary_2_t33723D7778E13B98CD0BE75946A95FFAD8CC07E5 * L_4 = __this->get_imageTargetControllers_7();
		ImageTargetController_tE114A6E6910AF4B6A6206889F52DD2C4D15F094A * L_5 = V_0;
		NullCheck(L_4);
		Dictionary_2_set_Item_mCE55410BC242D9CAECB52D0BCA4BAE953398BF28(L_4, L_5, (bool)0, /*hidden argument*/Dictionary_2_set_Item_mCE55410BC242D9CAECB52D0BCA4BAE953398BF28_RuntimeMethod_var);
		// return targetController;
		ImageTargetController_tE114A6E6910AF4B6A6206889F52DD2C4D15F094A * L_6 = V_0;
		return L_6;
	}
}
// System.Void ImageTracking_ImageTarget.ImageTrackingSample::AddTargetControllerEvents(easyar.ImageTargetController)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageTrackingSample_AddTargetControllerEvents_mF682613B55F1433787D8222FDFF6B567C4D6E0A3 (ImageTrackingSample_tD24CBC2F8D4E9C4B5701BF28F183F65B77E4371F * __this, ImageTargetController_tE114A6E6910AF4B6A6206889F52DD2C4D15F094A * ___controller0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2__ctor_m1869DFB1B7F135D3A64B8923A3404D9D5E84D017_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_tFE34E0ECF3448AAF964BE269E354A55B12FF498B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass19_0_U3CAddTargetControllerEventsU3Eb__0_mC017439BFBDBB5995BD79EAF3863F9D7745ED68F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass19_0_U3CAddTargetControllerEventsU3Eb__1_m05BB69536FC7115E9C1ECCE817FB005CA7A5A3C9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass19_0_U3CAddTargetControllerEventsU3Eb__2_mCDA2350B496E513951712A55D98F56895FA30325_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass19_0_U3CAddTargetControllerEventsU3Eb__3_m7FD7635161087A61906866A384AF6EA9C85EFA2C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass19_0_tAC486BFFECAC899048DCD1077A01E0A9987F7983_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass19_0_tAC486BFFECAC899048DCD1077A01E0A9987F7983 * V_0 = NULL;
	{
		U3CU3Ec__DisplayClass19_0_tAC486BFFECAC899048DCD1077A01E0A9987F7983 * L_0 = (U3CU3Ec__DisplayClass19_0_tAC486BFFECAC899048DCD1077A01E0A9987F7983 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass19_0_tAC486BFFECAC899048DCD1077A01E0A9987F7983_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass19_0__ctor_mE3E24097B8CC99E4D414DF010F59C9A12101A559(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass19_0_tAC486BFFECAC899048DCD1077A01E0A9987F7983 * L_1 = V_0;
		ImageTargetController_tE114A6E6910AF4B6A6206889F52DD2C4D15F094A * L_2 = ___controller0;
		NullCheck(L_1);
		L_1->set_controller_0(L_2);
		U3CU3Ec__DisplayClass19_0_tAC486BFFECAC899048DCD1077A01E0A9987F7983 * L_3 = V_0;
		NullCheck(L_3);
		L_3->set_U3CU3E4__this_1(__this);
		// if (!controller)
		U3CU3Ec__DisplayClass19_0_tAC486BFFECAC899048DCD1077A01E0A9987F7983 * L_4 = V_0;
		NullCheck(L_4);
		ImageTargetController_tE114A6E6910AF4B6A6206889F52DD2C4D15F094A * L_5 = L_4->get_controller_0();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_5, /*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_0022;
		}
	}
	{
		// return;
		return;
	}

IL_0022:
	{
		// controller.TargetFound += () =>
		// {
		//     Debug.LogFormat("Found target {{id = {0}, name = {1}}}", controller.Target.runtimeID(), controller.Target.name());
		// };
		U3CU3Ec__DisplayClass19_0_tAC486BFFECAC899048DCD1077A01E0A9987F7983 * L_7 = V_0;
		NullCheck(L_7);
		ImageTargetController_tE114A6E6910AF4B6A6206889F52DD2C4D15F094A * L_8 = L_7->get_controller_0();
		U3CU3Ec__DisplayClass19_0_tAC486BFFECAC899048DCD1077A01E0A9987F7983 * L_9 = V_0;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_10 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_10, L_9, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass19_0_U3CAddTargetControllerEventsU3Eb__0_mC017439BFBDBB5995BD79EAF3863F9D7745ED68F_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_8);
		TargetController_add_TargetFound_mBF555608DE5FF83FF7086834DE72F040981DA6CC(L_8, L_10, /*hidden argument*/NULL);
		// controller.TargetLost += () =>
		// {
		//     Debug.LogFormat("Lost target {{id = {0}, name = {1}}}", controller.Target.runtimeID(), controller.Target.name());
		// };
		U3CU3Ec__DisplayClass19_0_tAC486BFFECAC899048DCD1077A01E0A9987F7983 * L_11 = V_0;
		NullCheck(L_11);
		ImageTargetController_tE114A6E6910AF4B6A6206889F52DD2C4D15F094A * L_12 = L_11->get_controller_0();
		U3CU3Ec__DisplayClass19_0_tAC486BFFECAC899048DCD1077A01E0A9987F7983 * L_13 = V_0;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_14 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_14, L_13, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass19_0_U3CAddTargetControllerEventsU3Eb__1_m05BB69536FC7115E9C1ECCE817FB005CA7A5A3C9_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_12);
		TargetController_add_TargetLost_m196F18A27B139113BD8CC326773B8341C188B574(L_12, L_14, /*hidden argument*/NULL);
		// controller.TargetLoad += (Target target, bool status) =>
		// {
		//     imageTargetControllers[controller] = status ? true : imageTargetControllers[controller];
		//     Debug.LogFormat("Load target {{id = {0}, name = {1}, size = {2}}} into {3} => {4}", target.runtimeID(), target.name(), controller.Size, controller.Tracker.name, status);
		// };
		U3CU3Ec__DisplayClass19_0_tAC486BFFECAC899048DCD1077A01E0A9987F7983 * L_15 = V_0;
		NullCheck(L_15);
		ImageTargetController_tE114A6E6910AF4B6A6206889F52DD2C4D15F094A * L_16 = L_15->get_controller_0();
		U3CU3Ec__DisplayClass19_0_tAC486BFFECAC899048DCD1077A01E0A9987F7983 * L_17 = V_0;
		Action_2_tFE34E0ECF3448AAF964BE269E354A55B12FF498B * L_18 = (Action_2_tFE34E0ECF3448AAF964BE269E354A55B12FF498B *)il2cpp_codegen_object_new(Action_2_tFE34E0ECF3448AAF964BE269E354A55B12FF498B_il2cpp_TypeInfo_var);
		Action_2__ctor_m1869DFB1B7F135D3A64B8923A3404D9D5E84D017(L_18, L_17, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass19_0_U3CAddTargetControllerEventsU3Eb__2_mCDA2350B496E513951712A55D98F56895FA30325_RuntimeMethod_var), /*hidden argument*/Action_2__ctor_m1869DFB1B7F135D3A64B8923A3404D9D5E84D017_RuntimeMethod_var);
		NullCheck(L_16);
		ImageTargetController_add_TargetLoad_m94E48618FD79E4D972EFD15DA84DD72F75060116(L_16, L_18, /*hidden argument*/NULL);
		// controller.TargetUnload += (Target target, bool status) =>
		// {
		//     imageTargetControllers[controller] = status ? false : imageTargetControllers[controller];
		//     Debug.LogFormat("Unload target {{id = {0}, name = {1}}} => {2}", target.runtimeID(), target.name(), status);
		// };
		U3CU3Ec__DisplayClass19_0_tAC486BFFECAC899048DCD1077A01E0A9987F7983 * L_19 = V_0;
		NullCheck(L_19);
		ImageTargetController_tE114A6E6910AF4B6A6206889F52DD2C4D15F094A * L_20 = L_19->get_controller_0();
		U3CU3Ec__DisplayClass19_0_tAC486BFFECAC899048DCD1077A01E0A9987F7983 * L_21 = V_0;
		Action_2_tFE34E0ECF3448AAF964BE269E354A55B12FF498B * L_22 = (Action_2_tFE34E0ECF3448AAF964BE269E354A55B12FF498B *)il2cpp_codegen_object_new(Action_2_tFE34E0ECF3448AAF964BE269E354A55B12FF498B_il2cpp_TypeInfo_var);
		Action_2__ctor_m1869DFB1B7F135D3A64B8923A3404D9D5E84D017(L_22, L_21, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass19_0_U3CAddTargetControllerEventsU3Eb__3_m7FD7635161087A61906866A384AF6EA9C85EFA2C_RuntimeMethod_var), /*hidden argument*/Action_2__ctor_m1869DFB1B7F135D3A64B8923A3404D9D5E84D017_RuntimeMethod_var);
		NullCheck(L_20);
		ImageTargetController_add_TargetUnload_mE2CCF32A06471A3E22DA9A468AD1475AF6033A93(L_20, L_22, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ImageTracking_ImageTarget.ImageTrackingSample::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageTrackingSample__ctor_m12B06CD1B4B999751557E7D2E05107F9FF5EE2F9 (ImageTrackingSample_tD24CBC2F8D4E9C4B5701BF28F183F65B77E4371F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mCD11050E009992EEF66A6AC46DB6F0491E615CB7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t33723D7778E13B98CD0BE75946A95FFAD8CC07E5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private Dictionary<ImageTargetController, bool> imageTargetControllers = new Dictionary<ImageTargetController, bool>();
		Dictionary_2_t33723D7778E13B98CD0BE75946A95FFAD8CC07E5 * L_0 = (Dictionary_2_t33723D7778E13B98CD0BE75946A95FFAD8CC07E5 *)il2cpp_codegen_object_new(Dictionary_2_t33723D7778E13B98CD0BE75946A95FFAD8CC07E5_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mCD11050E009992EEF66A6AC46DB6F0491E615CB7(L_0, /*hidden argument*/Dictionary_2__ctor_mCD11050E009992EEF66A6AC46DB6F0491E615CB7_RuntimeMethod_var);
		__this->set_imageTargetControllers_7(L_0);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ImageTracking_ImageTarget.ImageTrackingSample/<>c__DisplayClass19_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass19_0__ctor_mE3E24097B8CC99E4D414DF010F59C9A12101A559 (U3CU3Ec__DisplayClass19_0_tAC486BFFECAC899048DCD1077A01E0A9987F7983 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ImageTracking_ImageTarget.ImageTrackingSample/<>c__DisplayClass19_0::<AddTargetControllerEvents>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass19_0_U3CAddTargetControllerEventsU3Eb__0_mC017439BFBDBB5995BD79EAF3863F9D7745ED68F (U3CU3Ec__DisplayClass19_0_tAC486BFFECAC899048DCD1077A01E0A9987F7983 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB0410D7021B5FCF2EF5873BC8F8101B9AE4FEB04);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.LogFormat("Found target {{id = {0}, name = {1}}}", controller.Target.runtimeID(), controller.Target.name());
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = L_0;
		ImageTargetController_tE114A6E6910AF4B6A6206889F52DD2C4D15F094A * L_2 = __this->get_controller_0();
		NullCheck(L_2);
		ImageTarget_tA8C5FC0A5A35FC9E978EA583695F80FA45E66F70 * L_3;
		L_3 = ImageTargetController_get_Target_mA05E98E932BFBF4F270B0E020517404165627CC6_inline(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		int32_t L_4;
		L_4 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 easyar.Target::runtimeID() */, L_3);
		int32_t L_5 = L_4;
		RuntimeObject * L_6 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_5);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_6);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_6);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_7 = L_1;
		ImageTargetController_tE114A6E6910AF4B6A6206889F52DD2C4D15F094A * L_8 = __this->get_controller_0();
		NullCheck(L_8);
		ImageTarget_tA8C5FC0A5A35FC9E978EA583695F80FA45E66F70 * L_9;
		L_9 = ImageTargetController_get_Target_mA05E98E932BFBF4F270B0E020517404165627CC6_inline(L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		String_t* L_10;
		L_10 = VirtualFuncInvoker0< String_t* >::Invoke(8 /* System.String easyar.Target::name() */, L_9);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_10);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_10);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogFormat_m3FD4ED373B54BC92F95360449859CD95D45D73C6(_stringLiteralB0410D7021B5FCF2EF5873BC8F8101B9AE4FEB04, L_7, /*hidden argument*/NULL);
		// };
		return;
	}
}
// System.Void ImageTracking_ImageTarget.ImageTrackingSample/<>c__DisplayClass19_0::<AddTargetControllerEvents>b__1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass19_0_U3CAddTargetControllerEventsU3Eb__1_m05BB69536FC7115E9C1ECCE817FB005CA7A5A3C9 (U3CU3Ec__DisplayClass19_0_tAC486BFFECAC899048DCD1077A01E0A9987F7983 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5E3F345A25DD79391E7D2F5A1FB17A6998C39DDC);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.LogFormat("Lost target {{id = {0}, name = {1}}}", controller.Target.runtimeID(), controller.Target.name());
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = L_0;
		ImageTargetController_tE114A6E6910AF4B6A6206889F52DD2C4D15F094A * L_2 = __this->get_controller_0();
		NullCheck(L_2);
		ImageTarget_tA8C5FC0A5A35FC9E978EA583695F80FA45E66F70 * L_3;
		L_3 = ImageTargetController_get_Target_mA05E98E932BFBF4F270B0E020517404165627CC6_inline(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		int32_t L_4;
		L_4 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 easyar.Target::runtimeID() */, L_3);
		int32_t L_5 = L_4;
		RuntimeObject * L_6 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_5);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_6);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_6);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_7 = L_1;
		ImageTargetController_tE114A6E6910AF4B6A6206889F52DD2C4D15F094A * L_8 = __this->get_controller_0();
		NullCheck(L_8);
		ImageTarget_tA8C5FC0A5A35FC9E978EA583695F80FA45E66F70 * L_9;
		L_9 = ImageTargetController_get_Target_mA05E98E932BFBF4F270B0E020517404165627CC6_inline(L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		String_t* L_10;
		L_10 = VirtualFuncInvoker0< String_t* >::Invoke(8 /* System.String easyar.Target::name() */, L_9);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_10);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_10);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogFormat_m3FD4ED373B54BC92F95360449859CD95D45D73C6(_stringLiteral5E3F345A25DD79391E7D2F5A1FB17A6998C39DDC, L_7, /*hidden argument*/NULL);
		// };
		return;
	}
}
// System.Void ImageTracking_ImageTarget.ImageTrackingSample/<>c__DisplayClass19_0::<AddTargetControllerEvents>b__2(easyar.Target,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass19_0_U3CAddTargetControllerEventsU3Eb__2_mCDA2350B496E513951712A55D98F56895FA30325 (U3CU3Ec__DisplayClass19_0_tAC486BFFECAC899048DCD1077A01E0A9987F7983 * __this, Target_t88F948B9DEF619469285A1458CE49CE869CBEAD7 * ___target0, bool ___status1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m3789FE3DCE0BB8925C674AAE9B067AD0BEEB59A2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_mCE55410BC242D9CAECB52D0BCA4BAE953398BF28_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7E892D89E76900AA0C9D21D4E503234EAADD3377);
		s_Il2CppMethodInitialized = true;
	}
	ImageTargetController_tE114A6E6910AF4B6A6206889F52DD2C4D15F094A * G_B2_0 = NULL;
	Dictionary_2_t33723D7778E13B98CD0BE75946A95FFAD8CC07E5 * G_B2_1 = NULL;
	ImageTargetController_tE114A6E6910AF4B6A6206889F52DD2C4D15F094A * G_B1_0 = NULL;
	Dictionary_2_t33723D7778E13B98CD0BE75946A95FFAD8CC07E5 * G_B1_1 = NULL;
	int32_t G_B3_0 = 0;
	ImageTargetController_tE114A6E6910AF4B6A6206889F52DD2C4D15F094A * G_B3_1 = NULL;
	Dictionary_2_t33723D7778E13B98CD0BE75946A95FFAD8CC07E5 * G_B3_2 = NULL;
	{
		// imageTargetControllers[controller] = status ? true : imageTargetControllers[controller];
		ImageTrackingSample_tD24CBC2F8D4E9C4B5701BF28F183F65B77E4371F * L_0 = __this->get_U3CU3E4__this_1();
		NullCheck(L_0);
		Dictionary_2_t33723D7778E13B98CD0BE75946A95FFAD8CC07E5 * L_1 = L_0->get_imageTargetControllers_7();
		ImageTargetController_tE114A6E6910AF4B6A6206889F52DD2C4D15F094A * L_2 = __this->get_controller_0();
		bool L_3 = ___status1;
		G_B1_0 = L_2;
		G_B1_1 = L_1;
		if (L_3)
		{
			G_B2_0 = L_2;
			G_B2_1 = L_1;
			goto IL_002c;
		}
	}
	{
		ImageTrackingSample_tD24CBC2F8D4E9C4B5701BF28F183F65B77E4371F * L_4 = __this->get_U3CU3E4__this_1();
		NullCheck(L_4);
		Dictionary_2_t33723D7778E13B98CD0BE75946A95FFAD8CC07E5 * L_5 = L_4->get_imageTargetControllers_7();
		ImageTargetController_tE114A6E6910AF4B6A6206889F52DD2C4D15F094A * L_6 = __this->get_controller_0();
		NullCheck(L_5);
		bool L_7;
		L_7 = Dictionary_2_get_Item_m3789FE3DCE0BB8925C674AAE9B067AD0BEEB59A2(L_5, L_6, /*hidden argument*/Dictionary_2_get_Item_m3789FE3DCE0BB8925C674AAE9B067AD0BEEB59A2_RuntimeMethod_var);
		G_B3_0 = ((int32_t)(L_7));
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		goto IL_002d;
	}

IL_002c:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}

IL_002d:
	{
		NullCheck(G_B3_2);
		Dictionary_2_set_Item_mCE55410BC242D9CAECB52D0BCA4BAE953398BF28(G_B3_2, G_B3_1, (bool)G_B3_0, /*hidden argument*/Dictionary_2_set_Item_mCE55410BC242D9CAECB52D0BCA4BAE953398BF28_RuntimeMethod_var);
		// Debug.LogFormat("Load target {{id = {0}, name = {1}, size = {2}}} into {3} => {4}", target.runtimeID(), target.name(), controller.Size, controller.Tracker.name, status);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_8 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)5);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_9 = L_8;
		Target_t88F948B9DEF619469285A1458CE49CE869CBEAD7 * L_10 = ___target0;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 easyar.Target::runtimeID() */, L_10);
		int32_t L_12 = L_11;
		RuntimeObject * L_13 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_12);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_13);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_13);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_14 = L_9;
		Target_t88F948B9DEF619469285A1458CE49CE869CBEAD7 * L_15 = ___target0;
		NullCheck(L_15);
		String_t* L_16;
		L_16 = VirtualFuncInvoker0< String_t* >::Invoke(8 /* System.String easyar.Target::name() */, L_15);
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_16);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_16);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_17 = L_14;
		ImageTargetController_tE114A6E6910AF4B6A6206889F52DD2C4D15F094A * L_18 = __this->get_controller_0();
		NullCheck(L_18);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_19;
		L_19 = ImageTargetController_get_Size_mD092F83CFB3A039DCB8CBE67ED234293B157393A(L_18, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_20 = L_19;
		RuntimeObject * L_21 = Box(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_il2cpp_TypeInfo_var, &L_20);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_21);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_21);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_22 = L_17;
		ImageTargetController_tE114A6E6910AF4B6A6206889F52DD2C4D15F094A * L_23 = __this->get_controller_0();
		NullCheck(L_23);
		ImageTrackerFrameFilter_t38832986899AF907CF9BB3DED8A38F1EB6DC38BB * L_24;
		L_24 = ImageTargetController_get_Tracker_mD2EB76EC46A56BBC54637488A2A511A2322EDEAF_inline(L_23, /*hidden argument*/NULL);
		NullCheck(L_24);
		String_t* L_25;
		L_25 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_24, /*hidden argument*/NULL);
		NullCheck(L_22);
		ArrayElementTypeCheck (L_22, L_25);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_25);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_26 = L_22;
		bool L_27 = ___status1;
		bool L_28 = L_27;
		RuntimeObject * L_29 = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &L_28);
		NullCheck(L_26);
		ArrayElementTypeCheck (L_26, L_29);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)L_29);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogFormat_m3FD4ED373B54BC92F95360449859CD95D45D73C6(_stringLiteral7E892D89E76900AA0C9D21D4E503234EAADD3377, L_26, /*hidden argument*/NULL);
		// };
		return;
	}
}
// System.Void ImageTracking_ImageTarget.ImageTrackingSample/<>c__DisplayClass19_0::<AddTargetControllerEvents>b__3(easyar.Target,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass19_0_U3CAddTargetControllerEventsU3Eb__3_m7FD7635161087A61906866A384AF6EA9C85EFA2C (U3CU3Ec__DisplayClass19_0_tAC486BFFECAC899048DCD1077A01E0A9987F7983 * __this, Target_t88F948B9DEF619469285A1458CE49CE869CBEAD7 * ___target0, bool ___status1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m3789FE3DCE0BB8925C674AAE9B067AD0BEEB59A2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_mCE55410BC242D9CAECB52D0BCA4BAE953398BF28_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF716B0D4627FA118D23A0EBFC6830217C9CC2C23);
		s_Il2CppMethodInitialized = true;
	}
	ImageTargetController_tE114A6E6910AF4B6A6206889F52DD2C4D15F094A * G_B2_0 = NULL;
	Dictionary_2_t33723D7778E13B98CD0BE75946A95FFAD8CC07E5 * G_B2_1 = NULL;
	ImageTargetController_tE114A6E6910AF4B6A6206889F52DD2C4D15F094A * G_B1_0 = NULL;
	Dictionary_2_t33723D7778E13B98CD0BE75946A95FFAD8CC07E5 * G_B1_1 = NULL;
	int32_t G_B3_0 = 0;
	ImageTargetController_tE114A6E6910AF4B6A6206889F52DD2C4D15F094A * G_B3_1 = NULL;
	Dictionary_2_t33723D7778E13B98CD0BE75946A95FFAD8CC07E5 * G_B3_2 = NULL;
	{
		// imageTargetControllers[controller] = status ? false : imageTargetControllers[controller];
		ImageTrackingSample_tD24CBC2F8D4E9C4B5701BF28F183F65B77E4371F * L_0 = __this->get_U3CU3E4__this_1();
		NullCheck(L_0);
		Dictionary_2_t33723D7778E13B98CD0BE75946A95FFAD8CC07E5 * L_1 = L_0->get_imageTargetControllers_7();
		ImageTargetController_tE114A6E6910AF4B6A6206889F52DD2C4D15F094A * L_2 = __this->get_controller_0();
		bool L_3 = ___status1;
		G_B1_0 = L_2;
		G_B1_1 = L_1;
		if (L_3)
		{
			G_B2_0 = L_2;
			G_B2_1 = L_1;
			goto IL_002c;
		}
	}
	{
		ImageTrackingSample_tD24CBC2F8D4E9C4B5701BF28F183F65B77E4371F * L_4 = __this->get_U3CU3E4__this_1();
		NullCheck(L_4);
		Dictionary_2_t33723D7778E13B98CD0BE75946A95FFAD8CC07E5 * L_5 = L_4->get_imageTargetControllers_7();
		ImageTargetController_tE114A6E6910AF4B6A6206889F52DD2C4D15F094A * L_6 = __this->get_controller_0();
		NullCheck(L_5);
		bool L_7;
		L_7 = Dictionary_2_get_Item_m3789FE3DCE0BB8925C674AAE9B067AD0BEEB59A2(L_5, L_6, /*hidden argument*/Dictionary_2_get_Item_m3789FE3DCE0BB8925C674AAE9B067AD0BEEB59A2_RuntimeMethod_var);
		G_B3_0 = ((int32_t)(L_7));
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		goto IL_002d;
	}

IL_002c:
	{
		G_B3_0 = 0;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}

IL_002d:
	{
		NullCheck(G_B3_2);
		Dictionary_2_set_Item_mCE55410BC242D9CAECB52D0BCA4BAE953398BF28(G_B3_2, G_B3_1, (bool)G_B3_0, /*hidden argument*/Dictionary_2_set_Item_mCE55410BC242D9CAECB52D0BCA4BAE953398BF28_RuntimeMethod_var);
		// Debug.LogFormat("Unload target {{id = {0}, name = {1}}} => {2}", target.runtimeID(), target.name(), status);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_8 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)3);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_9 = L_8;
		Target_t88F948B9DEF619469285A1458CE49CE869CBEAD7 * L_10 = ___target0;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = VirtualFuncInvoker0< int32_t >::Invoke(6 /* System.Int32 easyar.Target::runtimeID() */, L_10);
		int32_t L_12 = L_11;
		RuntimeObject * L_13 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_12);
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_13);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_13);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_14 = L_9;
		Target_t88F948B9DEF619469285A1458CE49CE869CBEAD7 * L_15 = ___target0;
		NullCheck(L_15);
		String_t* L_16;
		L_16 = VirtualFuncInvoker0< String_t* >::Invoke(8 /* System.String easyar.Target::name() */, L_15);
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_16);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_16);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_17 = L_14;
		bool L_18 = ___status1;
		bool L_19 = L_18;
		RuntimeObject * L_20 = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &L_19);
		NullCheck(L_17);
		ArrayElementTypeCheck (L_17, L_20);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_20);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogFormat_m3FD4ED373B54BC92F95360449859CD95D45D73C6(_stringLiteralF716B0D4627FA118D23A0EBFC6830217C9CC2C23, L_17, /*hidden argument*/NULL);
		// };
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ImageTracking_ImageTarget.ImageTrackingSample/<>c__DisplayClass8_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass8_0__ctor_mE2625B6A7B899B3C2C37D98682AB3F6289C0DA7C (U3CU3Ec__DisplayClass8_0_t60374A69B9DB8DDCABB6BB8C04FB7087A115C827 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ImageTracking_ImageTarget.ImageTrackingSample/<>c__DisplayClass8_0::<Awake>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass8_0_U3CAwakeU3Eb__0_mD689E032F8DE15E3D2F0EC2254C713E91534B653 (U3CU3Ec__DisplayClass8_0_t60374A69B9DB8DDCABB6BB8C04FB7087A115C827 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// button.onClick.AddListener(() => { UnityEngine.SceneManagement.SceneManager.LoadScene(launcher); });
		String_t* L_0 = __this->get_launcher_0();
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(L_0, /*hidden argument*/NULL);
		// button.onClick.AddListener(() => { UnityEngine.SceneManagement.SceneManager.LoadScene(launcher); });
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ImageTracking_ImageTarget.ImageTrackingSample/ImageFile::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageFile__ctor_m6F575F1CC5F7EC4745071332C37E51EAAAFCFECB (ImageFile_t5D3F3D881BABF7E68D51721CC307EB7B52709229 * __this, const RuntimeMethod* method)
{
	{
		// public float scale = 0.1f;
		__this->set_scale_2((0.100000001f));
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ImageTracking_ImageTarget.ImageTrackingSample/ImageJson::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImageJson__ctor_m2BFDCE60A1A9D9B189336230F9037029AAD6B82C (ImageJson_t5E105E6DB96A0ED2FD3FF970160F15E8FA1C3FBE * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * Button_get_onClick_m28BD8C670676D4E2B292B5A7F59387D4BF61F8F4_inline (Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * __this, const RuntimeMethod* method)
{
	{
		// get { return m_OnClick; }
		ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * L_0 = __this->get_m_OnClick_20();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CameraDevice_tC3CECA485A6FA987D93FB58151FC06EE0E4D8321 * VideoCameraDevice_get_Device_m77FFDB8D31391BB2F320894375098D943EE2A1A9_inline (VideoCameraDevice_tE030FD2425274ADA263F159372642355867E6018 * __this, const RuntimeMethod* method)
{
	{
		// public CameraDevice Device { get; private set; }
		CameraDevice_tC3CECA485A6FA987D93FB58151FC06EE0E4D8321 * L_0 = __this->get_U3CDeviceU3Ek__BackingField_7();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ImageTarget_tA8C5FC0A5A35FC9E978EA583695F80FA45E66F70 * ImageTargetController_get_Target_mA05E98E932BFBF4F270B0E020517404165627CC6_inline (ImageTargetController_tE114A6E6910AF4B6A6206889F52DD2C4D15F094A * __this, const RuntimeMethod* method)
{
	{
		// public ImageTarget Target { get; private set; }
		ImageTarget_tA8C5FC0A5A35FC9E978EA583695F80FA45E66F70 * L_0 = __this->get_U3CTargetU3Ek__BackingField_11();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ImageTrackerFrameFilter_t38832986899AF907CF9BB3DED8A38F1EB6DC38BB * ImageTargetController_get_Tracker_mD2EB76EC46A56BBC54637488A2A511A2322EDEAF_inline (ImageTargetController_tE114A6E6910AF4B6A6206889F52DD2C4D15F094A * __this, const RuntimeMethod* method)
{
	{
		// return tracker;
		ImageTrackerFrameFilter_t38832986899AF907CF9BB3DED8A38F1EB6DC38BB * L_0 = __this->get_tracker_17();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tF48C056DF83BF9AF3BAE277B149EC5E4E436BD1A  Enumerator_get_Current_m1C83309EB4D7074A7C08B98AB84BD64926DE0113_gshared_inline (Enumerator_t7CF1480E8063E004FE105D7E9D3A68CD5AC7D851 * __this, const RuntimeMethod* method)
{
	{
		KeyValuePair_2_tF48C056DF83BF9AF3BAE277B149EC5E4E436BD1A  L_0 = (KeyValuePair_2_tF48C056DF83BF9AF3BAE277B149EC5E4E436BD1A )__this->get_current_3();
		return (KeyValuePair_2_tF48C056DF83BF9AF3BAE277B149EC5E4E436BD1A )L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Key_m0811BBC9021B11DC1F804BB595C644CBE8E6DD01_gshared_inline (KeyValuePair_2_tF48C056DF83BF9AF3BAE277B149EC5E4E436BD1A * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_key_0();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool KeyValuePair_2_get_Value_m65076207C2BD77BB76C0FA0499724D61726996DD_gshared_inline (KeyValuePair_2_tF48C056DF83BF9AF3BAE277B149EC5E4E436BD1A * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = (bool)__this->get_value_1();
		return (bool)L_0;
	}
}
