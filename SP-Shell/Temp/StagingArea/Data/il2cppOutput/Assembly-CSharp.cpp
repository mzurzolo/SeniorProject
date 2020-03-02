#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtFuncInvoker0
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
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// Game_System
struct Game_System_t15C82D18D4845C4A2DBF17C1064CA099D2080B2E;
// Game_System/<GetRequest>d__9
struct U3CGetRequestU3Ed__9_t58AD01B3FACB2B70CE48D06F2AB5F3CEE9A9A8C9;
// Grid_Instance
struct Grid_Instance_t51A4E6F74F3448AE53F323B127743C3D97811843;
// Grid_Space
struct Grid_Space_t585EDBB441A6B3EE2E0963BDF1CC84BA0A111F70;
// MyStringEvent
struct MyStringEvent_tA778A6B61468456B32154016FDEBADDFADA208E9;
// Player
struct Player_t8321F4671F549F5A7793BB8BA33D32CCCD538873;
// Player[]
struct PlayerU5BU5D_tB894FDF24E92B3AF2659FE883E1CF369BF663E2A;
// System.Action`1<UnityEngine.AsyncOperation>
struct Action_1_tCBF754C290FAE894631BED8FD56E9E22C4C187F9;
// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Byte[]
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.ArrayList
struct ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4;
// System.Collections.IDictionary
struct IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7;
// System.Collections.IEnumerator
struct IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A;
// System.DelegateData
struct DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE;
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
// System.NotSupportedException
struct NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010;
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E;
// System.Uri
struct Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// UnityEngine.Canvas
struct Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72;
// UnityEngine.Component
struct Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t18AA4F473C7B295216B7D4B9723B4F3DFCCC9A3F;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_t6E5DF2EBDA42794B5FE0C6DAA97DF65F0BFF571F;
// UnityEngine.Events.UnityAction
struct UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4;
// UnityEngine.Events.UnityAction`1<System.Object>
struct UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9;
// UnityEngine.Events.UnityAction`1<System.String>
struct UnityAction_1_tC17304886B9B905228EEC74E84B4FDBF72A3C5A5;
// UnityEngine.Events.UnityEvent`1<System.Object>
struct UnityEvent_1_t9E897A46A46C78F7104A831E63BB081546EFFF0D;
// UnityEngine.Events.UnityEvent`1<System.String>
struct UnityEvent_1_tACA444CD8B2CBDCD9393629F06117A47C27A8F15;
// UnityEngine.GameObject
struct GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F;
// UnityEngine.GameObject[0...,0...]
struct GameObjectU5B0___U2C0___U5D_t73B972676307A2C07C036763B513798EF465D1CC;
// UnityEngine.Grid
struct Grid_t9989A4B9E81E8D350DF09DE256FF140F22AB6476;
// UnityEngine.Material
struct Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598;
// UnityEngine.Mesh
struct Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C;
// UnityEngine.MeshRenderer
struct MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429;
// UnityEngine.Networking.CertificateHandler
struct CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0;
// UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9;
// UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129;
// UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_t726E134F16701A2671D40BEBE22110DC57156353;
// UnityEngine.Networking.UploadHandler
struct UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4;
// UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0;
// UnityEngine.Random
struct Random_tA8F80789DCC0FD1EDC77845D34F1D1A148DC9CCD;
// UnityEngine.RectTransform
struct RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20;
// UnityEngine.Renderer
struct Renderer_t0556D67DD582620D1F495627EDE30D03284151F4;
// UnityEngine.TextGenerator
struct TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8;
// UnityEngine.Texture2D
struct Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C;
// UnityEngine.Transform
struct Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172;
// UnityEngine.UI.FontData
struct FontData_t29F4568F4FB8C463AAFE6DD21FA7A812B4FF1494;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B;
// UnityEngine.UI.Text
struct Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030;
// UnityEngine.UI.VertexHelper
struct VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28;

IL2CPP_EXTERN_C RuntimeClass* ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObjectU5B0___U2C0___U5D_t73B972676307A2C07C036763B513798EF465D1CC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Grid_Space_t585EDBB441A6B3EE2E0963BDF1CC84BA0A111F70_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MyStringEvent_tA778A6B61468456B32154016FDEBADDFADA208E9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Random_tA8F80789DCC0FD1EDC77845D34F1D1A148DC9CCD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CGetRequestU3Ed__9_t58AD01B3FACB2B70CE48D06F2AB5F3CEE9A9A8C9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_1_tC17304886B9B905228EEC74E84B4FDBF72A3C5A5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral01F2A06473F84C9036D307474DB7A05569FDC695;
IL2CPP_EXTERN_C String_t* _stringLiteralAFFC0457EDADEDBD013FA917F9FB035D9E89E73B;
IL2CPP_EXTERN_C String_t* _stringLiteralB43B0CE0B6FDB020E08B9A3CA500A982384549E5;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisGame_System_t15C82D18D4845C4A2DBF17C1064CA099D2080B2E_m3EA7F3A449D4426875D4E6A7A7EC288EBA63FAAB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisGrid_t9989A4B9E81E8D350DF09DE256FF140F22AB6476_m72E7E247390DF7FC370889D019F93B9E4DE382E1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisMeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED_mC449C73F107E3711492A2950958258EA357E447D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisText_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030_m24A42DAE3900B867697FFD9DFB6E448D6978CD4A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponentsInChildren_TisPlayer_t8321F4671F549F5A7793BB8BA33D32CCCD538873_m5EBAE8FA11614CF16381FCB10FD5546C47A03607_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Game_System_UGameOver_mF7E93DAF6CF227985DE0A86D470594AFB0A7B2B4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m598037C6F246E67DB3E38DFBB1F44D4D9921A85E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGetRequestU3Ed__9_System_Collections_IEnumerator_Reset_mB9F4989E0AADC947810A33DFAFC87AB6703A1BDB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityAction_1__ctor_mD502E44930D3947863E66F6AA08B8E6B59C364A6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_AddListener_mC67D95A26204A963AEA0D5A2BF5447945F5CA44F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_Invoke_m785D62C56B841167D83F26AFF612D86132DF59D1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1__ctor_mEAC66A07E9EE31DAB32788A5C29B5E2D0B239E91_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t Game_System_GetRequest_mD481BF42F023EA7B92A71B58978A1B2FF27A9B5E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Game_System_Start_mF560CBBBDC57F6D2AC4589A85137DF541C2C67ED_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Game_System_Update_m6DB27AC9F18452E02B89AA7F0C69A641E00C636E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Game_System__ctor_mC86196836B2DB9438DEC4FAA66FCAE3B6F58E7B3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Grid_Instance_Start_m3A8523B9444FB1A218C7F2A1877AD72CE35F0585_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Grid_Space_Start_m02C75759FE5E31C7CBB0757278D1C951749D6231_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MyStringEvent__ctor_m735C83E0BF62D44ECB2EC2810986E178409352F6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Player_ClearGrid_mB48FFF1CF08E03FC28C4811BA9FA21612994D1D7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Player__ctor_m8F4AB650C5E2DE406B3C65EA8F662013458D85E2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CGetRequestU3Ed__9_MoveNext_m432CC67CE7AF527F032183B951C029442F453179_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CGetRequestU3Ed__9_System_Collections_IEnumerator_Reset_mB9F4989E0AADC947810A33DFAFC87AB6703A1BDB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CGetRequestU3Ed__9_U3CU3Em__Finally1_m2EC03AD8DB2F2A6E5F75194EFF60C16BF1AD3B69_MetadataUsageId;
struct CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0_marshaled_com;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9_marshaled_com;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129_marshaled_com;
struct UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129_marshaled_pinvoke;
struct UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4_marshaled_com;

struct PlayerU5BU5D_tB894FDF24E92B3AF2659FE883E1CF369BF663E2A;
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E;
struct GameObjectU5B0___U2C0___U5D_t73B972676307A2C07C036763B513798EF465D1CC;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t6CDDDF959E7E18A6744E43B613F41CDAC780256A 
{
public:

public:
};


// System.Object


// Game_System_<GetRequest>d__9
struct  U3CGetRequestU3Ed__9_t58AD01B3FACB2B70CE48D06F2AB5F3CEE9A9A8C9  : public RuntimeObject
{
public:
	// System.Int32 Game_System_<GetRequest>d__9::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Game_System_<GetRequest>d__9::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// System.String Game_System_<GetRequest>d__9::uri
	String_t* ___uri_2;
	// UnityEngine.Networking.UnityWebRequest Game_System_<GetRequest>d__9::<webRequest>5__2
	UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * ___U3CwebRequestU3E5__2_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CGetRequestU3Ed__9_t58AD01B3FACB2B70CE48D06F2AB5F3CEE9A9A8C9, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CGetRequestU3Ed__9_t58AD01B3FACB2B70CE48D06F2AB5F3CEE9A9A8C9, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_uri_2() { return static_cast<int32_t>(offsetof(U3CGetRequestU3Ed__9_t58AD01B3FACB2B70CE48D06F2AB5F3CEE9A9A8C9, ___uri_2)); }
	inline String_t* get_uri_2() const { return ___uri_2; }
	inline String_t** get_address_of_uri_2() { return &___uri_2; }
	inline void set_uri_2(String_t* value)
	{
		___uri_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___uri_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CwebRequestU3E5__2_3() { return static_cast<int32_t>(offsetof(U3CGetRequestU3Ed__9_t58AD01B3FACB2B70CE48D06F2AB5F3CEE9A9A8C9, ___U3CwebRequestU3E5__2_3)); }
	inline UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * get_U3CwebRequestU3E5__2_3() const { return ___U3CwebRequestU3E5__2_3; }
	inline UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 ** get_address_of_U3CwebRequestU3E5__2_3() { return &___U3CwebRequestU3E5__2_3; }
	inline void set_U3CwebRequestU3E5__2_3(UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * value)
	{
		___U3CwebRequestU3E5__2_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CwebRequestU3E5__2_3), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Collections.ArrayList
struct  ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4  : public RuntimeObject
{
public:
	// System.Object[] System.Collections.ArrayList::_items
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ____items_0;
	// System.Int32 System.Collections.ArrayList::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.ArrayList::_version
	int32_t ____version_2;
	// System.Object System.Collections.ArrayList::_syncRoot
	RuntimeObject * ____syncRoot_3;

public:
	inline static int32_t get_offset_of__items_0() { return static_cast<int32_t>(offsetof(ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4, ____items_0)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get__items_0() const { return ____items_0; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of__items_0() { return &____items_0; }
	inline void set__items_0(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		____items_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_0), (void*)value);
	}

	inline static int32_t get_offset_of__size_1() { return static_cast<int32_t>(offsetof(ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4, ____size_1)); }
	inline int32_t get__size_1() const { return ____size_1; }
	inline int32_t* get_address_of__size_1() { return &____size_1; }
	inline void set__size_1(int32_t value)
	{
		____size_1 = value;
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}

	inline static int32_t get_offset_of__syncRoot_3() { return static_cast<int32_t>(offsetof(ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4, ____syncRoot_3)); }
	inline RuntimeObject * get__syncRoot_3() const { return ____syncRoot_3; }
	inline RuntimeObject ** get_address_of__syncRoot_3() { return &____syncRoot_3; }
	inline void set__syncRoot_3(RuntimeObject * value)
	{
		____syncRoot_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_3), (void*)value);
	}
};

struct ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4_StaticFields
{
public:
	// System.Object[] System.Collections.ArrayList::emptyArray
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___emptyArray_5;

public:
	inline static int32_t get_offset_of_emptyArray_5() { return static_cast<int32_t>(offsetof(ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4_StaticFields, ___emptyArray_5)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get_emptyArray_5() const { return ___emptyArray_5; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of_emptyArray_5() { return &___emptyArray_5; }
	inline void set_emptyArray_5(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		___emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___emptyArray_5), (void*)value);
	}
};


// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	intptr_t* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	intptr_t* ___native_trace_ips_15;
};

// System.String
struct  String_t  : public RuntimeObject
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


// System.ValueType
struct  ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_com
{
};

// UnityEngine.Events.UnityEventBase
struct  UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5  : public RuntimeObject
{
public:
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t18AA4F473C7B295216B7D4B9723B4F3DFCCC9A3F * ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_t6E5DF2EBDA42794B5FE0C6DAA97DF65F0BFF571F * ___m_PersistentCalls_1;
	// System.String UnityEngine.Events.UnityEventBase::m_TypeName
	String_t* ___m_TypeName_2;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_3;

public:
	inline static int32_t get_offset_of_m_Calls_0() { return static_cast<int32_t>(offsetof(UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5, ___m_Calls_0)); }
	inline InvokableCallList_t18AA4F473C7B295216B7D4B9723B4F3DFCCC9A3F * get_m_Calls_0() const { return ___m_Calls_0; }
	inline InvokableCallList_t18AA4F473C7B295216B7D4B9723B4F3DFCCC9A3F ** get_address_of_m_Calls_0() { return &___m_Calls_0; }
	inline void set_m_Calls_0(InvokableCallList_t18AA4F473C7B295216B7D4B9723B4F3DFCCC9A3F * value)
	{
		___m_Calls_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Calls_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PersistentCalls_1() { return static_cast<int32_t>(offsetof(UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5, ___m_PersistentCalls_1)); }
	inline PersistentCallGroup_t6E5DF2EBDA42794B5FE0C6DAA97DF65F0BFF571F * get_m_PersistentCalls_1() const { return ___m_PersistentCalls_1; }
	inline PersistentCallGroup_t6E5DF2EBDA42794B5FE0C6DAA97DF65F0BFF571F ** get_address_of_m_PersistentCalls_1() { return &___m_PersistentCalls_1; }
	inline void set_m_PersistentCalls_1(PersistentCallGroup_t6E5DF2EBDA42794B5FE0C6DAA97DF65F0BFF571F * value)
	{
		___m_PersistentCalls_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PersistentCalls_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_TypeName_2() { return static_cast<int32_t>(offsetof(UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5, ___m_TypeName_2)); }
	inline String_t* get_m_TypeName_2() const { return ___m_TypeName_2; }
	inline String_t** get_address_of_m_TypeName_2() { return &___m_TypeName_2; }
	inline void set_m_TypeName_2(String_t* value)
	{
		___m_TypeName_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TypeName_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_CallsDirty_3() { return static_cast<int32_t>(offsetof(UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5, ___m_CallsDirty_3)); }
	inline bool get_m_CallsDirty_3() const { return ___m_CallsDirty_3; }
	inline bool* get_address_of_m_CallsDirty_3() { return &___m_CallsDirty_3; }
	inline void set_m_CallsDirty_3(bool value)
	{
		___m_CallsDirty_3 = value;
	}
};


// UnityEngine.Random
struct  Random_tA8F80789DCC0FD1EDC77845D34F1D1A148DC9CCD  : public RuntimeObject
{
public:

public:
};


// UnityEngine.YieldInstruction
struct  YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_com
{
};

// System.Boolean
struct  Boolean_tB53F6830F670160873277339AA58F15CAED4399C 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Char
struct  Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9, ___m_value_0)); }
	inline Il2CppChar get_m_value_0() const { return ___m_value_0; }
	inline Il2CppChar* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(Il2CppChar value)
	{
		___m_value_0 = value;
	}
};

