﻿#include "il2cpp-config.h"

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

// UnityEngineInternal.Input.NativeInputDeviceInfo
struct NativeInputDeviceInfo_t1151487398;
// UnityEngineInternal.Input.NativeDeviceDiscoveredCallback
struct NativeDeviceDiscoveredCallback_t3285246923;
// System.IAsyncResult
struct IAsyncResult_t3652441450;
// System.AsyncCallback
struct AsyncCallback_t1562013078;
// UnityEngineInternal.Input.NativeEventCallback
struct NativeEventCallback_t1237293343;
// UnityEngineInternal.Input.NativeUpdateCallback
struct NativeUpdateCallback_t1949395260;
// System.Char[]
struct CharU5BU5D_t2243636323;
// System.String
struct String_t;
// System.Void
struct Void_t1589630819;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t2130762809;

struct NativeInputDeviceInfo_t1151487398_marshaled_pinvoke;
struct NativeInputDeviceInfo_t1151487398;;
struct NativeInputDeviceInfo_t1151487398_marshaled_pinvoke;;
extern RuntimeClass* NativeInputDeviceInfo_t1151487398_il2cpp_TypeInfo_var;
extern const uint32_t NativeDeviceDiscoveredCallback_BeginInvoke_m2126171875_MetadataUsageId;
extern RuntimeClass* Int32_t1831168070_il2cpp_TypeInfo_var;
extern RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
extern const uint32_t NativeEventCallback_BeginInvoke_m1892780248_MetadataUsageId;
extern RuntimeClass* NativeInputSystem_t2627749041_il2cpp_TypeInfo_var;
extern const uint32_t NativeInputSystem_NotifyUpdate_m2238117966_MetadataUsageId;
extern const uint32_t NativeInputSystem_NotifyEvents_m910227161_MetadataUsageId;
extern const uint32_t NativeInputSystem_HasDeviceDiscoveredHandler_m2133825025_MetadataUsageId;
extern const uint32_t NativeInputSystem_NotifyDeviceDiscovered_m3927627522_MetadataUsageId;
extern RuntimeClass* NativeInputUpdateType_t288015640_il2cpp_TypeInfo_var;
extern const uint32_t NativeUpdateCallback_BeginInvoke_m661122220_MetadataUsageId;



#ifndef U3CMODULEU3E_T2468776590_H
#define U3CMODULEU3E_T2468776590_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t2468776590 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T2468776590_H
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
#ifndef NATIVEINPUTSYSTEM_T2627749041_H
#define NATIVEINPUTSYSTEM_T2627749041_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngineInternal.Input.NativeInputSystem
struct  NativeInputSystem_t2627749041  : public RuntimeObject
{
public:

public:
};

struct NativeInputSystem_t2627749041_StaticFields
{
public:
	// UnityEngineInternal.Input.NativeUpdateCallback UnityEngineInternal.Input.NativeInputSystem::onUpdate
	NativeUpdateCallback_t1949395260 * ___onUpdate_0;
	// UnityEngineInternal.Input.NativeEventCallback UnityEngineInternal.Input.NativeInputSystem::onEvents
	NativeEventCallback_t1237293343 * ___onEvents_1;
	// UnityEngineInternal.Input.NativeDeviceDiscoveredCallback UnityEngineInternal.Input.NativeInputSystem::onDeviceDiscovered
	NativeDeviceDiscoveredCallback_t3285246923 * ___onDeviceDiscovered_2;

public:
	inline static int32_t get_offset_of_onUpdate_0() { return static_cast<int32_t>(offsetof(NativeInputSystem_t2627749041_StaticFields, ___onUpdate_0)); }
	inline NativeUpdateCallback_t1949395260 * get_onUpdate_0() const { return ___onUpdate_0; }
	inline NativeUpdateCallback_t1949395260 ** get_address_of_onUpdate_0() { return &___onUpdate_0; }
	inline void set_onUpdate_0(NativeUpdateCallback_t1949395260 * value)
	{
		___onUpdate_0 = value;
		Il2CppCodeGenWriteBarrier((&___onUpdate_0), value);
	}

