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

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "object-internals.h"

// System.String
struct String_t;
// System.ArgumentException
struct ArgumentException_t549111297;
// System.Action`1<UnityEngine.XR.XRNodeState>
struct Action_1_t3382303471;
// UnityEngine.Camera
struct Camera_t2707972563;
// UnityEngine.Object
struct Object_t3038624000;
// System.ArgumentNullException
struct ArgumentNullException_t366727329;
// System.IntPtr[]
struct IntPtrU5BU5D_t3484816003;
// System.Collections.IDictionary
struct IDictionary_t1921547805;
// System.Char[]
struct CharU5BU5D_t2243636323;
// System.Void
struct Void_t1589630819;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t2130762809;
// System.IAsyncResult
struct IAsyncResult_t3652441450;
// System.AsyncCallback
struct AsyncCallback_t1562013078;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t2525443191;

extern RuntimeClass* XRNodeState_t3058385596_il2cpp_TypeInfo_var;
extern RuntimeClass* InputTracking_t2562362649_il2cpp_TypeInfo_var;
extern RuntimeClass* TrackingStateEventType_t2074996932_il2cpp_TypeInfo_var;
extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern RuntimeClass* ArgumentException_t549111297_il2cpp_TypeInfo_var;
extern const RuntimeMethod* Action_1_Invoke_m1198087649_RuntimeMethod_var;
extern Il2CppCodeGenString* _stringLiteral4170674579;
extern const uint32_t InputTracking_InvokeTrackingEvent_m3344411335_MetadataUsageId;
extern const uint32_t InputTracking__cctor_m1230510968_MetadataUsageId;
extern RuntimeClass* Object_t3038624000_il2cpp_TypeInfo_var;
extern RuntimeClass* ArgumentNullException_t366727329_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral849893747;
extern const uint32_t XRDevice_DisableAutoXRCameraTracking_m1355381392_MetadataUsageId;



#ifndef U3CMODULEU3E_T2468776598_H
#define U3CMODULEU3E_T2468776598_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t2468776598 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T2468776598_H
#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
struct Il2CppArrayBounds;
#ifndef RUNTIMEARRAY_H
#define RUNTIMEARRAY_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEARRAY_H
#ifndef VALUETYPE_T1071834735_H
#define VALUETYPE_T1071834735_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t1071834735  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t1071834735_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t1071834735_marshaled_com
{
};
#endif // VALUETYPE_T1071834735_H
#ifndef XRSETTINGS_T232003125_H
#define XRSETTINGS_T232003125_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.XRSettings
struct  XRSettings_t232003125  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XRSETTINGS_T232003125_H
#ifndef EXCEPTION_T181584025_H
#define EXCEPTION_T181584025_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t181584025  : public RuntimeObject
{
public:
	// System.IntPtr[] System.Exception::trace_ips
	IntPtrU5BU5D_t3484816003* ___trace_ips_0;
	// System.Exception System.Exception::inner_exception
	Exception_t181584025 * ___inner_exception_1;
	// System.String System.Exception::message
	String_t* ___message_2;
	// System.String System.Exception::help_link
	String_t* ___help_link_3;
	// System.String System.Exception::class_name
	String_t* ___class_name_4;
	// System.String System.Exception::stack_trace
	String_t* ___stack_trace_5;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_6;
	// System.Int32 System.Exception::remote_stack_index
	int32_t ___remote_stack_index_7;
	// System.Int32 System.Exception::hresult
	int32_t ___hresult_8;
	// System.String System.Exception::source
	String_t* ___source_9;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_10;

public:
	inline static int32_t get_offset_of_trace_ips_0() { return static_cast<int32_t>(offsetof(Exception_t181584025, ___trace_ips_0)); }
	inline IntPtrU5BU5D_t3484816003* get_trace_ips_0() const { return ___trace_ips_0; }
	inline IntPtrU5BU5D_t3484816003** get_address_of_trace_ips_0() { return &___trace_ips_0; }
	inline void set_trace_ips_0(IntPtrU5BU5D_t3484816003* value)
	{
		___trace_ips_0 = value;
		Il2CppCodeGenWriteBarrier((&___trace_ips_0), value);
	}

	inline static int32_t get_offset_of_inner_exception_1() { return static_cast<int32_t>(offsetof(Exception_t181584025, ___inner_exception_1)); }
	inline Exception_t181584025 * get_inner_exception_1() const { return ___inner_exception_1; }
	inline Exception_t181584025 ** get_address_of_inner_exception_1() { return &___inner_exception_1; }
	inline void set_inner_exception_1(Exception_t181584025 * value)
	{
		___inner_exception_1 = value;
		Il2CppCodeGenWriteBarrier((&___inner_exception_1), value);
	}

	inline static int32_t get_offset_of_message_2() { return static_cast<int32_t>(offsetof(Exception_t181584025, ___message_2)); }
	inline String_t* get_message_2() const { return ___message_2; }
	inline String_t** get_address_of_message_2() { return &___message_2; }
	inline void set_message_2(String_t* value)
	{
		___message_2 = value;
		Il2CppCodeGenWriteBarrier((&___message_2), value);
	}

	inline static int32_t get_offset_of_help_link_3() { return static_cast<int32_t>(offsetof(Exception_t181584025, ___help_link_3)); }
	inline String_t* get_help_link_3() const { return ___help_link_3; }
	inline String_t** get_address_of_help_link_3() { return &___help_link_3; }
	inline void set_help_link_3(String_t* value)
	{
		___help_link_3 = value;
		Il2CppCodeGenWriteBarrier((&___help_link_3), value);
	}

	inline static int32_t get_offset_of_class_name_4() { return static_cast<int32_t>(offsetof(Exception_t181584025, ___class_name_4)); }
	inline String_t* get_class_name_4() const { return ___class_name_4; }
	inline String_t** get_address_of_class_name_4() { return &___class_name_4; }
	inline void set_class_name_4(String_t* value)
	{
		___class_name_4 = value;
		Il2CppCodeGenWriteBarrier((&___class_name_4), value);
	}

	inline static int32_t get_offset_of_stack_trace_5() { return static_cast<int32_t>(offsetof(Exception_t181584025, ___stack_trace_5)); }
	inline String_t* get_stack_trace_5() const { return ___stack_trace_5; }
	inline String_t** get_address_of_stack_trace_5() { return &___stack_trace_5; }
	inline void set_stack_trace_5(String_t* value)
	{
		___stack_trace_5 = value;
		Il2CppCodeGenWriteBarrier((&___stack_trace_5), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_6() { return static_cast<int32_t>(offsetof(Exception_t181584025, ____remoteStackTraceString_6)); }
	inline String_t* get__remoteStackTraceString_6() const { return ____remoteStackTraceString_6; }
	inline String_t** get_address_of__remoteStackTraceString_6() { return &____remoteStackTraceString_6; }
	inline void set__remoteStackTraceString_6(String_t* value)
	{
		____remoteStackTraceString_6 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_6), value);
	}

	inline static int32_t get_offset_of_remote_stack_index_7() { return static_cast<int32_t>(offsetof(Exception_t181584025, ___remote_stack_index_7)); }
	inline int32_t get_remote_stack_index_7() const { return ___remote_stack_index_7; }
	inline int32_t* get_address_of_remote_stack_index_7() { return &___remote_stack_index_7; }
	inline void set_remote_stack_index_7(int32_t value)
	{
		___remote_stack_index_7 = value;
	}

	inline static int32_t get_offset_of_hresult_8() { return static_cast<int32_t>(offsetof(Exception_t181584025, ___hresult_8)); }
	inline int32_t get_hresult_8() const { return ___hresult_8; }
	inline int32_t* get_address_of_hresult_8() { return &___hresult_8; }
	inline void set_hresult_8(int32_t value)
	{
		___hresult_8 = value;
	}

	inline static int32_t get_offset_of_source_9() { return static_cast<int32_t>(offsetof(Exception_t181584025, ___source_9)); }
	inline String_t* get_source_9() const { return ___source_9; }
	inline String_t** get_address_of_source_9() { return &___source_9; }
	inline void set_source_9(String_t* value)
	{
		___source_9 = value;
		Il2CppCodeGenWriteBarrier((&___source_9), value);
	}

	inline static int32_t get_offset_of__data_10() { return static_cast<int32_t>(offsetof(Exception_t181584025, ____data_10)); }
	inline RuntimeObject* get__data_10() const { return ____data_10; }
	inline RuntimeObject** get_address_of__data_10() { return &____data_10; }
	inline void set__data_10(RuntimeObject* value)
	{
		____data_10 = value;
		Il2CppCodeGenWriteBarrier((&____data_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXCEPTION_T181584025_H
#ifndef STRING_T_H
#define STRING_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::length
	int32_t ___length_0;
	// System.Char System.String::start_char
	Il2CppChar ___start_char_1;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(String_t, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_start_char_1() { return static_cast<int32_t>(offsetof(String_t, ___start_char_1)); }
	inline Il2CppChar get_start_char_1() const { return ___start_char_1; }
	inline Il2CppChar* get_address_of_start_char_1() { return &___start_char_1; }
	inline void set_start_char_1(Il2CppChar value)
	{
		___start_char_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_2;
	// System.Char[] System.String::WhiteChars
	CharU5BU5D_t2243636323* ___WhiteChars_3;

public:
	inline static int32_t get_offset_of_Empty_2() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_2)); }
	inline String_t* get_Empty_2() const { return ___Empty_2; }
	inline String_t** get_address_of_Empty_2() { return &___Empty_2; }
	inline void set_Empty_2(String_t* value)
	{
		___Empty_2 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_2), value);
	}

	inline static int32_t get_offset_of_WhiteChars_3() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___WhiteChars_3)); }
	inline CharU5BU5D_t2243636323* get_WhiteChars_3() const { return ___WhiteChars_3; }
	inline CharU5BU5D_t2243636323** get_address_of_WhiteChars_3() { return &___WhiteChars_3; }
	inline void set_WhiteChars_3(CharU5BU5D_t2243636323* value)
	{
		___WhiteChars_3 = value;
		Il2CppCodeGenWriteBarrier((&___WhiteChars_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
#ifndef XRDEVICE_T506079755_H
#define XRDEVICE_T506079755_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.XRDevice
struct  XRDevice_t506079755  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XRDEVICE_T506079755_H
#ifndef INPUTTRACKING_T2562362649_H
#define INPUTTRACKING_T2562362649_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.InputTracking
struct  InputTracking_t2562362649  : public RuntimeObject
{
public:

public:
};

struct InputTracking_t2562362649_StaticFields
{
public:
	// System.Action`1<UnityEngine.XR.XRNodeState> UnityEngine.XR.InputTracking::trackingAcquired
	Action_1_t3382303471 * ___trackingAcquired_0;
	// System.Action`1<UnityEngine.XR.XRNodeState> UnityEngine.XR.InputTracking::trackingLost
	Action_1_t3382303471 * ___trackingLost_1;
	// System.Action`1<UnityEngine.XR.XRNodeState> UnityEngine.XR.InputTracking::nodeAdded
	Action_1_t3382303471 * ___nodeAdded_2;
	// System.Action`1<UnityEngine.XR.XRNodeState> UnityEngine.XR.InputTracking::nodeRemoved
	Action_1_t3382303471 * ___nodeRemoved_3;

public:
	inline static int32_t get_offset_of_trackingAcquired_0() { return static_cast<int32_t>(offsetof(InputTracking_t2562362649_StaticFields, ___trackingAcquired_0)); }
	inline Action_1_t3382303471 * get_trackingAcquired_0() const { return ___trackingAcquired_0; }
	inline Action_1_t3382303471 ** get_address_of_trackingAcquired_0() { return &___trackingAcquired_0; }
	inline void set_trackingAcquired_0(Action_1_t3382303471 * value)
	{
		___trackingAcquired_0 = value;
		Il2CppCodeGenWriteBarrier((&___trackingAcquired_0), value);
	}

	inline static int32_t get_offset_of_trackingLost_1() { return static_cast<int32_t>(offsetof(InputTracking_t2562362649_StaticFields, ___trackingLost_1)); }
	inline Action_1_t3382303471 * get_trackingLost_1() const { return ___trackingLost_1; }
	inline Action_1_t3382303471 ** get_address_of_trackingLost_1() { return &___trackingLost_1; }
	inline void set_trackingLost_1(Action_1_t3382303471 * value)
	{
		___trackingLost_1 = value;
		Il2CppCodeGenWriteBarrier((&___trackingLost_1), value);
	}

	inline static int32_t get_offset_of_nodeAdded_2() { return static_cast<int32_t>(offsetof(InputTracking_t2562362649_StaticFields, ___nodeAdded_2)); }
	inline Action_1_t3382303471 * get_nodeAdded_2() const { return ___nodeAdded_2; }
	inline Action_1_t3382303471 ** get_address_of_nodeAdded_2() { return &___nodeAdded_2; }
	inline void set_nodeAdded_2(Action_1_t3382303471 * value)
	{
		___nodeAdded_2 = value;
		Il2CppCodeGenWriteBarrier((&___nodeAdded_2), value);
	}

	inline static int32_t get_offset_of_nodeRemoved_3() { return static_cast<int32_t>(offsetof(InputTracking_t2562362649_StaticFields, ___nodeRemoved_3)); }
	inline Action_1_t3382303471 * get_nodeRemoved_3() const { return ___nodeRemoved_3; }
	inline Action_1_t3382303471 ** get_address_of_nodeRemoved_3() { return &___nodeRemoved_3; }
	inline void set_nodeRemoved_3(Action_1_t3382303471 * value)
	{
		___nodeRemoved_3 = value;
		Il2CppCodeGenWriteBarrier((&___nodeRemoved_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INPUTTRACKING_T2562362649_H
#ifndef BOOLEAN_T756814917_H
#define BOOLEAN_T756814917_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_t756814917 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Boolean_t756814917, ___m_value_2)); }
	inline bool get_m_value_2() const { return ___m_value_2; }
	inline bool* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(bool value)
	{
		___m_value_2 = value;
	}
};

struct Boolean_t756814917_StaticFields
{
public:
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_0;
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_1;

public:
	inline static int32_t get_offset_of_FalseString_0() { return static_cast<int32_t>(offsetof(Boolean_t756814917_StaticFields, ___FalseString_0)); }
	inline String_t* get_FalseString_0() const { return ___FalseString_0; }
	inline String_t** get_address_of_FalseString_0() { return &___FalseString_0; }
	inline void set_FalseString_0(String_t* value)
	{
		___FalseString_0 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_0), value);
	}

	inline static int32_t get_offset_of_TrueString_1() { return static_cast<int32_t>(offsetof(Boolean_t756814917_StaticFields, ___TrueString_1)); }
	inline String_t* get_TrueString_1() const { return ___TrueString_1; }
	inline String_t** get_address_of_TrueString_1() { return &___TrueString_1; }
	inline void set_TrueString_1(String_t* value)
	{
		___TrueString_1 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_T756814917_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

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

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef SYSTEMEXCEPTION_T3375711973_H
#define SYSTEMEXCEPTION_T3375711973_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SystemException
struct  SystemException_t3375711973  : public Exception_t181584025
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMEXCEPTION_T3375711973_H
#ifndef QUATERNION_T2999255129_H
#define QUATERNION_T2999255129_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Quaternion
struct  Quaternion_t2999255129 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t2999255129, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t2999255129, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t2999255129, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t2999255129, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t2999255129_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t2999255129  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t2999255129_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t2999255129  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t2999255129 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t2999255129  value)
	{
		___identityQuaternion_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUATERNION_T2999255129_H
#ifndef VECTOR3_T366958237_H
#define VECTOR3_T366958237_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_t366958237 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_1;
	// System.Single UnityEngine.Vector3::y
	float ___y_2;
	// System.Single UnityEngine.Vector3::z
	float ___z_3;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector3_t366958237, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector3_t366958237, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector3_t366958237, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}
};

struct Vector3_t366958237_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t366958237  ___zeroVector_4;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t366958237  ___oneVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t366958237  ___upVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t366958237  ___downVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t366958237  ___leftVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t366958237  ___rightVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t366958237  ___forwardVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t366958237  ___backVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t366958237  ___positiveInfinityVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t366958237  ___negativeInfinityVector_13;

public:
	inline static int32_t get_offset_of_zeroVector_4() { return static_cast<int32_t>(offsetof(Vector3_t366958237_StaticFields, ___zeroVector_4)); }
	inline Vector3_t366958237  get_zeroVector_4() const { return ___zeroVector_4; }
	inline Vector3_t366958237 * get_address_of_zeroVector_4() { return &___zeroVector_4; }
	inline void set_zeroVector_4(Vector3_t366958237  value)
	{
		___zeroVector_4 = value;
	}

	inline static int32_t get_offset_of_oneVector_5() { return static_cast<int32_t>(offsetof(Vector3_t366958237_StaticFields, ___oneVector_5)); }
	inline Vector3_t366958237  get_oneVector_5() const { return ___oneVector_5; }
	inline Vector3_t366958237 * get_address_of_oneVector_5() { return &___oneVector_5; }
	inline void set_oneVector_5(Vector3_t366958237  value)
	{
		___oneVector_5 = value;
	}

	inline static int32_t get_offset_of_upVector_6() { return static_cast<int32_t>(offsetof(Vector3_t366958237_StaticFields, ___upVector_6)); }
	inline Vector3_t366958237  get_upVector_6() const { return ___upVector_6; }
	inline Vector3_t366958237 * get_address_of_upVector_6() { return &___upVector_6; }
	inline void set_upVector_6(Vector3_t366958237  value)
	{
		___upVector_6 = value;
	}

	inline static int32_t get_offset_of_downVector_7() { return static_cast<int32_t>(offsetof(Vector3_t366958237_StaticFields, ___downVector_7)); }
	inline Vector3_t366958237  get_downVector_7() const { return ___downVector_7; }
	inline Vector3_t366958237 * get_address_of_downVector_7() { return &___downVector_7; }
	inline void set_downVector_7(Vector3_t366958237  value)
	{
		___downVector_7 = value;
	}

	inline static int32_t get_offset_of_leftVector_8() { return static_cast<int32_t>(offsetof(Vector3_t366958237_StaticFields, ___leftVector_8)); }
	inline Vector3_t366958237  get_leftVector_8() const { return ___leftVector_8; }
	inline Vector3_t366958237 * get_address_of_leftVector_8() { return &___leftVector_8; }
	inline void set_leftVector_8(Vector3_t366958237  value)
	{
		___leftVector_8 = value;
	}

	inline static int32_t get_offset_of_rightVector_9() { return static_cast<int32_t>(offsetof(Vector3_t366958237_StaticFields, ___rightVector_9)); }
	inline Vector3_t366958237  get_rightVector_9() const { return ___rightVector_9; }
	inline Vector3_t366958237 * get_address_of_rightVector_9() { return &___rightVector_9; }
	inline void set_rightVector_9(Vector3_t366958237  value)
	{
		___rightVector_9 = value;
	}

	inline static int32_t get_offset_of_forwardVector_10() { return static_cast<int32_t>(offsetof(Vector3_t366958237_StaticFields, ___forwardVector_10)); }
	inline Vector3_t366958237  get_forwardVector_10() const { return ___forwardVector_10; }
	inline Vector3_t366958237 * get_address_of_forwardVector_10() { return &___forwardVector_10; }
	inline void set_forwardVector_10(Vector3_t366958237  value)
	{
		___forwardVector_10 = value;
	}

	inline static int32_t get_offset_of_backVector_11() { return static_cast<int32_t>(offsetof(Vector3_t366958237_StaticFields, ___backVector_11)); }
	inline Vector3_t366958237  get_backVector_11() const { return ___backVector_11; }
	inline Vector3_t366958237 * get_address_of_backVector_11() { return &___backVector_11; }
	inline void set_backVector_11(Vector3_t366958237  value)
	{
		___backVector_11 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_12() { return static_cast<int32_t>(offsetof(Vector3_t366958237_StaticFields, ___positiveInfinityVector_12)); }
	inline Vector3_t366958237  get_positiveInfinityVector_12() const { return ___positiveInfinityVector_12; }
	inline Vector3_t366958237 * get_address_of_positiveInfinityVector_12() { return &___positiveInfinityVector_12; }
	inline void set_positiveInfinityVector_12(Vector3_t366958237  value)
	{
		___positiveInfinityVector_12 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t366958237_StaticFields, ___negativeInfinityVector_13)); }
	inline Vector3_t366958237  get_negativeInfinityVector_13() const { return ___negativeInfinityVector_13; }
	inline Vector3_t366958237 * get_address_of_negativeInfinityVector_13() { return &___negativeInfinityVector_13; }
	inline void set_negativeInfinityVector_13(Vector3_t366958237  value)
	{
		___negativeInfinityVector_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_T366958237_H
#ifndef ENUM_T2420643330_H
#define ENUM_T2420643330_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t2420643330  : public ValueType_t1071834735
{
public:

public:
};

struct Enum_t2420643330_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t2243636323* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t2420643330_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t2243636323* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t2243636323** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t2243636323* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2420643330_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2420643330_marshaled_com
{
};
#endif // ENUM_T2420643330_H
#ifndef INT64_T4204515573_H
#define INT64_T4204515573_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int64
struct  Int64_t4204515573 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t4204515573, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT64_T4204515573_H
#ifndef INT32_T1831168070_H
#define INT32_T1831168070_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t1831168070 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(Int32_t1831168070, ___m_value_2)); }
	inline int32_t get_m_value_2() const { return ___m_value_2; }
	inline int32_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(int32_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T1831168070_H
#ifndef UINT64_T2300007586_H
#define UINT64_T2300007586_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt64
struct  UInt64_t2300007586 
{
public:
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt64_t2300007586, ___m_value_0)); }
	inline uint64_t get_m_value_0() const { return ___m_value_0; }
	inline uint64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint64_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT64_T2300007586_H
#ifndef VOID_T1589630819_H
#define VOID_T1589630819_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t1589630819 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T1589630819_H
#ifndef OBJECT_T3038624000_H
#define OBJECT_T3038624000_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_t3038624000  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_t3038624000, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_t3038624000_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_t3038624000_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_t3038624000_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_t3038624000_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_T3038624000_H
#ifndef TRACKINGSTATEEVENTTYPE_T2074996932_H
#define TRACKINGSTATEEVENTTYPE_T2074996932_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.InputTracking/TrackingStateEventType
struct  TrackingStateEventType_t2074996932 
{
public:
	// System.Int32 UnityEngine.XR.InputTracking/TrackingStateEventType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TrackingStateEventType_t2074996932, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TRACKINGSTATEEVENTTYPE_T2074996932_H
#ifndef ARGUMENTEXCEPTION_T549111297_H
#define ARGUMENTEXCEPTION_T549111297_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArgumentException
struct  ArgumentException_t549111297  : public SystemException_t3375711973
{
public:
	// System.String System.ArgumentException::param_name
	String_t* ___param_name_12;

public:
	inline static int32_t get_offset_of_param_name_12() { return static_cast<int32_t>(offsetof(ArgumentException_t549111297, ___param_name_12)); }
	inline String_t* get_param_name_12() const { return ___param_name_12; }
	inline String_t** get_address_of_param_name_12() { return &___param_name_12; }
	inline void set_param_name_12(String_t* value)
	{
		___param_name_12 = value;
		Il2CppCodeGenWriteBarrier((&___param_name_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTEXCEPTION_T549111297_H
#ifndef AVAILABLETRACKINGDATA_T3784196073_H
#define AVAILABLETRACKINGDATA_T3784196073_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.AvailableTrackingData
struct  AvailableTrackingData_t3784196073 
{
public:
	// System.Int32 UnityEngine.XR.AvailableTrackingData::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(AvailableTrackingData_t3784196073, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // AVAILABLETRACKINGDATA_T3784196073_H
#ifndef XRNODE_T3441229408_H
#define XRNODE_T3441229408_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.XRNode
struct  XRNode_t3441229408 
{
public:
	// System.Int32 UnityEngine.XR.XRNode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(XRNode_t3441229408, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XRNODE_T3441229408_H
#ifndef DELEGATE_T4185853630_H
#define DELEGATE_T4185853630_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t4185853630  : public RuntimeObject
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
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_5;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_6;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_7;
	// System.DelegateData System.Delegate::data
	DelegateData_t2130762809 * ___data_8;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t4185853630, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t4185853630, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t4185853630, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t4185853630, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t4185853630, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_method_code_5() { return static_cast<int32_t>(offsetof(Delegate_t4185853630, ___method_code_5)); }
	inline intptr_t get_method_code_5() const { return ___method_code_5; }
	inline intptr_t* get_address_of_method_code_5() { return &___method_code_5; }
	inline void set_method_code_5(intptr_t value)
	{
		___method_code_5 = value;
	}

	inline static int32_t get_offset_of_method_info_6() { return static_cast<int32_t>(offsetof(Delegate_t4185853630, ___method_info_6)); }
	inline MethodInfo_t * get_method_info_6() const { return ___method_info_6; }
	inline MethodInfo_t ** get_address_of_method_info_6() { return &___method_info_6; }
	inline void set_method_info_6(MethodInfo_t * value)
	{
		___method_info_6 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_6), value);
	}

	inline static int32_t get_offset_of_original_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t4185853630, ___original_method_info_7)); }
	inline MethodInfo_t * get_original_method_info_7() const { return ___original_method_info_7; }
	inline MethodInfo_t ** get_address_of_original_method_info_7() { return &___original_method_info_7; }
	inline void set_original_method_info_7(MethodInfo_t * value)
	{
		___original_method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_7), value);
	}

	inline static int32_t get_offset_of_data_8() { return static_cast<int32_t>(offsetof(Delegate_t4185853630, ___data_8)); }
	inline DelegateData_t2130762809 * get_data_8() const { return ___data_8; }
	inline DelegateData_t2130762809 ** get_address_of_data_8() { return &___data_8; }
	inline void set_data_8(DelegateData_t2130762809 * value)
	{
		___data_8 = value;
		Il2CppCodeGenWriteBarrier((&___data_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELEGATE_T4185853630_H
#ifndef ARGUMENTNULLEXCEPTION_T366727329_H
#define ARGUMENTNULLEXCEPTION_T366727329_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArgumentNullException
struct  ArgumentNullException_t366727329  : public ArgumentException_t549111297
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTNULLEXCEPTION_T366727329_H
#ifndef MULTICASTDELEGATE_T1619953455_H
#define MULTICASTDELEGATE_T1619953455_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t1619953455  : public Delegate_t4185853630
{
public:
	// System.MulticastDelegate System.MulticastDelegate::prev
	MulticastDelegate_t1619953455 * ___prev_9;
	// System.MulticastDelegate System.MulticastDelegate::kpm_next
	MulticastDelegate_t1619953455 * ___kpm_next_10;

public:
	inline static int32_t get_offset_of_prev_9() { return static_cast<int32_t>(offsetof(MulticastDelegate_t1619953455, ___prev_9)); }
	inline MulticastDelegate_t1619953455 * get_prev_9() const { return ___prev_9; }
	inline MulticastDelegate_t1619953455 ** get_address_of_prev_9() { return &___prev_9; }
	inline void set_prev_9(MulticastDelegate_t1619953455 * value)
	{
		___prev_9 = value;
		Il2CppCodeGenWriteBarrier((&___prev_9), value);
	}

	inline static int32_t get_offset_of_kpm_next_10() { return static_cast<int32_t>(offsetof(MulticastDelegate_t1619953455, ___kpm_next_10)); }
	inline MulticastDelegate_t1619953455 * get_kpm_next_10() const { return ___kpm_next_10; }
	inline MulticastDelegate_t1619953455 ** get_address_of_kpm_next_10() { return &___kpm_next_10; }
	inline void set_kpm_next_10(MulticastDelegate_t1619953455 * value)
	{
		___kpm_next_10 = value;
		Il2CppCodeGenWriteBarrier((&___kpm_next_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTICASTDELEGATE_T1619953455_H
#ifndef XRNODESTATE_T3058385596_H
#define XRNODESTATE_T3058385596_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.XRNodeState
struct  XRNodeState_t3058385596 
{
public:
	// UnityEngine.XR.XRNode UnityEngine.XR.XRNodeState::m_Type
	int32_t ___m_Type_0;
	// UnityEngine.XR.AvailableTrackingData UnityEngine.XR.XRNodeState::m_AvailableFields
	int32_t ___m_AvailableFields_1;
	// UnityEngine.Vector3 UnityEngine.XR.XRNodeState::m_Position
	Vector3_t366958237  ___m_Position_2;
	// UnityEngine.Quaternion UnityEngine.XR.XRNodeState::m_Rotation
	Quaternion_t2999255129  ___m_Rotation_3;
	// UnityEngine.Vector3 UnityEngine.XR.XRNodeState::m_Velocity
	Vector3_t366958237  ___m_Velocity_4;
	// UnityEngine.Vector3 UnityEngine.XR.XRNodeState::m_AngularVelocity
	Vector3_t366958237  ___m_AngularVelocity_5;
	// UnityEngine.Vector3 UnityEngine.XR.XRNodeState::m_Acceleration
	Vector3_t366958237  ___m_Acceleration_6;
	// UnityEngine.Vector3 UnityEngine.XR.XRNodeState::m_AngularAcceleration
	Vector3_t366958237  ___m_AngularAcceleration_7;
	// System.Int32 UnityEngine.XR.XRNodeState::m_Tracked
	int32_t ___m_Tracked_8;
	// System.UInt64 UnityEngine.XR.XRNodeState::m_UniqueID
	uint64_t ___m_UniqueID_9;

public:
	inline static int32_t get_offset_of_m_Type_0() { return static_cast<int32_t>(offsetof(XRNodeState_t3058385596, ___m_Type_0)); }
	inline int32_t get_m_Type_0() const { return ___m_Type_0; }
	inline int32_t* get_address_of_m_Type_0() { return &___m_Type_0; }
	inline void set_m_Type_0(int32_t value)
	{
		___m_Type_0 = value;
	}

	inline static int32_t get_offset_of_m_AvailableFields_1() { return static_cast<int32_t>(offsetof(XRNodeState_t3058385596, ___m_AvailableFields_1)); }
	inline int32_t get_m_AvailableFields_1() const { return ___m_AvailableFields_1; }
	inline int32_t* get_address_of_m_AvailableFields_1() { return &___m_AvailableFields_1; }
	inline void set_m_AvailableFields_1(int32_t value)
	{
		___m_AvailableFields_1 = value;
	}

	inline static int32_t get_offset_of_m_Position_2() { return static_cast<int32_t>(offsetof(XRNodeState_t3058385596, ___m_Position_2)); }
	inline Vector3_t366958237  get_m_Position_2() const { return ___m_Position_2; }
	inline Vector3_t366958237 * get_address_of_m_Position_2() { return &___m_Position_2; }
	inline void set_m_Position_2(Vector3_t366958237  value)
	{
		___m_Position_2 = value;
	}

	inline static int32_t get_offset_of_m_Rotation_3() { return static_cast<int32_t>(offsetof(XRNodeState_t3058385596, ___m_Rotation_3)); }
	inline Quaternion_t2999255129  get_m_Rotation_3() const { return ___m_Rotation_3; }
	inline Quaternion_t2999255129 * get_address_of_m_Rotation_3() { return &___m_Rotation_3; }
	inline void set_m_Rotation_3(Quaternion_t2999255129  value)
	{
		___m_Rotation_3 = value;
	}

	inline static int32_t get_offset_of_m_Velocity_4() { return static_cast<int32_t>(offsetof(XRNodeState_t3058385596, ___m_Velocity_4)); }
	inline Vector3_t366958237  get_m_Velocity_4() const { return ___m_Velocity_4; }
	inline Vector3_t366958237 * get_address_of_m_Velocity_4() { return &___m_Velocity_4; }
	inline void set_m_Velocity_4(Vector3_t366958237  value)
	{
		___m_Velocity_4 = value;
	}

	inline static int32_t get_offset_of_m_AngularVelocity_5() { return static_cast<int32_t>(offsetof(XRNodeState_t3058385596, ___m_AngularVelocity_5)); }
	inline Vector3_t366958237  get_m_AngularVelocity_5() const { return ___m_AngularVelocity_5; }
	inline Vector3_t366958237 * get_address_of_m_AngularVelocity_5() { return &___m_AngularVelocity_5; }
	inline void set_m_AngularVelocity_5(Vector3_t366958237  value)
	{
		___m_AngularVelocity_5 = value;
	}

	inline static int32_t get_offset_of_m_Acceleration_6() { return static_cast<int32_t>(offsetof(XRNodeState_t3058385596, ___m_Acceleration_6)); }
	inline Vector3_t366958237  get_m_Acceleration_6() const { return ___m_Acceleration_6; }
	inline Vector3_t366958237 * get_address_of_m_Acceleration_6() { return &___m_Acceleration_6; }
	inline void set_m_Acceleration_6(Vector3_t366958237  value)
	{
		___m_Acceleration_6 = value;
	}

	inline static int32_t get_offset_of_m_AngularAcceleration_7() { return static_cast<int32_t>(offsetof(XRNodeState_t3058385596, ___m_AngularAcceleration_7)); }
	inline Vector3_t366958237  get_m_AngularAcceleration_7() const { return ___m_AngularAcceleration_7; }
	inline Vector3_t366958237 * get_address_of_m_AngularAcceleration_7() { return &___m_AngularAcceleration_7; }
	inline void set_m_AngularAcceleration_7(Vector3_t366958237  value)
	{
		___m_AngularAcceleration_7 = value;
	}

	inline static int32_t get_offset_of_m_Tracked_8() { return static_cast<int32_t>(offsetof(XRNodeState_t3058385596, ___m_Tracked_8)); }
	inline int32_t get_m_Tracked_8() const { return ___m_Tracked_8; }
	inline int32_t* get_address_of_m_Tracked_8() { return &___m_Tracked_8; }
	inline void set_m_Tracked_8(int32_t value)
	{
		___m_Tracked_8 = value;
	}

	inline static int32_t get_offset_of_m_UniqueID_9() { return static_cast<int32_t>(offsetof(XRNodeState_t3058385596, ___m_UniqueID_9)); }
	inline uint64_t get_m_UniqueID_9() const { return ___m_UniqueID_9; }
	inline uint64_t* get_address_of_m_UniqueID_9() { return &___m_UniqueID_9; }
	inline void set_m_UniqueID_9(uint64_t value)
	{
		___m_UniqueID_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // XRNODESTATE_T3058385596_H
#ifndef COMPONENT_T2617884049_H
#define COMPONENT_T2617884049_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t2617884049  : public Object_t3038624000
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T2617884049_H
#ifndef ACTION_1_T3382303471_H
#define ACTION_1_T3382303471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Action`1<UnityEngine.XR.XRNodeState>
struct  Action_1_t3382303471  : public MulticastDelegate_t1619953455
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACTION_1_T3382303471_H
#ifndef BEHAVIOUR_T740419834_H
#define BEHAVIOUR_T740419834_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_t740419834  : public Component_t2617884049
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_T740419834_H
#ifndef CAMERA_T2707972563_H
#define CAMERA_T2707972563_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Camera
struct  Camera_t2707972563  : public Behaviour_t740419834
{
public:

public:
};

struct Camera_t2707972563_StaticFields
{
public:
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t2525443191 * ___onPreCull_2;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t2525443191 * ___onPreRender_3;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t2525443191 * ___onPostRender_4;

public:
	inline static int32_t get_offset_of_onPreCull_2() { return static_cast<int32_t>(offsetof(Camera_t2707972563_StaticFields, ___onPreCull_2)); }
	inline CameraCallback_t2525443191 * get_onPreCull_2() const { return ___onPreCull_2; }
	inline CameraCallback_t2525443191 ** get_address_of_onPreCull_2() { return &___onPreCull_2; }
	inline void set_onPreCull_2(CameraCallback_t2525443191 * value)
	{
		___onPreCull_2 = value;
		Il2CppCodeGenWriteBarrier((&___onPreCull_2), value);
	}

	inline static int32_t get_offset_of_onPreRender_3() { return static_cast<int32_t>(offsetof(Camera_t2707972563_StaticFields, ___onPreRender_3)); }
	inline CameraCallback_t2525443191 * get_onPreRender_3() const { return ___onPreRender_3; }
	inline CameraCallback_t2525443191 ** get_address_of_onPreRender_3() { return &___onPreRender_3; }
	inline void set_onPreRender_3(CameraCallback_t2525443191 * value)
	{
		___onPreRender_3 = value;
		Il2CppCodeGenWriteBarrier((&___onPreRender_3), value);
	}

	inline static int32_t get_offset_of_onPostRender_4() { return static_cast<int32_t>(offsetof(Camera_t2707972563_StaticFields, ___onPostRender_4)); }
	inline CameraCallback_t2525443191 * get_onPostRender_4() const { return ___onPostRender_4; }
	inline CameraCallback_t2525443191 ** get_address_of_onPostRender_4() { return &___onPostRender_4; }
	inline void set_onPostRender_4(CameraCallback_t2525443191 * value)
	{
		___onPostRender_4 = value;
		Il2CppCodeGenWriteBarrier((&___onPostRender_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAMERA_T2707972563_H


// System.Void System.Action`1<UnityEngine.XR.XRNodeState>::Invoke(!0)
extern "C"  void Action_1_Invoke_m1198087649_gshared (Action_1_t3382303471 * __this, XRNodeState_t3058385596  p0, const RuntimeMethod* method);

// System.Void UnityEngine.XR.XRNodeState::set_uniqueID(System.UInt64)
extern "C"  void XRNodeState_set_uniqueID_m1014078435 (XRNodeState_t3058385596 * __this, uint64_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.XR.XRNodeState::set_nodeType(UnityEngine.XR.XRNode)
extern "C"  void XRNodeState_set_nodeType_m2788028636 (XRNodeState_t3058385596 * __this, int32_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.XR.XRNodeState::set_tracked(System.Boolean)
extern "C"  void XRNodeState_set_tracked_m2754415404 (XRNodeState_t3058385596 * __this, bool ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.String::Concat(System.Object,System.Object)
extern "C"  String_t* String_Concat_m1756127132 (RuntimeObject * __this /* static, unused */, RuntimeObject * p0, RuntimeObject * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.ArgumentException::.ctor(System.String)
extern "C"  void ArgumentException__ctor_m556474363 (ArgumentException_t549111297 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Action`1<UnityEngine.XR.XRNodeState>::Invoke(!0)
#define Action_1_Invoke_m1198087649(__this, p0, method) ((  void (*) (Action_1_t3382303471 *, XRNodeState_t3058385596 , const RuntimeMethod*))Action_1_Invoke_m1198087649_gshared)(__this, p0, method)
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
extern "C"  bool Object_op_Equality_m3734290800 (RuntimeObject * __this /* static, unused */, Object_t3038624000 * p0, Object_t3038624000 * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.ArgumentNullException::.ctor(System.String)
extern "C"  void ArgumentNullException__ctor_m2329273257 (ArgumentNullException_t366727329 * __this, String_t* p0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.XR.XRDevice::DisableAutoXRCameraTrackingInternal(UnityEngine.Camera,System.Boolean)
extern "C"  void XRDevice_DisableAutoXRCameraTrackingInternal_m3947094253 (RuntimeObject * __this /* static, unused */, Camera_t2707972563 * ___camera0, bool ___disabled1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.XR.InputTracking::InvokeTrackingEvent(UnityEngine.XR.InputTracking/TrackingStateEventType,UnityEngine.XR.XRNode,System.Int64,System.Boolean)
extern "C"  void InputTracking_InvokeTrackingEvent_m3344411335 (RuntimeObject * __this /* static, unused */, int32_t ___eventType0, int32_t ___nodeType1, int64_t ___uniqueID2, bool ___tracked3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InputTracking_InvokeTrackingEvent_m3344411335_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t3382303471 * V_0 = NULL;
	XRNodeState_t3058385596  V_1;
	memset(&V_1, 0, sizeof(V_1));
	{
		V_0 = (Action_1_t3382303471 *)NULL;
		Initobj (XRNodeState_t3058385596_il2cpp_TypeInfo_var, (&V_1));
		int64_t L_0 = ___uniqueID2;
		XRNodeState_set_uniqueID_m1014078435((&V_1), L_0, /*hidden argument*/NULL);
		int32_t L_1 = ___nodeType1;
		XRNodeState_set_nodeType_m2788028636((&V_1), L_1, /*hidden argument*/NULL);
		bool L_2 = ___tracked3;
		XRNodeState_set_tracked_m2754415404((&V_1), L_2, /*hidden argument*/NULL);
		int32_t L_3 = ___eventType0;
		switch (L_3)
		{
			case 0:
			{
				goto IL_0054;
			}
			case 1:
			{
				goto IL_005f;
			}
			case 2:
			{
				goto IL_003e;
			}
			case 3:
			{
				goto IL_0049;
			}
		}
	}
	{
		goto IL_006a;
	}

IL_003e:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InputTracking_t2562362649_il2cpp_TypeInfo_var);
		Action_1_t3382303471 * L_4 = ((InputTracking_t2562362649_StaticFields*)il2cpp_codegen_static_fields_for(InputTracking_t2562362649_il2cpp_TypeInfo_var))->get_trackingAcquired_0();
		V_0 = L_4;
		goto IL_0080;
	}

IL_0049:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InputTracking_t2562362649_il2cpp_TypeInfo_var);
		Action_1_t3382303471 * L_5 = ((InputTracking_t2562362649_StaticFields*)il2cpp_codegen_static_fields_for(InputTracking_t2562362649_il2cpp_TypeInfo_var))->get_trackingLost_1();
		V_0 = L_5;
		goto IL_0080;
	}

IL_0054:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InputTracking_t2562362649_il2cpp_TypeInfo_var);
		Action_1_t3382303471 * L_6 = ((InputTracking_t2562362649_StaticFields*)il2cpp_codegen_static_fields_for(InputTracking_t2562362649_il2cpp_TypeInfo_var))->get_nodeAdded_2();
		V_0 = L_6;
		goto IL_0080;
	}

IL_005f:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InputTracking_t2562362649_il2cpp_TypeInfo_var);
		Action_1_t3382303471 * L_7 = ((InputTracking_t2562362649_StaticFields*)il2cpp_codegen_static_fields_for(InputTracking_t2562362649_il2cpp_TypeInfo_var))->get_nodeRemoved_3();
		V_0 = L_7;
		goto IL_0080;
	}

IL_006a:
	{
		int32_t L_8 = ___eventType0;
		int32_t L_9 = L_8;
		RuntimeObject * L_10 = Box(TrackingStateEventType_t2074996932_il2cpp_TypeInfo_var, &L_9);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_11 = String_Concat_m1756127132(NULL /*static, unused*/, _stringLiteral4170674579, L_10, /*hidden argument*/NULL);
		ArgumentException_t549111297 * L_12 = (ArgumentException_t549111297 *)il2cpp_codegen_object_new(ArgumentException_t549111297_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m556474363(L_12, L_11, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12);
	}

IL_0080:
	{
		Action_1_t3382303471 * L_13 = V_0;
		if (!L_13)
		{
			goto IL_008f;
		}
	}
	{
		Action_1_t3382303471 * L_14 = V_0;
		XRNodeState_t3058385596  L_15 = V_1;
		NullCheck(L_14);
		Action_1_Invoke_m1198087649(L_14, L_15, /*hidden argument*/Action_1_Invoke_m1198087649_RuntimeMethod_var);
	}

IL_008f:
	{
		return;
	}
}
// System.Void UnityEngine.XR.InputTracking::.cctor()
extern "C"  void InputTracking__cctor_m1230510968 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InputTracking__cctor_m1230510968_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		((InputTracking_t2562362649_StaticFields*)il2cpp_codegen_static_fields_for(InputTracking_t2562362649_il2cpp_TypeInfo_var))->set_trackingAcquired_0((Action_1_t3382303471 *)NULL);
		((InputTracking_t2562362649_StaticFields*)il2cpp_codegen_static_fields_for(InputTracking_t2562362649_il2cpp_TypeInfo_var))->set_trackingLost_1((Action_1_t3382303471 *)NULL);
		((InputTracking_t2562362649_StaticFields*)il2cpp_codegen_static_fields_for(InputTracking_t2562362649_il2cpp_TypeInfo_var))->set_nodeAdded_2((Action_1_t3382303471 *)NULL);
		((InputTracking_t2562362649_StaticFields*)il2cpp_codegen_static_fields_for(InputTracking_t2562362649_il2cpp_TypeInfo_var))->set_nodeRemoved_3((Action_1_t3382303471 *)NULL);
		return;
	}
}
// System.Void UnityEngine.XR.XRDevice::DisableAutoXRCameraTracking(UnityEngine.Camera,System.Boolean)
extern "C"  void XRDevice_DisableAutoXRCameraTracking_m1355381392 (RuntimeObject * __this /* static, unused */, Camera_t2707972563 * ___camera0, bool ___disabled1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRDevice_DisableAutoXRCameraTracking_m1355381392_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Camera_t2707972563 * L_0 = ___camera0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3038624000_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_m3734290800(NULL /*static, unused*/, L_0, (Object_t3038624000 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		ArgumentNullException_t366727329 * L_2 = (ArgumentNullException_t366727329 *)il2cpp_codegen_object_new(ArgumentNullException_t366727329_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m2329273257(L_2, _stringLiteral849893747, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2);
	}

IL_0018:
	{
		Camera_t2707972563 * L_3 = ___camera0;
		bool L_4 = ___disabled1;
		XRDevice_DisableAutoXRCameraTrackingInternal_m3947094253(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.XRDevice::DisableAutoXRCameraTrackingInternal(UnityEngine.Camera,System.Boolean)
extern "C"  void XRDevice_DisableAutoXRCameraTrackingInternal_m3947094253 (RuntimeObject * __this /* static, unused */, Camera_t2707972563 * ___camera0, bool ___disabled1, const RuntimeMethod* method)
{
	typedef void (*XRDevice_DisableAutoXRCameraTrackingInternal_m3947094253_ftn) (Camera_t2707972563 *, bool);
	static XRDevice_DisableAutoXRCameraTrackingInternal_m3947094253_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (XRDevice_DisableAutoXRCameraTrackingInternal_m3947094253_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.XR.XRDevice::DisableAutoXRCameraTrackingInternal(UnityEngine.Camera,System.Boolean)");
	_il2cpp_icall_func(___camera0, ___disabled1);
}
// System.Void UnityEngine.XR.XRNodeState::set_uniqueID(System.UInt64)
extern "C"  void XRNodeState_set_uniqueID_m1014078435 (XRNodeState_t3058385596 * __this, uint64_t ___value0, const RuntimeMethod* method)
{
	{
		uint64_t L_0 = ___value0;
		__this->set_m_UniqueID_9(L_0);
		return;
	}
}
extern "C"  void XRNodeState_set_uniqueID_m1014078435_AdjustorThunk (RuntimeObject * __this, uint64_t ___value0, const RuntimeMethod* method)
{
	XRNodeState_t3058385596 * _thisAdjusted = reinterpret_cast<XRNodeState_t3058385596 *>(__this + 1);
	XRNodeState_set_uniqueID_m1014078435(_thisAdjusted, ___value0, method);
}
// System.Void UnityEngine.XR.XRNodeState::set_nodeType(UnityEngine.XR.XRNode)
extern "C"  void XRNodeState_set_nodeType_m2788028636 (XRNodeState_t3058385596 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_m_Type_0(L_0);
		return;
	}
}
extern "C"  void XRNodeState_set_nodeType_m2788028636_AdjustorThunk (RuntimeObject * __this, int32_t ___value0, const RuntimeMethod* method)
{
	XRNodeState_t3058385596 * _thisAdjusted = reinterpret_cast<XRNodeState_t3058385596 *>(__this + 1);
	XRNodeState_set_nodeType_m2788028636(_thisAdjusted, ___value0, method);
}
// System.Void UnityEngine.XR.XRNodeState::set_tracked(System.Boolean)
extern "C"  void XRNodeState_set_tracked_m2754415404 (XRNodeState_t3058385596 * __this, bool ___value0, const RuntimeMethod* method)
{
	XRNodeState_t3058385596 * G_B2_0 = NULL;
	XRNodeState_t3058385596 * G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	XRNodeState_t3058385596 * G_B3_1 = NULL;
	{
		bool L_0 = ___value0;
		G_B1_0 = __this;
		if (!L_0)
		{
			G_B2_0 = __this;
			goto IL_000e;
		}
	}
	{
		G_B3_0 = 1;
		G_B3_1 = G_B1_0;
		goto IL_000f;
	}

IL_000e:
	{
		G_B3_0 = 0;
		G_B3_1 = G_B2_0;
	}

IL_000f:
	{
		G_B3_1->set_m_Tracked_8(G_B3_0);
		return;
	}
}
extern "C"  void XRNodeState_set_tracked_m2754415404_AdjustorThunk (RuntimeObject * __this, bool ___value0, const RuntimeMethod* method)
{
	XRNodeState_t3058385596 * _thisAdjusted = reinterpret_cast<XRNodeState_t3058385596 *>(__this + 1);
	XRNodeState_set_tracked_m2754415404(_thisAdjusted, ___value0, method);
}
// System.Boolean UnityEngine.XR.XRSettings::get_enabled()
extern "C"  bool XRSettings_get_enabled_m1960787274 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	typedef bool (*XRSettings_get_enabled_m1960787274_ftn) ();
	static XRSettings_get_enabled_m1960787274_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (XRSettings_get_enabled_m1960787274_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.XR.XRSettings::get_enabled()");
	bool retVal = _il2cpp_icall_func();
	return retVal;
}
// System.Void UnityEngine.XR.XRSettings::set_enabled(System.Boolean)
extern "C"  void XRSettings_set_enabled_m460806192 (RuntimeObject * __this /* static, unused */, bool ___value0, const RuntimeMethod* method)
{
	typedef void (*XRSettings_set_enabled_m460806192_ftn) (bool);
	static XRSettings_set_enabled_m460806192_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (XRSettings_set_enabled_m460806192_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.XR.XRSettings::set_enabled(System.Boolean)");
	_il2cpp_icall_func(___value0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