struct Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_StaticFields
{
public:
	// System.Byte[] System.Char::categoryForLatin1
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___categoryForLatin1_3;

public:
	inline static int32_t get_offset_of_categoryForLatin1_3() { return static_cast<int32_t>(offsetof(Char_tBF22D9FC341BE970735250BB6FF1A4A92BBA58B9_StaticFields, ___categoryForLatin1_3)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_categoryForLatin1_3() const { return ___categoryForLatin1_3; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_categoryForLatin1_3() { return &___categoryForLatin1_3; }
	inline void set_categoryForLatin1_3(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___categoryForLatin1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___categoryForLatin1_3), (void*)value);
	}
};


// System.Enum
struct  Enum_t2AF27C02B8653AE29442467390005ABC74D8F521  : public ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF
{
public:

public:
};

struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_com
{
};

// System.Int32
struct  Int32_t585191389E07734F19F3156FF88FB3EF4800D102 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_t585191389E07734F19F3156FF88FB3EF4800D102, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct  IntPtr_t 
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
struct  Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// System.SystemException
struct  SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782  : public Exception_t
{
public:

public:
};


// System.Void
struct  Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017__padding[1];
	};

public:
};


// UnityEngine.Color
struct  Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 
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
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// UnityEngine.Events.UnityEvent`1<System.String>
struct  UnityEvent_1_tACA444CD8B2CBDCD9393629F06117A47C27A8F15  : public UnityEventBase_t6E0F7823762EE94BB8489B5AE41C7802A266D3D5
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___m_InvokeArray_4;

public:
	inline static int32_t get_offset_of_m_InvokeArray_4() { return static_cast<int32_t>(offsetof(UnityEvent_1_tACA444CD8B2CBDCD9393629F06117A47C27A8F15, ___m_InvokeArray_4)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get_m_InvokeArray_4() const { return ___m_InvokeArray_4; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of_m_InvokeArray_4() { return &___m_InvokeArray_4; }
	inline void set_m_InvokeArray_4(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		___m_InvokeArray_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_4), (void*)value);
	}
};


// UnityEngine.Vector3
struct  Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___zeroVector_5)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___oneVector_6)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___upVector_7)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___downVector_8)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___leftVector_9)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___rightVector_10)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___forwardVector_11)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___backVector_12)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// MyStringEvent
struct  MyStringEvent_tA778A6B61468456B32154016FDEBADDFADA208E9  : public UnityEvent_1_tACA444CD8B2CBDCD9393629F06117A47C27A8F15
{
public:

public:
};


// System.Delegate
struct  Delegate_t  : public RuntimeObject
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
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
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
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * get_data_9() const { return ___data_9; }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * value)
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
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
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
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
};

// System.NotSupportedException
struct  NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};


// UnityEngine.AsyncOperation
struct  AsyncOperation_t304C51ABED8AE734CC8DDDFE13013D8D5A44641D  : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44
{
public:
	// System.IntPtr UnityEngine.AsyncOperation::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Action`1<UnityEngine.AsyncOperation> UnityEngine.AsyncOperation::m_completeCallback
	Action_1_tCBF754C290FAE894631BED8FD56E9E22C4C187F9 * ___m_completeCallback_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(AsyncOperation_t304C51ABED8AE734CC8DDDFE13013D8D5A44641D, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_completeCallback_1() { return static_cast<int32_t>(offsetof(AsyncOperation_t304C51ABED8AE734CC8DDDFE13013D8D5A44641D, ___m_completeCallback_1)); }
	inline Action_1_tCBF754C290FAE894631BED8FD56E9E22C4C187F9 * get_m_completeCallback_1() const { return ___m_completeCallback_1; }
	inline Action_1_tCBF754C290FAE894631BED8FD56E9E22C4C187F9 ** get_address_of_m_completeCallback_1() { return &___m_completeCallback_1; }
	inline void set_m_completeCallback_1(Action_1_tCBF754C290FAE894631BED8FD56E9E22C4C187F9 * value)
	{
		___m_completeCallback_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_completeCallback_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_t304C51ABED8AE734CC8DDDFE13013D8D5A44641D_marshaled_pinvoke : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};
// Native definition for COM marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_t304C51ABED8AE734CC8DDDFE13013D8D5A44641D_marshaled_com : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};

// UnityEngine.GridLayout_CellLayout
struct  CellLayout_tB3148C4226634DC4F10B8969F32483983BAC72F7 
{
public:
	// System.Int32 UnityEngine.GridLayout_CellLayout::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CellLayout_tB3148C4226634DC4F10B8969F32483983BAC72F7, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.KeyCode
struct  KeyCode_tC93EA87C5A6901160B583ADFCD3EF6726570DC3C 
{
public:
	// System.Int32 UnityEngine.KeyCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(KeyCode_tC93EA87C5A6901160B583ADFCD3EF6726570DC3C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Networking.CertificateHandler
struct  CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.CertificateHandler::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.CertificateHandler
struct CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.CertificateHandler
struct CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.Networking.DownloadHandler
struct  DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.DownloadHandler::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.Networking.UploadHandler
struct  UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.UploadHandler::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.UploadHandler
struct UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.UploadHandler
struct UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.Object
struct  Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* value)
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

// UnityEngine.Component
struct  Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.GameObject
struct  GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.Material
struct  Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.Networking.UnityWebRequest
struct  UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Networking.UnityWebRequest::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.Networking.DownloadHandler UnityEngine.Networking.UnityWebRequest::m_DownloadHandler
	DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9 * ___m_DownloadHandler_1;
	// UnityEngine.Networking.UploadHandler UnityEngine.Networking.UnityWebRequest::m_UploadHandler
	UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4 * ___m_UploadHandler_2;
	// UnityEngine.Networking.CertificateHandler UnityEngine.Networking.UnityWebRequest::m_CertificateHandler
	CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0 * ___m_CertificateHandler_3;
	// System.Uri UnityEngine.Networking.UnityWebRequest::m_Uri
	Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * ___m_Uri_4;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeCertificateHandlerOnDispose>k__BackingField
	bool ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeDownloadHandlerOnDispose>k__BackingField
	bool ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeUploadHandlerOnDispose>k__BackingField
	bool ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_DownloadHandler_1() { return static_cast<int32_t>(offsetof(UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129, ___m_DownloadHandler_1)); }
	inline DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9 * get_m_DownloadHandler_1() const { return ___m_DownloadHandler_1; }
	inline DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9 ** get_address_of_m_DownloadHandler_1() { return &___m_DownloadHandler_1; }
	inline void set_m_DownloadHandler_1(DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9 * value)
	{
		___m_DownloadHandler_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DownloadHandler_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_UploadHandler_2() { return static_cast<int32_t>(offsetof(UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129, ___m_UploadHandler_2)); }
	inline UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4 * get_m_UploadHandler_2() const { return ___m_UploadHandler_2; }
	inline UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4 ** get_address_of_m_UploadHandler_2() { return &___m_UploadHandler_2; }
	inline void set_m_UploadHandler_2(UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4 * value)
	{
		___m_UploadHandler_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_UploadHandler_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_CertificateHandler_3() { return static_cast<int32_t>(offsetof(UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129, ___m_CertificateHandler_3)); }
	inline CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0 * get_m_CertificateHandler_3() const { return ___m_CertificateHandler_3; }
	inline CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0 ** get_address_of_m_CertificateHandler_3() { return &___m_CertificateHandler_3; }
	inline void set_m_CertificateHandler_3(CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0 * value)
	{
		___m_CertificateHandler_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CertificateHandler_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_Uri_4() { return static_cast<int32_t>(offsetof(UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129, ___m_Uri_4)); }
	inline Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * get_m_Uri_4() const { return ___m_Uri_4; }
	inline Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E ** get_address_of_m_Uri_4() { return &___m_Uri_4; }
	inline void set_m_Uri_4(Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * value)
	{
		___m_Uri_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Uri_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129, ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5)); }
	inline bool get_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5() const { return ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5; }
	inline bool* get_address_of_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5() { return &___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5; }
	inline void set_U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5(bool value)
	{
		___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5 = value;
	}

	inline static int32_t get_offset_of_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129, ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6)); }
	inline bool get_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6() const { return ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6; }
	inline bool* get_address_of_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6() { return &___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6; }
	inline void set_U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6(bool value)
	{
		___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129, ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7)); }
	inline bool get_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7() const { return ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7; }
	inline bool* get_address_of_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7() { return &___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7; }
	inline void set_U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7(bool value)
	{
		___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9_marshaled_pinvoke ___m_DownloadHandler_1;
	UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4_marshaled_pinvoke ___m_UploadHandler_2;
	CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0_marshaled_pinvoke ___m_CertificateHandler_3;
	Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * ___m_Uri_4;
	int32_t ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	int32_t ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	int32_t ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;
};
// Native definition for COM marshalling of UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129_marshaled_com
{
	intptr_t ___m_Ptr_0;
	DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9_marshaled_com* ___m_DownloadHandler_1;
	UploadHandler_t24F4097D30A1E7C689D8881A27F251B4741601E4_marshaled_com* ___m_UploadHandler_2;
	CertificateHandler_tBD070BF4150A44AB482FD36EA3882C363117E8C0_marshaled_com* ___m_CertificateHandler_3;
	Uri_t87E4A94B2901F5EEDD18AA72C3DB1B00E672D68E * ___m_Uri_4;
	int32_t ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	int32_t ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	int32_t ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;
};

// UnityEngine.Networking.UnityWebRequestAsyncOperation
struct  UnityWebRequestAsyncOperation_t726E134F16701A2671D40BEBE22110DC57156353  : public AsyncOperation_t304C51ABED8AE734CC8DDDFE13013D8D5A44641D
{
public:
	// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequestAsyncOperation::<webRequest>k__BackingField
	UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * ___U3CwebRequestU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CwebRequestU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(UnityWebRequestAsyncOperation_t726E134F16701A2671D40BEBE22110DC57156353, ___U3CwebRequestU3Ek__BackingField_2)); }
	inline UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * get_U3CwebRequestU3Ek__BackingField_2() const { return ___U3CwebRequestU3Ek__BackingField_2; }
	inline UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 ** get_address_of_U3CwebRequestU3Ek__BackingField_2() { return &___U3CwebRequestU3Ek__BackingField_2; }
	inline void set_U3CwebRequestU3Ek__BackingField_2(UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * value)
	{
		___U3CwebRequestU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CwebRequestU3Ek__BackingField_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_t726E134F16701A2671D40BEBE22110DC57156353_marshaled_pinvoke : public AsyncOperation_t304C51ABED8AE734CC8DDDFE13013D8D5A44641D_marshaled_pinvoke
{
	UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129_marshaled_pinvoke* ___U3CwebRequestU3Ek__BackingField_2;
};
// Native definition for COM marshalling of UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_t726E134F16701A2671D40BEBE22110DC57156353_marshaled_com : public AsyncOperation_t304C51ABED8AE734CC8DDDFE13013D8D5A44641D_marshaled_com
{
	UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129_marshaled_com* ___U3CwebRequestU3Ek__BackingField_2;
};

// UnityEngine.Behaviour
struct  Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.Events.UnityAction`1<System.String>
struct  UnityAction_1_tC17304886B9B905228EEC74E84B4FDBF72A3C5A5  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Renderer
struct  Renderer_t0556D67DD582620D1F495627EDE30D03284151F4  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.Transform
struct  Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.GridLayout
struct  GridLayout_t271F88A0992C64FE8E229D03480E3862B22D57F9  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};


// UnityEngine.MeshRenderer
struct  MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED  : public Renderer_t0556D67DD582620D1F495627EDE30D03284151F4
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};


// Game_System
struct  Game_System_t15C82D18D4845C4A2DBF17C1064CA099D2080B2E  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.GameObject Game_System::player_container
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___player_container_4;
	// UnityEngine.GameObject Game_System::Text
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___Text_5;
	// Player[] Game_System::players
	PlayerU5BU5D_tB894FDF24E92B3AF2659FE883E1CF369BF663E2A* ___players_6;
	// UnityEngine.Random Game_System::rnd
	Random_tA8F80789DCC0FD1EDC77845D34F1D1A148DC9CCD * ___rnd_7;
	// System.String Game_System::assetPath
	String_t* ___assetPath_8;
	// MyStringEvent Game_System::gameOver
	MyStringEvent_tA778A6B61468456B32154016FDEBADDFADA208E9 * ___gameOver_9;

public:
	inline static int32_t get_offset_of_player_container_4() { return static_cast<int32_t>(offsetof(Game_System_t15C82D18D4845C4A2DBF17C1064CA099D2080B2E, ___player_container_4)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_player_container_4() const { return ___player_container_4; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_player_container_4() { return &___player_container_4; }
	inline void set_player_container_4(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___player_container_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___player_container_4), (void*)value);
	}

	inline static int32_t get_offset_of_Text_5() { return static_cast<int32_t>(offsetof(Game_System_t15C82D18D4845C4A2DBF17C1064CA099D2080B2E, ___Text_5)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_Text_5() const { return ___Text_5; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_Text_5() { return &___Text_5; }
	inline void set_Text_5(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___Text_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Text_5), (void*)value);
	}

	inline static int32_t get_offset_of_players_6() { return static_cast<int32_t>(offsetof(Game_System_t15C82D18D4845C4A2DBF17C1064CA099D2080B2E, ___players_6)); }
	inline PlayerU5BU5D_tB894FDF24E92B3AF2659FE883E1CF369BF663E2A* get_players_6() const { return ___players_6; }
	inline PlayerU5BU5D_tB894FDF24E92B3AF2659FE883E1CF369BF663E2A** get_address_of_players_6() { return &___players_6; }
	inline void set_players_6(PlayerU5BU5D_tB894FDF24E92B3AF2659FE883E1CF369BF663E2A* value)
	{
		___players_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___players_6), (void*)value);
	}

	inline static int32_t get_offset_of_rnd_7() { return static_cast<int32_t>(offsetof(Game_System_t15C82D18D4845C4A2DBF17C1064CA099D2080B2E, ___rnd_7)); }
	inline Random_tA8F80789DCC0FD1EDC77845D34F1D1A148DC9CCD * get_rnd_7() const { return ___rnd_7; }
	inline Random_tA8F80789DCC0FD1EDC77845D34F1D1A148DC9CCD ** get_address_of_rnd_7() { return &___rnd_7; }
	inline void set_rnd_7(Random_tA8F80789DCC0FD1EDC77845D34F1D1A148DC9CCD * value)
	{
		___rnd_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rnd_7), (void*)value);
	}

	inline static int32_t get_offset_of_assetPath_8() { return static_cast<int32_t>(offsetof(Game_System_t15C82D18D4845C4A2DBF17C1064CA099D2080B2E, ___assetPath_8)); }
	inline String_t* get_assetPath_8() const { return ___assetPath_8; }
	inline String_t** get_address_of_assetPath_8() { return &___assetPath_8; }
	inline void set_assetPath_8(String_t* value)
	{
		___assetPath_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___assetPath_8), (void*)value);
	}

	inline static int32_t get_offset_of_gameOver_9() { return static_cast<int32_t>(offsetof(Game_System_t15C82D18D4845C4A2DBF17C1064CA099D2080B2E, ___gameOver_9)); }
	inline MyStringEvent_tA778A6B61468456B32154016FDEBADDFADA208E9 * get_gameOver_9() const { return ___gameOver_9; }
	inline MyStringEvent_tA778A6B61468456B32154016FDEBADDFADA208E9 ** get_address_of_gameOver_9() { return &___gameOver_9; }
	inline void set_gameOver_9(MyStringEvent_tA778A6B61468456B32154016FDEBADDFADA208E9 * value)
	{
		___gameOver_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gameOver_9), (void*)value);
	}
};


// Grid_Instance
struct  Grid_Instance_t51A4E6F74F3448AE53F323B127743C3D97811843  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.Int32 Grid_Instance::columns
	int32_t ___columns_4;
	// System.Int32 Grid_Instance::rows
	int32_t ___rows_5;
	// UnityEngine.GameObject[0...,0...] Grid_Instance::grid_spaces
	GameObjectU5B0___U2C0___U5D_t73B972676307A2C07C036763B513798EF465D1CC* ___grid_spaces_6;
	// UnityEngine.GameObject Grid_Instance::space_prefab
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___space_prefab_7;
	// System.Single Grid_Instance::xstep
	float ___xstep_8;
	// System.Single Grid_Instance::xadjust
	float ___xadjust_9;
	// System.Single Grid_Instance::zstep
	float ___zstep_10;
	// UnityEngine.Grid Grid_Instance::grid
	Grid_t9989A4B9E81E8D350DF09DE256FF140F22AB6476 * ___grid_11;
	// UnityEngine.GridLayout_CellLayout Grid_Instance::layout
	int32_t ___layout_12;

public:
	inline static int32_t get_offset_of_columns_4() { return static_cast<int32_t>(offsetof(Grid_Instance_t51A4E6F74F3448AE53F323B127743C3D97811843, ___columns_4)); }
	inline int32_t get_columns_4() const { return ___columns_4; }
	inline int32_t* get_address_of_columns_4() { return &___columns_4; }
	inline void set_columns_4(int32_t value)
	{
		___columns_4 = value;
	}

	inline static int32_t get_offset_of_rows_5() { return static_cast<int32_t>(offsetof(Grid_Instance_t51A4E6F74F3448AE53F323B127743C3D97811843, ___rows_5)); }
	inline int32_t get_rows_5() const { return ___rows_5; }
	inline int32_t* get_address_of_rows_5() { return &___rows_5; }
	inline void set_rows_5(int32_t value)
	{
		___rows_5 = value;
	}

	inline static int32_t get_offset_of_grid_spaces_6() { return static_cast<int32_t>(offsetof(Grid_Instance_t51A4E6F74F3448AE53F323B127743C3D97811843, ___grid_spaces_6)); }
	inline GameObjectU5B0___U2C0___U5D_t73B972676307A2C07C036763B513798EF465D1CC* get_grid_spaces_6() const { return ___grid_spaces_6; }
	inline GameObjectU5B0___U2C0___U5D_t73B972676307A2C07C036763B513798EF465D1CC** get_address_of_grid_spaces_6() { return &___grid_spaces_6; }
	inline void set_grid_spaces_6(GameObjectU5B0___U2C0___U5D_t73B972676307A2C07C036763B513798EF465D1CC* value)
	{
		___grid_spaces_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___grid_spaces_6), (void*)value);
	}

	inline static int32_t get_offset_of_space_prefab_7() { return static_cast<int32_t>(offsetof(Grid_Instance_t51A4E6F74F3448AE53F323B127743C3D97811843, ___space_prefab_7)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_space_prefab_7() const { return ___space_prefab_7; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_space_prefab_7() { return &___space_prefab_7; }
	inline void set_space_prefab_7(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___space_prefab_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___space_prefab_7), (void*)value);
	}

	inline static int32_t get_offset_of_xstep_8() { return static_cast<int32_t>(offsetof(Grid_Instance_t51A4E6F74F3448AE53F323B127743C3D97811843, ___xstep_8)); }
	inline float get_xstep_8() const { return ___xstep_8; }
	inline float* get_address_of_xstep_8() { return &___xstep_8; }
	inline void set_xstep_8(float value)
	{
		___xstep_8 = value;
	}

	inline static int32_t get_offset_of_xadjust_9() { return static_cast<int32_t>(offsetof(Grid_Instance_t51A4E6F74F3448AE53F323B127743C3D97811843, ___xadjust_9)); }
	inline float get_xadjust_9() const { return ___xadjust_9; }
	inline float* get_address_of_xadjust_9() { return &___xadjust_9; }
	inline void set_xadjust_9(float value)
	{
		___xadjust_9 = value;
	}

	inline static int32_t get_offset_of_zstep_10() { return static_cast<int32_t>(offsetof(Grid_Instance_t51A4E6F74F3448AE53F323B127743C3D97811843, ___zstep_10)); }
	inline float get_zstep_10() const { return ___zstep_10; }
	inline float* get_address_of_zstep_10() { return &___zstep_10; }
	inline void set_zstep_10(float value)
	{
		___zstep_10 = value;
	}

	inline static int32_t get_offset_of_grid_11() { return static_cast<int32_t>(offsetof(Grid_Instance_t51A4E6F74F3448AE53F323B127743C3D97811843, ___grid_11)); }
	inline Grid_t9989A4B9E81E8D350DF09DE256FF140F22AB6476 * get_grid_11() const { return ___grid_11; }
	inline Grid_t9989A4B9E81E8D350DF09DE256FF140F22AB6476 ** get_address_of_grid_11() { return &___grid_11; }
	inline void set_grid_11(Grid_t9989A4B9E81E8D350DF09DE256FF140F22AB6476 * value)
	{
		___grid_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___grid_11), (void*)value);
	}

	inline static int32_t get_offset_of_layout_12() { return static_cast<int32_t>(offsetof(Grid_Instance_t51A4E6F74F3448AE53F323B127743C3D97811843, ___layout_12)); }
	inline int32_t get_layout_12() const { return ___layout_12; }
	inline int32_t* get_address_of_layout_12() { return &___layout_12; }
	inline void set_layout_12(int32_t value)
	{
		___layout_12 = value;
	}
};


// Grid_Space
struct  Grid_Space_t585EDBB441A6B3EE2E0963BDF1CC84BA0A111F70  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.Material Grid_Space::defMat
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___defMat_4;
	// UnityEngine.Material Grid_Space::selMat
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___selMat_5;
	// UnityEngine.Material Grid_Space::curMat
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___curMat_6;
	// System.Boolean Grid_Space::selected
	bool ___selected_7;
	// UnityEngine.MeshRenderer Grid_Space::meshRenderer
	MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * ___meshRenderer_8;
	// Game_System Grid_Space::gameSys
	Game_System_t15C82D18D4845C4A2DBF17C1064CA099D2080B2E * ___gameSys_9;

public:
	inline static int32_t get_offset_of_defMat_4() { return static_cast<int32_t>(offsetof(Grid_Space_t585EDBB441A6B3EE2E0963BDF1CC84BA0A111F70, ___defMat_4)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_defMat_4() const { return ___defMat_4; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_defMat_4() { return &___defMat_4; }
	inline void set_defMat_4(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___defMat_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defMat_4), (void*)value);
	}

	inline static int32_t get_offset_of_selMat_5() { return static_cast<int32_t>(offsetof(Grid_Space_t585EDBB441A6B3EE2E0963BDF1CC84BA0A111F70, ___selMat_5)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_selMat_5() const { return ___selMat_5; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_selMat_5() { return &___selMat_5; }
	inline void set_selMat_5(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___selMat_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___selMat_5), (void*)value);
	}

	inline static int32_t get_offset_of_curMat_6() { return static_cast<int32_t>(offsetof(Grid_Space_t585EDBB441A6B3EE2E0963BDF1CC84BA0A111F70, ___curMat_6)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_curMat_6() const { return ___curMat_6; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_curMat_6() { return &___curMat_6; }
	inline void set_curMat_6(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___curMat_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___curMat_6), (void*)value);
	}

	inline static int32_t get_offset_of_selected_7() { return static_cast<int32_t>(offsetof(Grid_Space_t585EDBB441A6B3EE2E0963BDF1CC84BA0A111F70, ___selected_7)); }
	inline bool get_selected_7() const { return ___selected_7; }
	inline bool* get_address_of_selected_7() { return &___selected_7; }
	inline void set_selected_7(bool value)
	{
		___selected_7 = value;
	}

	inline static int32_t get_offset_of_meshRenderer_8() { return static_cast<int32_t>(offsetof(Grid_Space_t585EDBB441A6B3EE2E0963BDF1CC84BA0A111F70, ___meshRenderer_8)); }
	inline MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * get_meshRenderer_8() const { return ___meshRenderer_8; }
	inline MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED ** get_address_of_meshRenderer_8() { return &___meshRenderer_8; }
	inline void set_meshRenderer_8(MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * value)
	{
		___meshRenderer_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___meshRenderer_8), (void*)value);
	}

	inline static int32_t get_offset_of_gameSys_9() { return static_cast<int32_t>(offsetof(Grid_Space_t585EDBB441A6B3EE2E0963BDF1CC84BA0A111F70, ___gameSys_9)); }
	inline Game_System_t15C82D18D4845C4A2DBF17C1064CA099D2080B2E * get_gameSys_9() const { return ___gameSys_9; }
	inline Game_System_t15C82D18D4845C4A2DBF17C1064CA099D2080B2E ** get_address_of_gameSys_9() { return &___gameSys_9; }
	inline void set_gameSys_9(Game_System_t15C82D18D4845C4A2DBF17C1064CA099D2080B2E * value)
	{
		___gameSys_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gameSys_9), (void*)value);
	}
};


// Player
struct  Player_t8321F4671F549F5A7793BB8BA33D32CCCD538873  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.Collections.ArrayList Player::grid_selected
	ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 * ___grid_selected_4;

public:
	inline static int32_t get_offset_of_grid_selected_4() { return static_cast<int32_t>(offsetof(Player_t8321F4671F549F5A7793BB8BA33D32CCCD538873, ___grid_selected_4)); }
	inline ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 * get_grid_selected_4() const { return ___grid_selected_4; }
	inline ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 ** get_address_of_grid_selected_4() { return &___grid_selected_4; }
	inline void set_grid_selected_4(ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 * value)
	{
		___grid_selected_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___grid_selected_4), (void*)value);
	}
};


// UnityEngine.EventSystems.UIBehaviour
struct  UIBehaviour_t3C3C339CD5677BA7FC27C352FED8B78052A3FE70  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:

public:
};


// UnityEngine.Grid
struct  Grid_t9989A4B9E81E8D350DF09DE256FF140F22AB6476  : public GridLayout_t271F88A0992C64FE8E229D03480E3862B22D57F9
{
public:

public:
};


// UnityEngine.UI.Graphic
struct  Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8  : public UIBehaviour_t3C3C339CD5677BA7FC27C352FED8B78052A3FE70
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * ___m_RectTransform_11;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 * ___m_CanvasRenderer_12;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * ___m_Canvas_13;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_14;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_15;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * ___m_OnDirtyLayoutCallback_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * ___m_OnDirtyVertsCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * ___m_OnDirtyMaterialCallback_18;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * ___m_CachedMesh_21;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* ___m_CachedUvs_22;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 * ___m_ColorTweenRunner_23;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_24;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_Material_6)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Material_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_Color_7)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_SkipLayoutUpdate_8() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_SkipLayoutUpdate_8)); }
	inline bool get_m_SkipLayoutUpdate_8() const { return ___m_SkipLayoutUpdate_8; }
	inline bool* get_address_of_m_SkipLayoutUpdate_8() { return &___m_SkipLayoutUpdate_8; }
	inline void set_m_SkipLayoutUpdate_8(bool value)
	{
		___m_SkipLayoutUpdate_8 = value;
	}

	inline static int32_t get_offset_of_m_SkipMaterialUpdate_9() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_SkipMaterialUpdate_9)); }
	inline bool get_m_SkipMaterialUpdate_9() const { return ___m_SkipMaterialUpdate_9; }
	inline bool* get_address_of_m_SkipMaterialUpdate_9() { return &___m_SkipMaterialUpdate_9; }
	inline void set_m_SkipMaterialUpdate_9(bool value)
	{
		___m_SkipMaterialUpdate_9 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_10() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_RaycastTarget_10)); }
	inline bool get_m_RaycastTarget_10() const { return ___m_RaycastTarget_10; }
	inline bool* get_address_of_m_RaycastTarget_10() { return &___m_RaycastTarget_10; }
	inline void set_m_RaycastTarget_10(bool value)
	{
		___m_RaycastTarget_10 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_11() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_RectTransform_11)); }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * get_m_RectTransform_11() const { return ___m_RectTransform_11; }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 ** get_address_of_m_RectTransform_11() { return &___m_RectTransform_11; }
	inline void set_m_RectTransform_11(RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * value)
	{
		___m_RectTransform_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransform_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_12() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_CanvasRenderer_12)); }
	inline CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 * get_m_CanvasRenderer_12() const { return ___m_CanvasRenderer_12; }
	inline CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 ** get_address_of_m_CanvasRenderer_12() { return &___m_CanvasRenderer_12; }
	inline void set_m_CanvasRenderer_12(CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 * value)
	{
		___m_CanvasRenderer_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasRenderer_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_Canvas_13() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_Canvas_13)); }
	inline Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * get_m_Canvas_13() const { return ___m_Canvas_13; }
	inline Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 ** get_address_of_m_Canvas_13() { return &___m_Canvas_13; }
	inline void set_m_Canvas_13(Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * value)
	{
		___m_Canvas_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Canvas_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_14() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_VertsDirty_14)); }
	inline bool get_m_VertsDirty_14() const { return ___m_VertsDirty_14; }
	inline bool* get_address_of_m_VertsDirty_14() { return &___m_VertsDirty_14; }
	inline void set_m_VertsDirty_14(bool value)
	{
		___m_VertsDirty_14 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_15() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_MaterialDirty_15)); }
	inline bool get_m_MaterialDirty_15() const { return ___m_MaterialDirty_15; }
	inline bool* get_address_of_m_MaterialDirty_15() { return &___m_MaterialDirty_15; }
	inline void set_m_MaterialDirty_15(bool value)
	{
		___m_MaterialDirty_15 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_16() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_OnDirtyLayoutCallback_16)); }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * get_m_OnDirtyLayoutCallback_16() const { return ___m_OnDirtyLayoutCallback_16; }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 ** get_address_of_m_OnDirtyLayoutCallback_16() { return &___m_OnDirtyLayoutCallback_16; }
	inline void set_m_OnDirtyLayoutCallback_16(UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * value)
	{
		___m_OnDirtyLayoutCallback_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyLayoutCallback_16), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_17() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_OnDirtyVertsCallback_17)); }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * get_m_OnDirtyVertsCallback_17() const { return ___m_OnDirtyVertsCallback_17; }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 ** get_address_of_m_OnDirtyVertsCallback_17() { return &___m_OnDirtyVertsCallback_17; }
	inline void set_m_OnDirtyVertsCallback_17(UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * value)
	{
		___m_OnDirtyVertsCallback_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyVertsCallback_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_18() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_OnDirtyMaterialCallback_18)); }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * get_m_OnDirtyMaterialCallback_18() const { return ___m_OnDirtyMaterialCallback_18; }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 ** get_address_of_m_OnDirtyMaterialCallback_18() { return &___m_OnDirtyMaterialCallback_18; }
	inline void set_m_OnDirtyMaterialCallback_18(UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * value)
	{
		___m_OnDirtyMaterialCallback_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyMaterialCallback_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedMesh_21() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_CachedMesh_21)); }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * get_m_CachedMesh_21() const { return ___m_CachedMesh_21; }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C ** get_address_of_m_CachedMesh_21() { return &___m_CachedMesh_21; }
	inline void set_m_CachedMesh_21(Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * value)
	{
		___m_CachedMesh_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedMesh_21), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedUvs_22() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_CachedUvs_22)); }
	inline Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* get_m_CachedUvs_22() const { return ___m_CachedUvs_22; }
	inline Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6** get_address_of_m_CachedUvs_22() { return &___m_CachedUvs_22; }
	inline void set_m_CachedUvs_22(Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* value)
	{
		___m_CachedUvs_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedUvs_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_23() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_ColorTweenRunner_23)); }
	inline TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 * get_m_ColorTweenRunner_23() const { return ___m_ColorTweenRunner_23; }
	inline TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 ** get_address_of_m_ColorTweenRunner_23() { return &___m_ColorTweenRunner_23; }
	inline void set_m_ColorTweenRunner_23(TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 * value)
	{
		___m_ColorTweenRunner_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ColorTweenRunner_23), (void*)value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_24() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_24)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_24() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_24; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_24() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_24; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_24(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_24 = value;
	}
};

struct Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * ___s_Mesh_19;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F * ___s_VertexHelper_20;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields, ___s_DefaultUI_4)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultUI_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_WhiteTexture_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_Mesh_19() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields, ___s_Mesh_19)); }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * get_s_Mesh_19() const { return ___s_Mesh_19; }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C ** get_address_of_s_Mesh_19() { return &___s_Mesh_19; }
	inline void set_s_Mesh_19(Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * value)
	{
		___s_Mesh_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Mesh_19), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_20() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields, ___s_VertexHelper_20)); }
	inline VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F * get_s_VertexHelper_20() const { return ___s_VertexHelper_20; }
	inline VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F ** get_address_of_s_VertexHelper_20() { return &___s_VertexHelper_20; }
	inline void set_s_VertexHelper_20(VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F * value)
	{
		___s_VertexHelper_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertexHelper_20), (void*)value);
	}
};


// UnityEngine.UI.MaskableGraphic
struct  MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F  : public Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_25;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___m_MaskMaterial_26;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B * ___m_ParentMask_27;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_29;
	// UnityEngine.UI.MaskableGraphic_CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4 * ___m_OnCullStateChanged_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_31;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_32;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___m_Corners_33;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_25() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_ShouldRecalculateStencil_25)); }
	inline bool get_m_ShouldRecalculateStencil_25() const { return ___m_ShouldRecalculateStencil_25; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_25() { return &___m_ShouldRecalculateStencil_25; }
	inline void set_m_ShouldRecalculateStencil_25(bool value)
	{
		___m_ShouldRecalculateStencil_25 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_MaskMaterial_26)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_m_MaskMaterial_26() const { return ___m_MaskMaterial_26; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_m_MaskMaterial_26() { return &___m_MaskMaterial_26; }
	inline void set_m_MaskMaterial_26(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___m_MaskMaterial_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MaskMaterial_26), (void*)value);
	}

	inline static int32_t get_offset_of_m_ParentMask_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_ParentMask_27)); }
	inline RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B * get_m_ParentMask_27() const { return ___m_ParentMask_27; }
	inline RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B ** get_address_of_m_ParentMask_27() { return &___m_ParentMask_27; }
	inline void set_m_ParentMask_27(RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B * value)
	{
		___m_ParentMask_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParentMask_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_Maskable_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_Maskable_28)); }
	inline bool get_m_Maskable_28() const { return ___m_Maskable_28; }
	inline bool* get_address_of_m_Maskable_28() { return &___m_Maskable_28; }
	inline void set_m_Maskable_28(bool value)
	{
		___m_Maskable_28 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_IncludeForMasking_29)); }
	inline bool get_m_IncludeForMasking_29() const { return ___m_IncludeForMasking_29; }
	inline bool* get_address_of_m_IncludeForMasking_29() { return &___m_IncludeForMasking_29; }
	inline void set_m_IncludeForMasking_29(bool value)
	{
		___m_IncludeForMasking_29 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_30() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_OnCullStateChanged_30)); }
	inline CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4 * get_m_OnCullStateChanged_30() const { return ___m_OnCullStateChanged_30; }
	inline CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4 ** get_address_of_m_OnCullStateChanged_30() { return &___m_OnCullStateChanged_30; }
	inline void set_m_OnCullStateChanged_30(CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4 * value)
	{
		___m_OnCullStateChanged_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnCullStateChanged_30), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_31() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_ShouldRecalculate_31)); }
	inline bool get_m_ShouldRecalculate_31() const { return ___m_ShouldRecalculate_31; }
	inline bool* get_address_of_m_ShouldRecalculate_31() { return &___m_ShouldRecalculate_31; }
	inline void set_m_ShouldRecalculate_31(bool value)
	{
		___m_ShouldRecalculate_31 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_32() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_StencilValue_32)); }
	inline int32_t get_m_StencilValue_32() const { return ___m_StencilValue_32; }
	inline int32_t* get_address_of_m_StencilValue_32() { return &___m_StencilValue_32; }
	inline void set_m_StencilValue_32(int32_t value)
	{
		___m_StencilValue_32 = value;
	}

	inline static int32_t get_offset_of_m_Corners_33() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_Corners_33)); }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* get_m_Corners_33() const { return ___m_Corners_33; }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28** get_address_of_m_Corners_33() { return &___m_Corners_33; }
	inline void set_m_Corners_33(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* value)
	{
		___m_Corners_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Corners_33), (void*)value);
	}
};


// UnityEngine.UI.Text
struct  Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030  : public MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F
{
public:
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t29F4568F4FB8C463AAFE6DD21FA7A812B4FF1494 * ___m_FontData_34;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_35;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * ___m_TextCache_36;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * ___m_TextCacheForLayout_37;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_39;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A* ___m_TempVerts_40;

public:
	inline static int32_t get_offset_of_m_FontData_34() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_FontData_34)); }
	inline FontData_t29F4568F4FB8C463AAFE6DD21FA7A812B4FF1494 * get_m_FontData_34() const { return ___m_FontData_34; }
	inline FontData_t29F4568F4FB8C463AAFE6DD21FA7A812B4FF1494 ** get_address_of_m_FontData_34() { return &___m_FontData_34; }
	inline void set_m_FontData_34(FontData_t29F4568F4FB8C463AAFE6DD21FA7A812B4FF1494 * value)
	{
		___m_FontData_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FontData_34), (void*)value);
	}

	inline static int32_t get_offset_of_m_Text_35() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_Text_35)); }
	inline String_t* get_m_Text_35() const { return ___m_Text_35; }
	inline String_t** get_address_of_m_Text_35() { return &___m_Text_35; }
	inline void set_m_Text_35(String_t* value)
	{
		___m_Text_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Text_35), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCache_36() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_TextCache_36)); }
	inline TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * get_m_TextCache_36() const { return ___m_TextCache_36; }
	inline TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 ** get_address_of_m_TextCache_36() { return &___m_TextCache_36; }
	inline void set_m_TextCache_36(TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * value)
	{
		___m_TextCache_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCache_36), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCacheForLayout_37() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_TextCacheForLayout_37)); }
	inline TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * get_m_TextCacheForLayout_37() const { return ___m_TextCacheForLayout_37; }
	inline TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 ** get_address_of_m_TextCacheForLayout_37() { return &___m_TextCacheForLayout_37; }
	inline void set_m_TextCacheForLayout_37(TextGenerator_tD455BE18A64C7DDF854F6DB3CCEBF705121C58A8 * value)
	{
		___m_TextCacheForLayout_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCacheForLayout_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisableFontTextureRebuiltCallback_39() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_DisableFontTextureRebuiltCallback_39)); }
	inline bool get_m_DisableFontTextureRebuiltCallback_39() const { return ___m_DisableFontTextureRebuiltCallback_39; }
	inline bool* get_address_of_m_DisableFontTextureRebuiltCallback_39() { return &___m_DisableFontTextureRebuiltCallback_39; }
	inline void set_m_DisableFontTextureRebuiltCallback_39(bool value)
	{
		___m_DisableFontTextureRebuiltCallback_39 = value;
	}

	inline static int32_t get_offset_of_m_TempVerts_40() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030, ___m_TempVerts_40)); }
	inline UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A* get_m_TempVerts_40() const { return ___m_TempVerts_40; }
	inline UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A** get_address_of_m_TempVerts_40() { return &___m_TempVerts_40; }
	inline void set_m_TempVerts_40(UIVertexU5BU5D_tB560F9F9269864891FCE1677971F603A08AA857A* value)
	{
		___m_TempVerts_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TempVerts_40), (void*)value);
	}
};

struct Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___s_DefaultText_38;

public:
	inline static int32_t get_offset_of_s_DefaultText_38() { return static_cast<int32_t>(offsetof(Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030_StaticFields, ___s_DefaultText_38)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_s_DefaultText_38() const { return ___s_DefaultText_38; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_s_DefaultText_38() { return &___s_DefaultText_38; }
	inline void set_s_DefaultText_38(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___s_DefaultText_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultText_38), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Player[]
struct PlayerU5BU5D_tB894FDF24E92B3AF2659FE883E1CF369BF663E2A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Player_t8321F4671F549F5A7793BB8BA33D32CCCD538873 * m_Items[1];

public:
	inline Player_t8321F4671F549F5A7793BB8BA33D32CCCD538873 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Player_t8321F4671F549F5A7793BB8BA33D32CCCD538873 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Player_t8321F4671F549F5A7793BB8BA33D32CCCD538873 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Player_t8321F4671F549F5A7793BB8BA33D32CCCD538873 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Player_t8321F4671F549F5A7793BB8BA33D32CCCD538873 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Player_t8321F4671F549F5A7793BB8BA33D32CCCD538873 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.String[]
struct StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E  : public RuntimeArray
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
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

public:
	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.GameObject[0...,0...]
struct GameObjectU5B0___U2C0___U5D_t73B972676307A2C07C036763B513798EF465D1CC  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * m_Items[1];

public:
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * GetAt(il2cpp_array_size_t i, il2cpp_array_size_t j) const
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items[index];
	}
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** GetAddressAt(il2cpp_array_size_t i, il2cpp_array_size_t j)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t i, il2cpp_array_size_t j, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		il2cpp_array_size_t iBound = bounds[0].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(i, iBound);
		il2cpp_array_size_t jBound = bounds[1].length;
		IL2CPP_ARRAY_BOUNDS_CHECK(j, jBound);

		il2cpp_array_size_t index = i * jBound + j;
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * GetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j) const
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items[index];
	}
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** GetAddressAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j)
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t i, il2cpp_array_size_t j, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		il2cpp_array_size_t jBound = bounds[1].length;

		il2cpp_array_size_t index = i * jBound + j;
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// !!0[] UnityEngine.GameObject::GetComponentsInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* GameObject_GetComponentsInChildren_TisRuntimeObject_mF6284FE6B77A126095C692AA4FAC2A7748448AFA_gshared (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityAction`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1__ctor_mF6AE3BA9395C61DE1466BE7BB863A77F3584EEC3_gshared (UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::AddListener(UnityEngine.Events.UnityAction`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_AddListener_m9E1606EB0E08E6B0ECACA780B7AD424D113C8334_gshared (UnityEvent_1_t9E897A46A46C78F7104A831E63BB081546EFFF0D * __this, UnityAction_1_t330F97880F37E23D6D0C6618DD77F28AC9EF8FA9 * p0, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_Invoke_m027706B0C7150736F066D5C663304CB0B80ABBF0_gshared (UnityEvent_1_t9E897A46A46C78F7104A831E63BB081546EFFF0D * __this, RuntimeObject * p0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_m41E09C4CA476451FE275573062956CED105CB79A_gshared (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m3FED1FF44F93EF1C3A07526800331B638EF4105B_gshared (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_mEF511C369E0CA9462FD3427DFC2375E81469570F_gshared (RuntimeObject * p0, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1__ctor_m38CD236F782AA440F6DDB5D90B4C9DA24CDBA3A7_gshared (UnityEvent_1_t9E897A46A46C78F7104A831E63BB081546EFFF0D * __this, const RuntimeMethod* method);

// !!0[] UnityEngine.GameObject::GetComponentsInChildren<Player>()
inline PlayerU5BU5D_tB894FDF24E92B3AF2659FE883E1CF369BF663E2A* GameObject_GetComponentsInChildren_TisPlayer_t8321F4671F549F5A7793BB8BA33D32CCCD538873_m5EBAE8FA11614CF16381FCB10FD5546C47A03607 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  PlayerU5BU5D_tB894FDF24E92B3AF2659FE883E1CF369BF663E2A* (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_GetComponentsInChildren_TisRuntimeObject_mF6284FE6B77A126095C692AA4FAC2A7748448AFA_gshared)(__this, method);
}
// System.String UnityEngine.Application::get_dataPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_dataPath_m33D721D71C0687F0013C8953FDB0807B7B3F2A01 (const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708 (RuntimeObject * p0, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityAction`1<System.String>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_1__ctor_mD502E44930D3947863E66F6AA08B8E6B59C364A6 (UnityAction_1_tC17304886B9B905228EEC74E84B4FDBF72A3C5A5 * __this, RuntimeObject * p0, intptr_t p1, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_1_tC17304886B9B905228EEC74E84B4FDBF72A3C5A5 *, RuntimeObject *, intptr_t, const RuntimeMethod*))UnityAction_1__ctor_mF6AE3BA9395C61DE1466BE7BB863A77F3584EEC3_gshared)(__this, p0, p1, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<System.String>::AddListener(UnityEngine.Events.UnityAction`1<!0>)
inline void UnityEvent_1_AddListener_mC67D95A26204A963AEA0D5A2BF5447945F5CA44F (UnityEvent_1_tACA444CD8B2CBDCD9393629F06117A47C27A8F15 * __this, UnityAction_1_tC17304886B9B905228EEC74E84B4FDBF72A3C5A5 * p0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tACA444CD8B2CBDCD9393629F06117A47C27A8F15 *, UnityAction_1_tC17304886B9B905228EEC74E84B4FDBF72A3C5A5 *, const RuntimeMethod*))UnityEvent_1_AddListener_m9E1606EB0E08E6B0ECACA780B7AD424D113C8334_gshared)(__this, p0, method);
}
// System.Void Game_System::GameOver(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Game_System_GameOver_m46BAEA09850B21333089BF923C00EB7FA4CDF319 (String_t* ___winner0, const RuntimeMethod* method);
// System.Void Game_System/<GetRequest>d__9::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetRequestU3Ed__9__ctor_m4FA207A15C1CF338B8C2C72CAF5530CBF6D47820 (U3CGetRequestU3Ed__9_t58AD01B3FACB2B70CE48D06F2AB5F3CEE9A9A8C9 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyDown_mD82B14BB87E1C811668BD1A2CFBC0CF3D4983FEA (int32_t p0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_mD0C8F37FF3CAB1D87AAA6C45130BD59626BD6780 (int32_t p0, int32_t p1, const RuntimeMethod* method);
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mA2D400141CB3C991C87A2556429781DE961A83CE (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<System.String>::Invoke(!0)
inline void UnityEvent_1_Invoke_m785D62C56B841167D83F26AFF612D86132DF59D1 (UnityEvent_1_tACA444CD8B2CBDCD9393629F06117A47C27A8F15 * __this, String_t* p0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tACA444CD8B2CBDCD9393629F06117A47C27A8F15 *, String_t*, const RuntimeMethod*))UnityEvent_1_Invoke_m027706B0C7150736F066D5C663304CB0B80ABBF0_gshared)(__this, p0, method);
}
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.UI.Text>()
inline Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * GameObject_GetComponent_TisText_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030_m24A42DAE3900B867697FFD9DFB6E448D6978CD4A (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m41E09C4CA476451FE275573062956CED105CB79A_gshared)(__this, method);
}
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE (String_t* p0, String_t* p1, const RuntimeMethod* method);
// System.Void UnityEngine.Random::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Random__ctor_m8AFDA023017D89AE699ED021E97869D568AE57DA (Random_tA8F80789DCC0FD1EDC77845D34F1D1A148DC9CCD * __this, const RuntimeMethod* method);
// System.Void MyStringEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MyStringEvent__ctor_m735C83E0BF62D44ECB2EC2810986E178409352F6 (MyStringEvent_tA778A6B61468456B32154016FDEBADDFADA208E9 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97 (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void Game_System/<GetRequest>d__9::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetRequestU3Ed__9_U3CU3Em__Finally1_m2EC03AD8DB2F2A6E5F75194EFF60C16BF1AD3B69 (U3CGetRequestU3Ed__9_t58AD01B3FACB2B70CE48D06F2AB5F3CEE9A9A8C9 * __this, const RuntimeMethod* method);
// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequest::Get(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * UnityWebRequest_Get_mF4E12AA47AAF25221AD738B434B0EA8D40659B18 (String_t* p0, const RuntimeMethod* method);
// UnityEngine.Networking.UnityWebRequestAsyncOperation UnityEngine.Networking.UnityWebRequest::SendWebRequest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequestAsyncOperation_t726E134F16701A2671D40BEBE22110DC57156353 * UnityWebRequest_SendWebRequest_mF536CB2A0A39354A54B555B66B017816C5833EBD (UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * __this, const RuntimeMethod* method);
// System.String[] System.String::Split(System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* String_Split_m13262358217AD2C119FD1B9733C3C0289D608512 (String_t* __this, CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* p0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Networking.UnityWebRequest::get_isNetworkError()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityWebRequest_get_isNetworkError_m082AFE1A58A330AC4CBD179606B61CB39DD44588 (UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * __this, const RuntimeMethod* method);
// System.String UnityEngine.Networking.UnityWebRequest::get_error()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityWebRequest_get_error_mC79FE2460B3F30B8F9E5385BD7D2B4C5B295D7CC (UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mF4626905368D6558695A823466A1AF65EADB9923 (String_t* p0, String_t* p1, String_t* p2, const RuntimeMethod* method);
// UnityEngine.Networking.DownloadHandler UnityEngine.Networking.UnityWebRequest::get_downloadHandler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9 * UnityWebRequest_get_downloadHandler_m83044026479E6B4B2739DCE9EEA8A0FAE7D9AF41 (UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * __this, const RuntimeMethod* method);
// System.String UnityEngine.Networking.DownloadHandler::get_text()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DownloadHandler_get_text_m1D707E375899B4F4F0434B79AB8D57ADFE5424FF (DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9 * __this, const RuntimeMethod* method);
// System.Void Game_System/<GetRequest>d__9::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetRequestU3Ed__9_System_IDisposable_Dispose_m05C034361ADD4E534D88236B16AE3C49C43886A9 (U3CGetRequestU3Ed__9_t58AD01B3FACB2B70CE48D06F2AB5F3CEE9A9A8C9 * __this, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_mA121DE1CAC8F25277DEB489DC7771209D91CAE33 (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Grid>()
inline Grid_t9989A4B9E81E8D350DF09DE256FF140F22AB6476 * Component_GetComponent_TisGrid_t9989A4B9E81E8D350DF09DE256FF140F22AB6476_m72E7E247390DF7FC370889D019F93B9E4DE382E1 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	return ((  Grid_t9989A4B9E81E8D350DF09DE256FF140F22AB6476 * (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m3FED1FF44F93EF1C3A07526800331B638EF4105B_gshared)(__this, method);
}
// UnityEngine.GridLayout/CellLayout UnityEngine.Grid::get_cellLayout()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Grid_get_cellLayout_m8A25E3F2C9870F157BE632CA11182777972D25A2 (Grid_t9989A4B9E81E8D350DF09DE256FF140F22AB6476 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0)
inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m598037C6F246E67DB3E38DFBB1F44D4D9921A85E (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * p0, const RuntimeMethod* method)
{
	return ((  GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_mEF511C369E0CA9462FD3427DFC2375E81469570F_gshared)(p0, method);
}
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_parent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_parent_m65B8E4660B2C554069C57A957D9E55FECA7AA73E (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * p0, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * __this, float p0, float p1, float p2, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  p0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.MeshRenderer>()
inline MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * Component_GetComponent_TisMeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED_mC449C73F107E3711492A2950958258EA357E447D (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	return ((  MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m3FED1FF44F93EF1C3A07526800331B638EF4105B_gshared)(__this, method);
}
// UnityEngine.Transform UnityEngine.Transform::get_parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * Transform_get_parent_m8FA24E38A1FA29D90CBF3CDC9F9F017C65BB3403 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<Game_System>()
inline Game_System_t15C82D18D4845C4A2DBF17C1064CA099D2080B2E * Component_GetComponent_TisGame_System_t15C82D18D4845C4A2DBF17C1064CA099D2080B2E_m3EA7F3A449D4426875D4E6A7A7EC288EBA63FAAB (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	return ((  Game_System_t15C82D18D4845C4A2DBF17C1064CA099D2080B2E * (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m3FED1FF44F93EF1C3A07526800331B638EF4105B_gshared)(__this, method);
}
// System.Void UnityEngine.Renderer::set_material(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_material_mB4988AD6A93C7FDACC4C07A99D1DAC23D10C0344 (Renderer_t0556D67DD582620D1F495627EDE30D03284151F4 * __this, Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * p0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetMouseButton(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButton_mFA83B0C0BABD3113D1AAB38FBB953C91EA7FFA30 (int32_t p0, const RuntimeMethod* method);
// System.Void Player::push_space(Grid_Space)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_push_space_m63549BE55923076F6BCA7AB9DF563021AC606DD3 (Player_t8321F4671F549F5A7793BB8BA33D32CCCD538873 * __this, Grid_Space_t585EDBB441A6B3EE2E0963BDF1CC84BA0A111F70 * ___gs0, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<System.String>::.ctor()
inline void UnityEvent_1__ctor_mEAC66A07E9EE31DAB32788A5C29B5E2D0B239E91 (UnityEvent_1_tACA444CD8B2CBDCD9393629F06117A47C27A8F15 * __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tACA444CD8B2CBDCD9393629F06117A47C27A8F15 *, const RuntimeMethod*))UnityEvent_1__ctor_m38CD236F782AA440F6DDB5D90B4C9DA24CDBA3A7_gshared)(__this, method);
}
// System.Boolean UnityEngine.Input::GetMouseButtonUp(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButtonUp_m726EDCD35F8DECF774810AB1E9ED590B85DB10F1 (int32_t p0, const RuntimeMethod* method);
// System.Void Player::ClearGrid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_ClearGrid_mB48FFF1CF08E03FC28C4811BA9FA21612994D1D7 (Player_t8321F4671F549F5A7793BB8BA33D32CCCD538873 * __this, const RuntimeMethod* method);
// System.Void System.Collections.ArrayList::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrayList__ctor_m481FA7B37620B59B8C0434A764F5705A6ABDEAE6 (ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 * __this, const RuntimeMethod* method);
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
#if !FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL GameOver(char*);
#endif
// System.Void Game_System::GameOver(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Game_System_GameOver_m46BAEA09850B21333089BF923C00EB7FA4CDF319 (String_t* ___winner0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (char*);

	// Marshaling of parameter '___winner0' to native representation
	char* ____winner0_marshaled = NULL;
	____winner0_marshaled = il2cpp_codegen_marshal_string(___winner0);

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(GameOver)(____winner0_marshaled);

	// Marshaling cleanup of parameter '___winner0' native representation
	il2cpp_codegen_marshal_free(____winner0_marshaled);
	____winner0_marshaled = NULL;

}
// System.Void Game_System::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Game_System_Start_mF560CBBBDC57F6D2AC4589A85137DF541C2C67ED (Game_System_t15C82D18D4845C4A2DBF17C1064CA099D2080B2E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Game_System_Start_mF560CBBBDC57F6D2AC4589A85137DF541C2C67ED_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = __this->get_player_container_4();
		PlayerU5BU5D_tB894FDF24E92B3AF2659FE883E1CF369BF663E2A* L_1 = GameObject_GetComponentsInChildren_TisPlayer_t8321F4671F549F5A7793BB8BA33D32CCCD538873_m5EBAE8FA11614CF16381FCB10FD5546C47A03607(L_0, /*hidden argument*/GameObject_GetComponentsInChildren_TisPlayer_t8321F4671F549F5A7793BB8BA33D32CCCD538873_m5EBAE8FA11614CF16381FCB10FD5546C47A03607_RuntimeMethod_var);
		__this->set_players_6(L_1);
		String_t* L_2 = Application_get_dataPath_m33D721D71C0687F0013C8953FDB0807B7B3F2A01(/*hidden argument*/NULL);
		__this->set_assetPath_8(L_2);
		String_t* L_3 = __this->get_assetPath_8();
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_3, /*hidden argument*/NULL);
		MyStringEvent_tA778A6B61468456B32154016FDEBADDFADA208E9 * L_4 = __this->get_gameOver_9();
		UnityAction_1_tC17304886B9B905228EEC74E84B4FDBF72A3C5A5 * L_5 = (UnityAction_1_tC17304886B9B905228EEC74E84B4FDBF72A3C5A5 *)il2cpp_codegen_object_new(UnityAction_1_tC17304886B9B905228EEC74E84B4FDBF72A3C5A5_il2cpp_TypeInfo_var);
		UnityAction_1__ctor_mD502E44930D3947863E66F6AA08B8E6B59C364A6(L_5, __this, (intptr_t)((intptr_t)Game_System_UGameOver_mF7E93DAF6CF227985DE0A86D470594AFB0A7B2B4_RuntimeMethod_var), /*hidden argument*/UnityAction_1__ctor_mD502E44930D3947863E66F6AA08B8E6B59C364A6_RuntimeMethod_var);
		UnityEvent_1_AddListener_mC67D95A26204A963AEA0D5A2BF5447945F5CA44F(L_4, L_5, /*hidden argument*/UnityEvent_1_AddListener_mC67D95A26204A963AEA0D5A2BF5447945F5CA44F_RuntimeMethod_var);
		return;
	}
}
// System.Void Game_System::UGameOver(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Game_System_UGameOver_mF7E93DAF6CF227985DE0A86D470594AFB0A7B2B4 (Game_System_t15C82D18D4845C4A2DBF17C1064CA099D2080B2E * __this, String_t* ___winner0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___winner0;
		Game_System_GameOver_m46BAEA09850B21333089BF923C00EB7FA4CDF319(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.IEnumerator Game_System::GetRequest(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Game_System_GetRequest_mD481BF42F023EA7B92A71B58978A1B2FF27A9B5E (Game_System_t15C82D18D4845C4A2DBF17C1064CA099D2080B2E * __this, String_t* ___uri0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Game_System_GetRequest_mD481BF42F023EA7B92A71B58978A1B2FF27A9B5E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CGetRequestU3Ed__9_t58AD01B3FACB2B70CE48D06F2AB5F3CEE9A9A8C9 * L_0 = (U3CGetRequestU3Ed__9_t58AD01B3FACB2B70CE48D06F2AB5F3CEE9A9A8C9 *)il2cpp_codegen_object_new(U3CGetRequestU3Ed__9_t58AD01B3FACB2B70CE48D06F2AB5F3CEE9A9A8C9_il2cpp_TypeInfo_var);
		U3CGetRequestU3Ed__9__ctor_m4FA207A15C1CF338B8C2C72CAF5530CBF6D47820(L_0, 0, /*hidden argument*/NULL);
		U3CGetRequestU3Ed__9_t58AD01B3FACB2B70CE48D06F2AB5F3CEE9A9A8C9 * L_1 = L_0;
		String_t* L_2 = ___uri0;
		L_1->set_uri_2(L_2);
		return L_1;
	}
}
// System.Void Game_System::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Game_System_Update_m6DB27AC9F18452E02B89AA7F0C69A641E00C636E (Game_System_t15C82D18D4845C4A2DBF17C1064CA099D2080B2E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Game_System_Update_m6DB27AC9F18452E02B89AA7F0C69A641E00C636E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		bool L_0 = Input_GetKeyDown_mD82B14BB87E1C811668BD1A2CFBC0CF3D4983FEA(((int32_t)32), /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0044;
		}
	}
	{
		PlayerU5BU5D_tB894FDF24E92B3AF2659FE883E1CF369BF663E2A* L_1 = __this->get_players_6();
		int32_t L_2 = Random_Range_mD0C8F37FF3CAB1D87AAA6C45130BD59626BD6780(0, 2, /*hidden argument*/NULL);
		int32_t L_3 = L_2;
		Player_t8321F4671F549F5A7793BB8BA33D32CCCD538873 * L_4 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		String_t* L_5 = Object_get_name_mA2D400141CB3C991C87A2556429781DE961A83CE(L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		MyStringEvent_tA778A6B61468456B32154016FDEBADDFADA208E9 * L_6 = __this->get_gameOver_9();
		String_t* L_7 = V_0;
		UnityEvent_1_Invoke_m785D62C56B841167D83F26AFF612D86132DF59D1(L_6, L_7, /*hidden argument*/UnityEvent_1_Invoke_m785D62C56B841167D83F26AFF612D86132DF59D1_RuntimeMethod_var);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_8 = __this->get_Text_5();
		Text_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030 * L_9 = GameObject_GetComponent_TisText_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030_m24A42DAE3900B867697FFD9DFB6E448D6978CD4A(L_8, /*hidden argument*/GameObject_GetComponent_TisText_tE9317B57477F4B50AA4C16F460DE6F82DAD6D030_m24A42DAE3900B867697FFD9DFB6E448D6978CD4A_RuntimeMethod_var);
		String_t* L_10 = V_0;
		String_t* L_11 = String_Concat_mB78D0094592718DA6D5DB6C712A9C225631666BE(_stringLiteralB43B0CE0B6FDB020E08B9A3CA500A982384549E5, L_10, /*hidden argument*/NULL);
		VirtActionInvoker1< String_t* >::Invoke(73 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_9, L_11);
	}

IL_0044:
	{
		return;
	}
}
// System.Void Game_System::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Game_System__ctor_mC86196836B2DB9438DEC4FAA66FCAE3B6F58E7B3 (Game_System_t15C82D18D4845C4A2DBF17C1064CA099D2080B2E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Game_System__ctor_mC86196836B2DB9438DEC4FAA66FCAE3B6F58E7B3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Random_tA8F80789DCC0FD1EDC77845D34F1D1A148DC9CCD * L_0 = (Random_tA8F80789DCC0FD1EDC77845D34F1D1A148DC9CCD *)il2cpp_codegen_object_new(Random_tA8F80789DCC0FD1EDC77845D34F1D1A148DC9CCD_il2cpp_TypeInfo_var);
		Random__ctor_m8AFDA023017D89AE699ED021E97869D568AE57DA(L_0, /*hidden argument*/NULL);
		__this->set_rnd_7(L_0);
		MyStringEvent_tA778A6B61468456B32154016FDEBADDFADA208E9 * L_1 = (MyStringEvent_tA778A6B61468456B32154016FDEBADDFADA208E9 *)il2cpp_codegen_object_new(MyStringEvent_tA778A6B61468456B32154016FDEBADDFADA208E9_il2cpp_TypeInfo_var);
		MyStringEvent__ctor_m735C83E0BF62D44ECB2EC2810986E178409352F6(L_1, /*hidden argument*/NULL);
		__this->set_gameOver_9(L_1);
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// System.Void Game_System_<GetRequest>d__9::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetRequestU3Ed__9__ctor_m4FA207A15C1CF338B8C2C72CAF5530CBF6D47820 (U3CGetRequestU3Ed__9_t58AD01B3FACB2B70CE48D06F2AB5F3CEE9A9A8C9 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Game_System_<GetRequest>d__9::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetRequestU3Ed__9_System_IDisposable_Dispose_m05C034361ADD4E534D88236B16AE3C49C43886A9 (U3CGetRequestU3Ed__9_t58AD01B3FACB2B70CE48D06F2AB5F3CEE9A9A8C9 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_001a;
		}
	}

IL_0010:
	{
	}

IL_0011:
	try
	{ // begin try (depth: 1)
		IL2CPP_LEAVE(0x1A, FINALLY_0013);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0013;
	}

FINALLY_0013:
	{ // begin finally (depth: 1)
		U3CGetRequestU3Ed__9_U3CU3Em__Finally1_m2EC03AD8DB2F2A6E5F75194EFF60C16BF1AD3B69(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(19)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(19)
	{
		IL2CPP_JUMP_TBL(0x1A, IL_001a)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_001a:
	{
		return;
	}
}
// System.Boolean Game_System_<GetRequest>d__9::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CGetRequestU3Ed__9_MoveNext_m432CC67CE7AF527F032183B951C029442F453179 (U3CGetRequestU3Ed__9_t58AD01B3FACB2B70CE48D06F2AB5F3CEE9A9A8C9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CGetRequestU3Ed__9_MoveNext_m432CC67CE7AF527F032183B951C029442F453179_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* V_2 = NULL;
	int32_t V_3 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 3);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_0 = __this->get_U3CU3E1__state_0();
			V_1 = L_0;
			int32_t L_1 = V_1;
			if (!L_1)
			{
				goto IL_0015;
			}
		}

IL_000a:
		{
			int32_t L_2 = V_1;
			if ((((int32_t)L_2) == ((int32_t)1)))
			{
				goto IL_0054;
			}
		}

IL_000e:
		{
			V_0 = (bool)0;
			goto IL_00df;
		}

IL_0015:
		{
			__this->set_U3CU3E1__state_0((-1));
			String_t* L_3 = __this->get_uri_2();
			UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * L_4 = UnityWebRequest_Get_mF4E12AA47AAF25221AD738B434B0EA8D40659B18(L_3, /*hidden argument*/NULL);
			__this->set_U3CwebRequestU3E5__2_3(L_4);
			__this->set_U3CU3E1__state_0(((int32_t)-3));
			UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * L_5 = __this->get_U3CwebRequestU3E5__2_3();
			UnityWebRequestAsyncOperation_t726E134F16701A2671D40BEBE22110DC57156353 * L_6 = UnityWebRequest_SendWebRequest_mF536CB2A0A39354A54B555B66B017816C5833EBD(L_5, /*hidden argument*/NULL);
			__this->set_U3CU3E2__current_1(L_6);
			__this->set_U3CU3E1__state_0(1);
			V_0 = (bool)1;
			goto IL_00df;
		}

IL_0054:
		{
			__this->set_U3CU3E1__state_0(((int32_t)-3));
			String_t* L_7 = __this->get_uri_2();
			CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_8 = (CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2*)(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2*)SZArrayNew(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2_il2cpp_TypeInfo_var, (uint32_t)1);
			CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* L_9 = L_8;
			(L_9)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)47));
			StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_10 = String_Split_m13262358217AD2C119FD1B9733C3C0289D608512(L_7, L_9, /*hidden argument*/NULL);
			V_2 = L_10;
			StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_11 = V_2;
			V_3 = ((int32_t)il2cpp_codegen_subtract((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length)))), (int32_t)1));
			UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * L_12 = __this->get_U3CwebRequestU3E5__2_3();
			bool L_13 = UnityWebRequest_get_isNetworkError_m082AFE1A58A330AC4CBD179606B61CB39DD44588(L_12, /*hidden argument*/NULL);
			if (!L_13)
			{
				goto IL_00a5;
			}
		}

IL_0086:
		{
			StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_14 = V_2;
			int32_t L_15 = V_3;
			int32_t L_16 = L_15;
			String_t* L_17 = (L_14)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_16));
			UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * L_18 = __this->get_U3CwebRequestU3E5__2_3();
			String_t* L_19 = UnityWebRequest_get_error_mC79FE2460B3F30B8F9E5385BD7D2B4C5B295D7CC(L_18, /*hidden argument*/NULL);
			String_t* L_20 = String_Concat_mF4626905368D6558695A823466A1AF65EADB9923(L_17, _stringLiteralAFFC0457EDADEDBD013FA917F9FB035D9E89E73B, L_19, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
			Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_20, /*hidden argument*/NULL);
			goto IL_00c7;
		}

IL_00a5:
		{
			StringU5BU5D_t933FB07893230EA91C40FF900D5400665E87B14E* L_21 = V_2;
			int32_t L_22 = V_3;
			int32_t L_23 = L_22;
			String_t* L_24 = (L_21)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_23));
			UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * L_25 = __this->get_U3CwebRequestU3E5__2_3();
			DownloadHandler_t4A7802ADC97024B469C87FA454B6973951980EE9 * L_26 = UnityWebRequest_get_downloadHandler_m83044026479E6B4B2739DCE9EEA8A0FAE7D9AF41(L_25, /*hidden argument*/NULL);
			String_t* L_27 = DownloadHandler_get_text_m1D707E375899B4F4F0434B79AB8D57ADFE5424FF(L_26, /*hidden argument*/NULL);
			String_t* L_28 = String_Concat_mF4626905368D6558695A823466A1AF65EADB9923(L_24, _stringLiteral01F2A06473F84C9036D307474DB7A05569FDC695, L_27, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
			Debug_Log_m4B7C70BAFD477C6BDB59C88A0934F0B018D03708(L_28, /*hidden argument*/NULL);
		}

IL_00c7:
		{
			U3CGetRequestU3Ed__9_U3CU3Em__Finally1_m2EC03AD8DB2F2A6E5F75194EFF60C16BF1AD3B69(__this, /*hidden argument*/NULL);
			__this->set_U3CwebRequestU3E5__2_3((UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 *)NULL);
			V_0 = (bool)0;
			goto IL_00df;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FAULT_00d8;
	}

FAULT_00d8:
	{ // begin fault (depth: 1)
		U3CGetRequestU3Ed__9_System_IDisposable_Dispose_m05C034361ADD4E534D88236B16AE3C49C43886A9(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(216)
	} // end fault
	IL2CPP_CLEANUP(216)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00df:
	{
		bool L_29 = V_0;
		return L_29;
	}
}
// System.Void Game_System_<GetRequest>d__9::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetRequestU3Ed__9_U3CU3Em__Finally1_m2EC03AD8DB2F2A6E5F75194EFF60C16BF1AD3B69 (U3CGetRequestU3Ed__9_t58AD01B3FACB2B70CE48D06F2AB5F3CEE9A9A8C9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CGetRequestU3Ed__9_U3CU3Em__Finally1_m2EC03AD8DB2F2A6E5F75194EFF60C16BF1AD3B69_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_U3CU3E1__state_0((-1));
		UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * L_0 = __this->get_U3CwebRequestU3E5__2_3();
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		UnityWebRequest_t9120F5A2C7D43B936B49C0B7E4CA54C822689129 * L_1 = __this->get_U3CwebRequestU3E5__2_3();
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_1);
	}

IL_001a:
	{
		return;
	}
}
// System.Object Game_System_<GetRequest>d__9::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CGetRequestU3Ed__9_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m946CFB48A7277B81A49DF74A7F62713A29000870 (U3CGetRequestU3Ed__9_t58AD01B3FACB2B70CE48D06F2AB5F3CEE9A9A8C9 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Game_System_<GetRequest>d__9::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetRequestU3Ed__9_System_Collections_IEnumerator_Reset_mB9F4989E0AADC947810A33DFAFC87AB6703A1BDB (U3CGetRequestU3Ed__9_t58AD01B3FACB2B70CE48D06F2AB5F3CEE9A9A8C9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CGetRequestU3Ed__9_System_Collections_IEnumerator_Reset_mB9F4989E0AADC947810A33DFAFC87AB6703A1BDB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * L_0 = (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 *)il2cpp_codegen_object_new(NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_mA121DE1CAC8F25277DEB489DC7771209D91CAE33(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, NULL, U3CGetRequestU3Ed__9_System_Collections_IEnumerator_Reset_mB9F4989E0AADC947810A33DFAFC87AB6703A1BDB_RuntimeMethod_var);
	}
}
// System.Object Game_System_<GetRequest>d__9::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CGetRequestU3Ed__9_System_Collections_IEnumerator_get_Current_mB04923ADD59A245D9CDAD444D8EE1F5D83C2D7CE (U3CGetRequestU3Ed__9_t58AD01B3FACB2B70CE48D06F2AB5F3CEE9A9A8C9 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
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
// System.Void Grid_Instance::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Grid_Instance_Start_m3A8523B9444FB1A218C7F2A1877AD72CE35F0585 (Grid_Instance_t51A4E6F74F3448AE53F323B127743C3D97811843 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Grid_Instance_Start_m3A8523B9444FB1A218C7F2A1877AD72CE35F0585_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		Grid_t9989A4B9E81E8D350DF09DE256FF140F22AB6476 * L_0 = Component_GetComponent_TisGrid_t9989A4B9E81E8D350DF09DE256FF140F22AB6476_m72E7E247390DF7FC370889D019F93B9E4DE382E1(__this, /*hidden argument*/Component_GetComponent_TisGrid_t9989A4B9E81E8D350DF09DE256FF140F22AB6476_m72E7E247390DF7FC370889D019F93B9E4DE382E1_RuntimeMethod_var);
		__this->set_grid_11(L_0);
		Grid_t9989A4B9E81E8D350DF09DE256FF140F22AB6476 * L_1 = __this->get_grid_11();
		int32_t L_2 = Grid_get_cellLayout_m8A25E3F2C9870F157BE632CA11182777972D25A2(L_1, /*hidden argument*/NULL);
		__this->set_layout_12(L_2);
		int32_t L_3 = __this->get_columns_4();
		int32_t L_4 = __this->get_rows_5();
		il2cpp_array_size_t L_6[] = { (il2cpp_array_size_t)L_3, (il2cpp_array_size_t)L_4 };
		GameObjectU5B0___U2C0___U5D_t73B972676307A2C07C036763B513798EF465D1CC* L_5 = (GameObjectU5B0___U2C0___U5D_t73B972676307A2C07C036763B513798EF465D1CC*)GenArrayNew(GameObjectU5B0___U2C0___U5D_t73B972676307A2C07C036763B513798EF465D1CC_il2cpp_TypeInfo_var, L_6);
		__this->set_grid_spaces_6((GameObjectU5B0___U2C0___U5D_t73B972676307A2C07C036763B513798EF465D1CC*)L_5);
		int32_t L_7 = __this->get_layout_12();
		V_0 = L_7;
		int32_t L_8 = V_0;
		if (!L_8)
		{
			goto IL_0044;
		}
	}
	{
		int32_t L_9 = V_0;
		if ((((int32_t)L_9) == ((int32_t)1)))
		{
			goto IL_005c;
		}
	}
	{
		goto IL_0072;
	}

IL_0044:
	{
		__this->set_xstep_8((1.0f));
		__this->set_zstep_10((1.0f));
		goto IL_0072;
	}

IL_005c:
	{
		__this->set_xstep_8((1.0f));
		__this->set_zstep_10((0.75f));
	}

IL_0072:
	{
		V_1 = 0;
		goto IL_0158;
	}

IL_0079:
	{
		V_2 = 0;
		goto IL_0148;
	}

IL_0080:
	{
		GameObjectU5B0___U2C0___U5D_t73B972676307A2C07C036763B513798EF465D1CC* L_10 = __this->get_grid_spaces_6();
		int32_t L_11 = V_1;
		int32_t L_12 = V_2;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_13 = __this->get_space_prefab_7();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_14 = Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m598037C6F246E67DB3E38DFBB1F44D4D9921A85E(L_13, /*hidden argument*/Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m598037C6F246E67DB3E38DFBB1F44D4D9921A85E_RuntimeMethod_var);
		((GameObjectU5B0___U2C0___U5D_t73B972676307A2C07C036763B513798EF465D1CC*)(GameObjectU5B0___U2C0___U5D_t73B972676307A2C07C036763B513798EF465D1CC*)L_10)->SetAtUnchecked(L_11, L_12, L_14);
		GameObjectU5B0___U2C0___U5D_t73B972676307A2C07C036763B513798EF465D1CC* L_15 = __this->get_grid_spaces_6();
		int32_t L_16 = V_1;
		int32_t L_17 = V_2;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_18 = ((GameObjectU5B0___U2C0___U5D_t73B972676307A2C07C036763B513798EF465D1CC*)(GameObjectU5B0___U2C0___U5D_t73B972676307A2C07C036763B513798EF465D1CC*)L_15)->GetAtUnchecked(L_16, L_17);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_19 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_18, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_20 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Transform_set_parent_m65B8E4660B2C554069C57A957D9E55FECA7AA73E(L_19, L_20, /*hidden argument*/NULL);
		int32_t L_21 = __this->get_layout_12();
		V_0 = L_21;
		int32_t L_22 = V_0;
		if (!L_22)
		{
			goto IL_00c5;
		}
	}
	{
		int32_t L_23 = V_0;
		if ((((int32_t)L_23) == ((int32_t)1)))
		{
			goto IL_0106;
		}
	}
	{
		goto IL_0144;
	}

IL_00c5:
	{
		GameObjectU5B0___U2C0___U5D_t73B972676307A2C07C036763B513798EF465D1CC* L_24 = __this->get_grid_spaces_6();
		int32_t L_25 = V_1;
		int32_t L_26 = V_2;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_27 = ((GameObjectU5B0___U2C0___U5D_t73B972676307A2C07C036763B513798EF465D1CC*)(GameObjectU5B0___U2C0___U5D_t73B972676307A2C07C036763B513798EF465D1CC*)L_24)->GetAtUnchecked(L_25, L_26);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_28 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_27, /*hidden argument*/NULL);
		int32_t L_29 = V_1;
		float L_30 = __this->get_xstep_8();
		int32_t L_31 = V_2;
		float L_32 = __this->get_zstep_10();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_33;
		memset((&L_33), 0, sizeof(L_33));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_33), ((float)il2cpp_codegen_add((float)(0.5f), (float)((float)il2cpp_codegen_multiply((float)(((float)((float)L_29))), (float)L_30)))), (0.0f), ((float)il2cpp_codegen_add((float)(0.5f), (float)((float)il2cpp_codegen_multiply((float)(((float)((float)L_31))), (float)L_32)))), /*hidden argument*/NULL);
		Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC(L_28, L_33, /*hidden argument*/NULL);
		goto IL_0144;
	}

IL_0106:
	{
		GameObjectU5B0___U2C0___U5D_t73B972676307A2C07C036763B513798EF465D1CC* L_34 = __this->get_grid_spaces_6();
		int32_t L_35 = V_1;
		int32_t L_36 = V_2;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_37 = ((GameObjectU5B0___U2C0___U5D_t73B972676307A2C07C036763B513798EF465D1CC*)(GameObjectU5B0___U2C0___U5D_t73B972676307A2C07C036763B513798EF465D1CC*)L_34)->GetAtUnchecked(L_35, L_36);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_38 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_37, /*hidden argument*/NULL);
		int32_t L_39 = V_2;
		int32_t L_40 = V_1;
		float L_41 = __this->get_xstep_8();
		int32_t L_42 = V_2;
		float L_43 = __this->get_zstep_10();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_44;
		memset((&L_44), 0, sizeof(L_44));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_44), ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)(((float)((float)((int32_t)((int32_t)L_39%(int32_t)2))))), (float)(0.5f))), (float)((float)il2cpp_codegen_multiply((float)(((float)((float)L_40))), (float)L_41)))), (0.0f), ((float)il2cpp_codegen_multiply((float)(((float)((float)L_42))), (float)L_43)), /*hidden argument*/NULL);
		Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC(L_38, L_44, /*hidden argument*/NULL);
	}

IL_0144:
	{
		int32_t L_45 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_45, (int32_t)1));
	}

IL_0148:
	{
		int32_t L_46 = V_2;
		int32_t L_47 = __this->get_rows_5();
		if ((((int32_t)L_46) < ((int32_t)L_47)))
		{
			goto IL_0080;
		}
	}
	{
		int32_t L_48 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_48, (int32_t)1));
	}

IL_0158:
	{
		int32_t L_49 = V_1;
		int32_t L_50 = __this->get_columns_4();
		if ((((int32_t)L_49) < ((int32_t)L_50)))
		{
			goto IL_0079;
		}
	}
	{
		return;
	}
}
// System.Void Grid_Instance::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Grid_Instance__ctor_m39B33441F15F71ABFFC13037ADA246639FE351FA (Grid_Instance_t51A4E6F74F3448AE53F323B127743C3D97811843 * __this, const RuntimeMethod* method)
{
	{
		__this->set_columns_4(5);
		__this->set_rows_5(5);
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// System.Void Grid_Space::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Grid_Space_Start_m02C75759FE5E31C7CBB0757278D1C951749D6231 (Grid_Space_t585EDBB441A6B3EE2E0963BDF1CC84BA0A111F70 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Grid_Space_Start_m02C75759FE5E31C7CBB0757278D1C951749D6231_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * L_0 = Component_GetComponent_TisMeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED_mC449C73F107E3711492A2950958258EA357E447D(__this, /*hidden argument*/Component_GetComponent_TisMeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED_mC449C73F107E3711492A2950958258EA357E447D_RuntimeMethod_var);
		__this->set_meshRenderer_8(L_0);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_1 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_2 = Transform_get_parent_m8FA24E38A1FA29D90CBF3CDC9F9F017C65BB3403(L_1, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_3 = Transform_get_parent_m8FA24E38A1FA29D90CBF3CDC9F9F017C65BB3403(L_2, /*hidden argument*/NULL);
		Game_System_t15C82D18D4845C4A2DBF17C1064CA099D2080B2E * L_4 = Component_GetComponent_TisGame_System_t15C82D18D4845C4A2DBF17C1064CA099D2080B2E_m3EA7F3A449D4426875D4E6A7A7EC288EBA63FAAB(L_3, /*hidden argument*/Component_GetComponent_TisGame_System_t15C82D18D4845C4A2DBF17C1064CA099D2080B2E_m3EA7F3A449D4426875D4E6A7A7EC288EBA63FAAB_RuntimeMethod_var);
		__this->set_gameSys_9(L_4);
		return;
	}
}
// System.Void Grid_Space::OnMouseOver()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Grid_Space_OnMouseOver_m4722751601222E88113D81FB8D99AD7A85BCF9BA (Grid_Space_t585EDBB441A6B3EE2E0963BDF1CC84BA0A111F70 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_selected_7();
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * L_1 = __this->get_meshRenderer_8();
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_2 = __this->get_selMat_5();
		Renderer_set_material_mB4988AD6A93C7FDACC4C07A99D1DAC23D10C0344(L_1, L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void Grid_Space::OnMouseExit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Grid_Space_OnMouseExit_mF2A5B02E94B852A166552718C2A4A4FB7B8AECC2 (Grid_Space_t585EDBB441A6B3EE2E0963BDF1CC84BA0A111F70 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_selected_7();
		if (L_0)
		{
			goto IL_0021;
		}
	}
	{
		bool L_1 = Input_GetMouseButton_mFA83B0C0BABD3113D1AAB38FBB953C91EA7FFA30(0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0021;
		}
	}
	{
		MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * L_2 = __this->get_meshRenderer_8();
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_3 = __this->get_defMat_4();
		Renderer_set_material_mB4988AD6A93C7FDACC4C07A99D1DAC23D10C0344(L_2, L_3, /*hidden argument*/NULL);
	}

IL_0021:
	{
		bool L_4 = __this->get_selected_7();
		if (L_4)
		{
			goto IL_005c;
		}
	}
	{
		bool L_5 = Input_GetMouseButton_mFA83B0C0BABD3113D1AAB38FBB953C91EA7FFA30(0, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_005c;
		}
	}
	{
		Game_System_t15C82D18D4845C4A2DBF17C1064CA099D2080B2E * L_6 = __this->get_gameSys_9();
		PlayerU5BU5D_tB894FDF24E92B3AF2659FE883E1CF369BF663E2A* L_7 = L_6->get_players_6();
		int32_t L_8 = 0;
		Player_t8321F4671F549F5A7793BB8BA33D32CCCD538873 * L_9 = (L_7)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_8));
		Player_push_space_m63549BE55923076F6BCA7AB9DF563021AC606DD3(L_9, __this, /*hidden argument*/NULL);
		MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * L_10 = __this->get_meshRenderer_8();
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_11 = __this->get_curMat_6();
		Renderer_set_material_mB4988AD6A93C7FDACC4C07A99D1DAC23D10C0344(L_10, L_11, /*hidden argument*/NULL);
		__this->set_selected_7((bool)1);
	}

IL_005c:
	{
		return;
	}
}
// System.Void Grid_Space::OnMouseDown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Grid_Space_OnMouseDown_m9072AFA5F9B40F6A95AAC6C1C976F20FE06FD62D (Grid_Space_t585EDBB441A6B3EE2E0963BDF1CC84BA0A111F70 * __this, const RuntimeMethod* method)
{
	{
		Game_System_t15C82D18D4845C4A2DBF17C1064CA099D2080B2E * L_0 = __this->get_gameSys_9();
		PlayerU5BU5D_tB894FDF24E92B3AF2659FE883E1CF369BF663E2A* L_1 = L_0->get_players_6();
		int32_t L_2 = 0;
		Player_t8321F4671F549F5A7793BB8BA33D32CCCD538873 * L_3 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2));
		Player_push_space_m63549BE55923076F6BCA7AB9DF563021AC606DD3(L_3, __this, /*hidden argument*/NULL);
		MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * L_4 = __this->get_meshRenderer_8();
		Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_5 = __this->get_curMat_6();
		Renderer_set_material_mB4988AD6A93C7FDACC4C07A99D1DAC23D10C0344(L_4, L_5, /*hidden argument*/NULL);
		__this->set_selected_7((bool)1);
		return;
	}
}
// System.Void Grid_Space::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Grid_Space__ctor_mD22B77D6B16CABDF867ACE9400F524A19C8608F9 (Grid_Space_t585EDBB441A6B3EE2E0963BDF1CC84BA0A111F70 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// System.Void MyStringEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MyStringEvent__ctor_m735C83E0BF62D44ECB2EC2810986E178409352F6 (MyStringEvent_tA778A6B61468456B32154016FDEBADDFADA208E9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MyStringEvent__ctor_m735C83E0BF62D44ECB2EC2810986E178409352F6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_mEAC66A07E9EE31DAB32788A5C29B5E2D0B239E91(__this, /*hidden argument*/UnityEvent_1__ctor_mEAC66A07E9EE31DAB32788A5C29B5E2D0B239E91_RuntimeMethod_var);
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
// System.Void Player::push_space(Grid_Space)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_push_space_m63549BE55923076F6BCA7AB9DF563021AC606DD3 (Player_t8321F4671F549F5A7793BB8BA33D32CCCD538873 * __this, Grid_Space_t585EDBB441A6B3EE2E0963BDF1CC84BA0A111F70 * ___gs0, const RuntimeMethod* method)
{
	{
		ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 * L_0 = __this->get_grid_selected_4();
		Grid_Space_t585EDBB441A6B3EE2E0963BDF1CC84BA0A111F70 * L_1 = ___gs0;
		VirtFuncInvoker1< int32_t, RuntimeObject * >::Invoke(29 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_0, L_1);
		return;
	}
}
// System.Void Player::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_Update_m6F977BAE3756AB7073D64042B766B442E4EC6FD2 (Player_t8321F4671F549F5A7793BB8BA33D32CCCD538873 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = Input_GetMouseButtonUp_m726EDCD35F8DECF774810AB1E9ED590B85DB10F1(0, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		Player_ClearGrid_mB48FFF1CF08E03FC28C4811BA9FA21612994D1D7(__this, /*hidden argument*/NULL);
	}

IL_000e:
	{
		return;
	}
}
// System.Void Player::ClearGrid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_ClearGrid_mB48FFF1CF08E03FC28C4811BA9FA21612994D1D7 (Player_t8321F4671F549F5A7793BB8BA33D32CCCD538873 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Player_ClearGrid_mB48FFF1CF08E03FC28C4811BA9FA21612994D1D7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	Grid_Space_t585EDBB441A6B3EE2E0963BDF1CC84BA0A111F70 * V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 * L_0 = __this->get_grid_selected_4();
		RuntimeObject* L_1 = VirtFuncInvoker0< RuntimeObject* >::Invoke(35 /* System.Collections.IEnumerator System.Collections.ArrayList::GetEnumerator() */, L_0);
		V_0 = L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0032;
		}

IL_000e:
		{
			RuntimeObject* L_2 = V_0;
			RuntimeObject * L_3 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, L_2);
			V_1 = ((Grid_Space_t585EDBB441A6B3EE2E0963BDF1CC84BA0A111F70 *)CastclassClass((RuntimeObject*)L_3, Grid_Space_t585EDBB441A6B3EE2E0963BDF1CC84BA0A111F70_il2cpp_TypeInfo_var));
			Grid_Space_t585EDBB441A6B3EE2E0963BDF1CC84BA0A111F70 * L_4 = V_1;
			L_4->set_selected_7((bool)0);
			Grid_Space_t585EDBB441A6B3EE2E0963BDF1CC84BA0A111F70 * L_5 = V_1;
			MeshRenderer_t9D67CA54E83315F743623BDE8EADCD5074659EED * L_6 = L_5->get_meshRenderer_8();
			Grid_Space_t585EDBB441A6B3EE2E0963BDF1CC84BA0A111F70 * L_7 = V_1;
			Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * L_8 = L_7->get_defMat_4();
			Renderer_set_material_mB4988AD6A93C7FDACC4C07A99D1DAC23D10C0344(L_6, L_8, /*hidden argument*/NULL);
		}

IL_0032:
		{
			RuntimeObject* L_9 = V_0;
			bool L_10 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A_il2cpp_TypeInfo_var, L_9);
			if (L_10)
			{
				goto IL_000e;
			}
		}

IL_003a:
		{
			IL2CPP_LEAVE(0x4D, FINALLY_003c);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_003c;
	}

FINALLY_003c:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_11 = V_0;
			V_2 = ((RuntimeObject*)IsInst((RuntimeObject*)L_11, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var));
			RuntimeObject* L_12 = V_2;
			if (!L_12)
			{
				goto IL_004c;
			}
		}

IL_0046:
		{
			RuntimeObject* L_13 = V_2;
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t7218B22548186B208D65EA5B7870503810A2D15A_il2cpp_TypeInfo_var, L_13);
		}

IL_004c:
		{
			IL2CPP_END_FINALLY(60)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(60)
	{
		IL2CPP_JUMP_TBL(0x4D, IL_004d)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_004d:
	{
		return;
	}
}
// System.Void Player::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player__ctor_m8F4AB650C5E2DE406B3C65EA8F662013458D85E2 (Player_t8321F4671F549F5A7793BB8BA33D32CCCD538873 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Player__ctor_m8F4AB650C5E2DE406B3C65EA8F662013458D85E2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 * L_0 = (ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4 *)il2cpp_codegen_object_new(ArrayList_t4131E0C29C7E1B9BC9DFE37BEC41A5EB1481ADF4_il2cpp_TypeInfo_var);
		ArrayList__ctor_m481FA7B37620B59B8C0434A764F5705A6ABDEAE6(L_0, /*hidden argument*/NULL);
		__this->set_grid_selected_4(L_0);
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