	inline static int32_t get_offset_of_onEvents_1() { return static_cast<int32_t>(offsetof(NativeInputSystem_t2627749041_StaticFields, ___onEvents_1)); }
	inline NativeEventCallback_t1237293343 * get_onEvents_1() const { return ___onEvents_1; }
	inline NativeEventCallback_t1237293343 ** get_address_of_onEvents_1() { return &___onEvents_1; }
	inline void set_onEvents_1(NativeEventCallback_t1237293343 * value)
	{
		___onEvents_1 = value;
		Il2CppCodeGenWriteBarrier((&___onEvents_1), value);
	}

	inline static int32_t get_offset_of_onDeviceDiscovered_2() { return static_cast<int32_t>(offsetof(NativeInputSystem_t2627749041_StaticFields, ___onDeviceDiscovered_2)); }
	inline NativeDeviceDiscoveredCallback_t3285246923 * get_onDeviceDiscovered_2() const { return ___onDeviceDiscovered_2; }
	inline NativeDeviceDiscoveredCallback_t3285246923 ** get_address_of_onDeviceDiscovered_2() { return &___onDeviceDiscovered_2; }
	inline void set_onDeviceDiscovered_2(NativeDeviceDiscoveredCallback_t3285246923 * value)
	{
		___onDeviceDiscovered_2 = value;
		Il2CppCodeGenWriteBarrier((&___onDeviceDiscovered_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NATIVEINPUTSYSTEM_T2627749041_H
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
#ifndef NATIVEINPUTDEVICEINFO_T1151487398_H
#define NATIVEINPUTDEVICEINFO_T1151487398_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngineInternal.Input.NativeInputDeviceInfo
struct  NativeInputDeviceInfo_t1151487398 
{
public:
	// System.Int32 UnityEngineInternal.Input.NativeInputDeviceInfo::deviceId
	int32_t ___deviceId_0;
	// System.String UnityEngineInternal.Input.NativeInputDeviceInfo::deviceDescriptor
	String_t* ___deviceDescriptor_1;

public:
	inline static int32_t get_offset_of_deviceId_0() { return static_cast<int32_t>(offsetof(NativeInputDeviceInfo_t1151487398, ___deviceId_0)); }
	inline int32_t get_deviceId_0() const { return ___deviceId_0; }
	inline int32_t* get_address_of_deviceId_0() { return &___deviceId_0; }
	inline void set_deviceId_0(int32_t value)
	{
		___deviceId_0 = value;
	}

	inline static int32_t get_offset_of_deviceDescriptor_1() { return static_cast<int32_t>(offsetof(NativeInputDeviceInfo_t1151487398, ___deviceDescriptor_1)); }
	inline String_t* get_deviceDescriptor_1() const { return ___deviceDescriptor_1; }
	inline String_t** get_address_of_deviceDescriptor_1() { return &___deviceDescriptor_1; }
	inline void set_deviceDescriptor_1(String_t* value)
	{
		___deviceDescriptor_1 = value;
		Il2CppCodeGenWriteBarrier((&___deviceDescriptor_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngineInternal.Input.NativeInputDeviceInfo
struct NativeInputDeviceInfo_t1151487398_marshaled_pinvoke
{
	int32_t ___deviceId_0;
	char* ___deviceDescriptor_1;
};
// Native definition for COM marshalling of UnityEngineInternal.Input.NativeInputDeviceInfo
struct NativeInputDeviceInfo_t1151487398_marshaled_com
{
	int32_t ___deviceId_0;
	Il2CppChar* ___deviceDescriptor_1;
};
#endif // NATIVEINPUTDEVICEINFO_T1151487398_H
#ifndef NATIVEINPUTUPDATETYPE_T288015640_H
#define NATIVEINPUTUPDATETYPE_T288015640_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngineInternal.Input.NativeInputUpdateType
struct  NativeInputUpdateType_t288015640 
{
public:
	// System.Int32 UnityEngineInternal.Input.NativeInputUpdateType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(NativeInputUpdateType_t288015640, ___value___1)); }
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
#endif // NATIVEINPUTUPDATETYPE_T288015640_H
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
#ifndef ASYNCCALLBACK_T1562013078_H
#define ASYNCCALLBACK_T1562013078_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.AsyncCallback
struct  AsyncCallback_t1562013078  : public MulticastDelegate_t1619953455
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYNCCALLBACK_T1562013078_H
#ifndef NATIVEUPDATECALLBACK_T1949395260_H
#define NATIVEUPDATECALLBACK_T1949395260_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngineInternal.Input.NativeUpdateCallback
struct  NativeUpdateCallback_t1949395260  : public MulticastDelegate_t1619953455
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NATIVEUPDATECALLBACK_T1949395260_H
#ifndef NATIVEDEVICEDISCOVEREDCALLBACK_T3285246923_H
#define NATIVEDEVICEDISCOVEREDCALLBACK_T3285246923_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngineInternal.Input.NativeDeviceDiscoveredCallback
struct  NativeDeviceDiscoveredCallback_t3285246923  : public MulticastDelegate_t1619953455
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NATIVEDEVICEDISCOVEREDCALLBACK_T3285246923_H
#ifndef NATIVEEVENTCALLBACK_T1237293343_H
#define NATIVEEVENTCALLBACK_T1237293343_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngineInternal.Input.NativeEventCallback
struct  NativeEventCallback_t1237293343  : public MulticastDelegate_t1619953455
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NATIVEEVENTCALLBACK_T1237293343_H

extern "C" void NativeInputDeviceInfo_t1151487398_marshal_pinvoke(const NativeInputDeviceInfo_t1151487398& unmarshaled, NativeInputDeviceInfo_t1151487398_marshaled_pinvoke& marshaled);
extern "C" void NativeInputDeviceInfo_t1151487398_marshal_pinvoke_back(const NativeInputDeviceInfo_t1151487398_marshaled_pinvoke& marshaled, NativeInputDeviceInfo_t1151487398& unmarshaled);
extern "C" void NativeInputDeviceInfo_t1151487398_marshal_pinvoke_cleanup(NativeInputDeviceInfo_t1151487398_marshaled_pinvoke& marshaled);


// System.Void UnityEngineInternal.Input.NativeDeviceDiscoveredCallback::Invoke(UnityEngineInternal.Input.NativeInputDeviceInfo)
extern "C"  void NativeDeviceDiscoveredCallback_Invoke_m3966919588 (NativeDeviceDiscoveredCallback_t3285246923 * __this, NativeInputDeviceInfo_t1151487398  ___deviceInfo0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngineInternal.Input.NativeEventCallback::Invoke(System.Int32,System.IntPtr)
extern "C"  void NativeEventCallback_Invoke_m3007421349 (NativeEventCallback_t1237293343 * __this, int32_t ___eventCount0, intptr_t ___eventData1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngineInternal.Input.NativeUpdateCallback::Invoke(UnityEngineInternal.Input.NativeInputUpdateType)
extern "C"  void NativeUpdateCallback_Invoke_m4031716603 (NativeUpdateCallback_t1949395260 * __this, int32_t ___updateType0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern "C"  void DelegatePInvokeWrapper_NativeDeviceDiscoveredCallback_t3285246923 (NativeDeviceDiscoveredCallback_t3285246923 * __this, NativeInputDeviceInfo_t1151487398  ___deviceInfo0, const RuntimeMethod* method)
{


	typedef void (STDCALL *PInvokeFunc)(NativeInputDeviceInfo_t1151487398_marshaled_pinvoke);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___deviceInfo0' to native representation
	NativeInputDeviceInfo_t1151487398_marshaled_pinvoke ____deviceInfo0_marshaled = {};
	NativeInputDeviceInfo_t1151487398_marshal_pinvoke(___deviceInfo0, ____deviceInfo0_marshaled);

	// Native function invocation
	il2cppPInvokeFunc(____deviceInfo0_marshaled);

	// Marshaling cleanup of parameter '___deviceInfo0' native representation
	NativeInputDeviceInfo_t1151487398_marshal_pinvoke_cleanup(____deviceInfo0_marshaled);

}
// System.Void UnityEngineInternal.Input.NativeDeviceDiscoveredCallback::.ctor(System.Object,System.IntPtr)
extern "C"  void NativeDeviceDiscoveredCallback__ctor_m2399143978 (NativeDeviceDiscoveredCallback_t3285246923 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngineInternal.Input.NativeDeviceDiscoveredCallback::Invoke(UnityEngineInternal.Input.NativeInputDeviceInfo)
extern "C"  void NativeDeviceDiscoveredCallback_Invoke_m3966919588 (NativeDeviceDiscoveredCallback_t3285246923 * __this, NativeInputDeviceInfo_t1151487398  ___deviceInfo0, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		NativeDeviceDiscoveredCallback_Invoke_m3966919588((NativeDeviceDiscoveredCallback_t3285246923 *)__this->get_prev_9(),___deviceInfo0, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((RuntimeMethod*)(__this->get_method_3()));
	bool ___methodIsStatic = MethodIsStatic((RuntimeMethod*)(__this->get_method_3()));
	if (__this->get_m_target_2() != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (RuntimeObject *, void* __this, NativeInputDeviceInfo_t1151487398  ___deviceInfo0, const RuntimeMethod* method);
		((FunctionPointerType)__this->get_method_ptr_0())(NULL,__this->get_m_target_2(),___deviceInfo0,(RuntimeMethod*)(__this->get_method_3()));
	}
	else
	{
		typedef void (*FunctionPointerType) (void* __this, NativeInputDeviceInfo_t1151487398  ___deviceInfo0, const RuntimeMethod* method);
		((FunctionPointerType)__this->get_method_ptr_0())(__this->get_m_target_2(),___deviceInfo0,(RuntimeMethod*)(__this->get_method_3()));
	}
}
// System.IAsyncResult UnityEngineInternal.Input.NativeDeviceDiscoveredCallback::BeginInvoke(UnityEngineInternal.Input.NativeInputDeviceInfo,System.AsyncCallback,System.Object)
extern "C"  RuntimeObject* NativeDeviceDiscoveredCallback_BeginInvoke_m2126171875 (NativeDeviceDiscoveredCallback_t3285246923 * __this, NativeInputDeviceInfo_t1151487398  ___deviceInfo0, AsyncCallback_t1562013078 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NativeDeviceDiscoveredCallback_BeginInvoke_m2126171875_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(NativeInputDeviceInfo_t1151487398_il2cpp_TypeInfo_var, &___deviceInfo0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void UnityEngineInternal.Input.NativeDeviceDiscoveredCallback::EndInvoke(System.IAsyncResult)
extern "C"  void NativeDeviceDiscoveredCallback_EndInvoke_m2232409060 (NativeDeviceDiscoveredCallback_t3285246923 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
extern "C"  void DelegatePInvokeWrapper_NativeEventCallback_t1237293343 (NativeEventCallback_t1237293343 * __this, int32_t ___eventCount0, intptr_t ___eventData1, const RuntimeMethod* method)
{
	typedef void (STDCALL *PInvokeFunc)(int32_t, intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___eventCount0, ___eventData1);

}
// System.Void UnityEngineInternal.Input.NativeEventCallback::.ctor(System.Object,System.IntPtr)
extern "C"  void NativeEventCallback__ctor_m1210548841 (NativeEventCallback_t1237293343 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngineInternal.Input.NativeEventCallback::Invoke(System.Int32,System.IntPtr)
extern "C"  void NativeEventCallback_Invoke_m3007421349 (NativeEventCallback_t1237293343 * __this, int32_t ___eventCount0, intptr_t ___eventData1, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		NativeEventCallback_Invoke_m3007421349((NativeEventCallback_t1237293343 *)__this->get_prev_9(),___eventCount0, ___eventData1, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((RuntimeMethod*)(__this->get_method_3()));
	bool ___methodIsStatic = MethodIsStatic((RuntimeMethod*)(__this->get_method_3()));
	if (__this->get_m_target_2() != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (RuntimeObject *, void* __this, int32_t ___eventCount0, intptr_t ___eventData1, const RuntimeMethod* method);
		((FunctionPointerType)__this->get_method_ptr_0())(NULL,__this->get_m_target_2(),___eventCount0, ___eventData1,(RuntimeMethod*)(__this->get_method_3()));
	}
	else
	{
		typedef void (*FunctionPointerType) (void* __this, int32_t ___eventCount0, intptr_t ___eventData1, const RuntimeMethod* method);
		((FunctionPointerType)__this->get_method_ptr_0())(__this->get_m_target_2(),___eventCount0, ___eventData1,(RuntimeMethod*)(__this->get_method_3()));
	}
}
// System.IAsyncResult UnityEngineInternal.Input.NativeEventCallback::BeginInvoke(System.Int32,System.IntPtr,System.AsyncCallback,System.Object)
extern "C"  RuntimeObject* NativeEventCallback_BeginInvoke_m1892780248 (NativeEventCallback_t1237293343 * __this, int32_t ___eventCount0, intptr_t ___eventData1, AsyncCallback_t1562013078 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NativeEventCallback_BeginInvoke_m1892780248_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(Int32_t1831168070_il2cpp_TypeInfo_var, &___eventCount0);
	__d_args[1] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___eventData1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void UnityEngineInternal.Input.NativeEventCallback::EndInvoke(System.IAsyncResult)
extern "C"  void NativeEventCallback_EndInvoke_m2533683649 (NativeEventCallback_t1237293343 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
// Conversion methods for marshalling of: UnityEngineInternal.Input.NativeInputDeviceInfo
extern "C" void NativeInputDeviceInfo_t1151487398_marshal_pinvoke(const NativeInputDeviceInfo_t1151487398& unmarshaled, NativeInputDeviceInfo_t1151487398_marshaled_pinvoke& marshaled)
{
	marshaled.___deviceId_0 = unmarshaled.get_deviceId_0();
	marshaled.___deviceDescriptor_1 = il2cpp_codegen_marshal_string(unmarshaled.get_deviceDescriptor_1());
}
extern "C" void NativeInputDeviceInfo_t1151487398_marshal_pinvoke_back(const NativeInputDeviceInfo_t1151487398_marshaled_pinvoke& marshaled, NativeInputDeviceInfo_t1151487398& unmarshaled)
{
	int32_t unmarshaled_deviceId_temp_0 = 0;
	unmarshaled_deviceId_temp_0 = marshaled.___deviceId_0;
	unmarshaled.set_deviceId_0(unmarshaled_deviceId_temp_0);
	unmarshaled.set_deviceDescriptor_1(il2cpp_codegen_marshal_string_result(marshaled.___deviceDescriptor_1));
}
// Conversion method for clean up from marshalling of: UnityEngineInternal.Input.NativeInputDeviceInfo
extern "C" void NativeInputDeviceInfo_t1151487398_marshal_pinvoke_cleanup(NativeInputDeviceInfo_t1151487398_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___deviceDescriptor_1);
	marshaled.___deviceDescriptor_1 = NULL;
}
// Conversion methods for marshalling of: UnityEngineInternal.Input.NativeInputDeviceInfo
extern "C" void NativeInputDeviceInfo_t1151487398_marshal_com(const NativeInputDeviceInfo_t1151487398& unmarshaled, NativeInputDeviceInfo_t1151487398_marshaled_com& marshaled)
{
	marshaled.___deviceId_0 = unmarshaled.get_deviceId_0();
	marshaled.___deviceDescriptor_1 = il2cpp_codegen_marshal_bstring(unmarshaled.get_deviceDescriptor_1());
}
extern "C" void NativeInputDeviceInfo_t1151487398_marshal_com_back(const NativeInputDeviceInfo_t1151487398_marshaled_com& marshaled, NativeInputDeviceInfo_t1151487398& unmarshaled)
{
	int32_t unmarshaled_deviceId_temp_0 = 0;
	unmarshaled_deviceId_temp_0 = marshaled.___deviceId_0;
	unmarshaled.set_deviceId_0(unmarshaled_deviceId_temp_0);
	unmarshaled.set_deviceDescriptor_1(il2cpp_codegen_marshal_bstring_result(marshaled.___deviceDescriptor_1));
}
// Conversion method for clean up from marshalling of: UnityEngineInternal.Input.NativeInputDeviceInfo
extern "C" void NativeInputDeviceInfo_t1151487398_marshal_com_cleanup(NativeInputDeviceInfo_t1151487398_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___deviceDescriptor_1);
	marshaled.___deviceDescriptor_1 = NULL;
}
// System.Void UnityEngineInternal.Input.NativeInputSystem::NotifyUpdate(UnityEngineInternal.Input.NativeInputUpdateType)
extern "C"  void NativeInputSystem_NotifyUpdate_m2238117966 (RuntimeObject * __this /* static, unused */, int32_t ___updateType0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NativeInputSystem_NotifyUpdate_m2238117966_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	NativeUpdateCallback_t1949395260 * V_0 = NULL;
	{
		NativeUpdateCallback_t1949395260 * L_0 = ((NativeInputSystem_t2627749041_StaticFields*)il2cpp_codegen_static_fields_for(NativeInputSystem_t2627749041_il2cpp_TypeInfo_var))->get_onUpdate_0();
		V_0 = L_0;
		NativeUpdateCallback_t1949395260 * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		NativeUpdateCallback_t1949395260 * L_2 = V_0;
		int32_t L_3 = ___updateType0;
		NullCheck(L_2);
		NativeUpdateCallback_Invoke_m4031716603(L_2, L_3, /*hidden argument*/NULL);
	}

IL_0014:
	{
		return;
	}
}
// System.Void UnityEngineInternal.Input.NativeInputSystem::NotifyEvents(System.Int32,System.IntPtr)
extern "C"  void NativeInputSystem_NotifyEvents_m910227161 (RuntimeObject * __this /* static, unused */, int32_t ___eventCount0, intptr_t ___eventData1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NativeInputSystem_NotifyEvents_m910227161_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	NativeEventCallback_t1237293343 * V_0 = NULL;
	{
		NativeEventCallback_t1237293343 * L_0 = ((NativeInputSystem_t2627749041_StaticFields*)il2cpp_codegen_static_fields_for(NativeInputSystem_t2627749041_il2cpp_TypeInfo_var))->get_onEvents_1();
		V_0 = L_0;
		NativeEventCallback_t1237293343 * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		NativeEventCallback_t1237293343 * L_2 = V_0;
		int32_t L_3 = ___eventCount0;
		intptr_t L_4 = ___eventData1;
		NullCheck(L_2);
		NativeEventCallback_Invoke_m3007421349(L_2, L_3, L_4, /*hidden argument*/NULL);
	}

IL_0015:
	{
		return;
	}
}
// System.Boolean UnityEngineInternal.Input.NativeInputSystem::HasDeviceDiscoveredHandler()
extern "C"  bool NativeInputSystem_HasDeviceDiscoveredHandler_m2133825025 (RuntimeObject * __this /* static, unused */, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NativeInputSystem_HasDeviceDiscoveredHandler_m2133825025_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		NativeDeviceDiscoveredCallback_t3285246923 * L_0 = ((NativeInputSystem_t2627749041_StaticFields*)il2cpp_codegen_static_fields_for(NativeInputSystem_t2627749041_il2cpp_TypeInfo_var))->get_onDeviceDiscovered_2();
		V_0 = (bool)((((int32_t)((((RuntimeObject*)(NativeDeviceDiscoveredCallback_t3285246923 *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0012;
	}

IL_0012:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void UnityEngineInternal.Input.NativeInputSystem::NotifyDeviceDiscovered(UnityEngineInternal.Input.NativeInputDeviceInfo)
extern "C"  void NativeInputSystem_NotifyDeviceDiscovered_m3927627522 (RuntimeObject * __this /* static, unused */, NativeInputDeviceInfo_t1151487398  ___deviceInfo0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NativeInputSystem_NotifyDeviceDiscovered_m3927627522_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	NativeDeviceDiscoveredCallback_t3285246923 * V_0 = NULL;
	{
		NativeDeviceDiscoveredCallback_t3285246923 * L_0 = ((NativeInputSystem_t2627749041_StaticFields*)il2cpp_codegen_static_fields_for(NativeInputSystem_t2627749041_il2cpp_TypeInfo_var))->get_onDeviceDiscovered_2();
		V_0 = L_0;
		NativeDeviceDiscoveredCallback_t3285246923 * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		NativeDeviceDiscoveredCallback_t3285246923 * L_2 = V_0;
		NativeInputDeviceInfo_t1151487398  L_3 = ___deviceInfo0;
		NullCheck(L_2);
		NativeDeviceDiscoveredCallback_Invoke_m3966919588(L_2, L_3, /*hidden argument*/NULL);
	}

IL_0014:
	{
		return;
	}
}
extern "C"  void DelegatePInvokeWrapper_NativeUpdateCallback_t1949395260 (NativeUpdateCallback_t1949395260 * __this, int32_t ___updateType0, const RuntimeMethod* method)
{
	typedef void (STDCALL *PInvokeFunc)(int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___updateType0);

}
// System.Void UnityEngineInternal.Input.NativeUpdateCallback::.ctor(System.Object,System.IntPtr)
extern "C"  void NativeUpdateCallback__ctor_m4094108017 (NativeUpdateCallback_t1949395260 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngineInternal.Input.NativeUpdateCallback::Invoke(UnityEngineInternal.Input.NativeInputUpdateType)
extern "C"  void NativeUpdateCallback_Invoke_m4031716603 (NativeUpdateCallback_t1949395260 * __this, int32_t ___updateType0, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		NativeUpdateCallback_Invoke_m4031716603((NativeUpdateCallback_t1949395260 *)__this->get_prev_9(),___updateType0, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((RuntimeMethod*)(__this->get_method_3()));
	bool ___methodIsStatic = MethodIsStatic((RuntimeMethod*)(__this->get_method_3()));
	if (__this->get_m_target_2() != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (RuntimeObject *, void* __this, int32_t ___updateType0, const RuntimeMethod* method);
		((FunctionPointerType)__this->get_method_ptr_0())(NULL,__this->get_m_target_2(),___updateType0,(RuntimeMethod*)(__this->get_method_3()));
	}
	else
	{
		typedef void (*FunctionPointerType) (void* __this, int32_t ___updateType0, const RuntimeMethod* method);
		((FunctionPointerType)__this->get_method_ptr_0())(__this->get_m_target_2(),___updateType0,(RuntimeMethod*)(__this->get_method_3()));
	}
}
// System.IAsyncResult UnityEngineInternal.Input.NativeUpdateCallback::BeginInvoke(UnityEngineInternal.Input.NativeInputUpdateType,System.AsyncCallback,System.Object)
extern "C"  RuntimeObject* NativeUpdateCallback_BeginInvoke_m661122220 (NativeUpdateCallback_t1949395260 * __this, int32_t ___updateType0, AsyncCallback_t1562013078 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NativeUpdateCallback_BeginInvoke_m661122220_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(NativeInputUpdateType_t288015640_il2cpp_TypeInfo_var, &___updateType0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void UnityEngineInternal.Input.NativeUpdateCallback::EndInvoke(System.IAsyncResult)
extern "C"  void NativeUpdateCallback_EndInvoke_m4231168002 (NativeUpdateCallback_t1949395260 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif