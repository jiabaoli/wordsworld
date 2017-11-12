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

// UnityEngine.Video.VideoClip
struct VideoClip_t2336480633;
// UnityEngine.Object
struct Object_t3038624000;
// System.String
struct String_t;
// UnityEngine.Video.VideoPlayer
struct VideoPlayer_t3941353606;
// UnityEngine.Video.VideoPlayer/EventHandler
struct EventHandler_t1140939921;
// System.Delegate
struct Delegate_t4185853630;
// UnityEngine.Video.VideoPlayer/ErrorEventHandler
struct ErrorEventHandler_t1409275877;
// UnityEngine.Video.VideoPlayer/FrameReadyEventHandler
struct FrameReadyEventHandler_t2656609697;
// UnityEngine.Video.VideoPlayer/TimeEventHandler
struct TimeEventHandler_t204976650;
// System.IAsyncResult
struct IAsyncResult_t3652441450;
// System.AsyncCallback
struct AsyncCallback_t1562013078;
// System.Char[]
struct CharU5BU5D_t2243636323;
// System.Void
struct Void_t1589630819;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t2130762809;

extern RuntimeClass* Object_t3038624000_il2cpp_TypeInfo_var;
extern const uint32_t VideoClip__ctor_m26819437_MetadataUsageId;
extern RuntimeClass* EventHandler_t1140939921_il2cpp_TypeInfo_var;
extern const uint32_t VideoPlayer_add_prepareCompleted_m68552678_MetadataUsageId;
extern const uint32_t VideoPlayer_remove_prepareCompleted_m3434587999_MetadataUsageId;
extern const uint32_t VideoPlayer_add_loopPointReached_m1466426124_MetadataUsageId;
extern const uint32_t VideoPlayer_remove_loopPointReached_m3133311723_MetadataUsageId;
extern const uint32_t VideoPlayer_add_started_m4085232257_MetadataUsageId;
extern const uint32_t VideoPlayer_remove_started_m1553680433_MetadataUsageId;
extern RuntimeClass* ErrorEventHandler_t1409275877_il2cpp_TypeInfo_var;
extern const uint32_t VideoPlayer_add_errorReceived_m4149968752_MetadataUsageId;
extern const uint32_t VideoPlayer_remove_errorReceived_m3895229000_MetadataUsageId;
extern const uint32_t VideoPlayer_add_seekCompleted_m3343379738_MetadataUsageId;
extern const uint32_t VideoPlayer_remove_seekCompleted_m1743846549_MetadataUsageId;
extern RuntimeClass* Int64_t4204515573_il2cpp_TypeInfo_var;
extern const uint32_t FrameReadyEventHandler_BeginInvoke_m4105202595_MetadataUsageId;
extern RuntimeClass* Double_t3688195453_il2cpp_TypeInfo_var;
extern const uint32_t TimeEventHandler_BeginInvoke_m749083081_MetadataUsageId;



#ifndef U3CMODULEU3E_T2468776599_H
#define U3CMODULEU3E_T2468776599_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t2468776599 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CMODULEU3E_T2468776599_H
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
#ifndef UINT16_T629750127_H
#define UINT16_T629750127_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt16
struct  UInt16_t629750127 
{
public:
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_2;

public:
	inline static int32_t get_offset_of_m_value_2() { return static_cast<int32_t>(offsetof(UInt16_t629750127, ___m_value_2)); }
	inline uint16_t get_m_value_2() const { return ___m_value_2; }
	inline uint16_t* get_address_of_m_value_2() { return &___m_value_2; }
	inline void set_m_value_2(uint16_t value)
	{
		___m_value_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT16_T629750127_H
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
#ifndef DOUBLE_T3688195453_H
#define DOUBLE_T3688195453_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Double
struct  Double_t3688195453 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_13;

public:
	inline static int32_t get_offset_of_m_value_13() { return static_cast<int32_t>(offsetof(Double_t3688195453, ___m_value_13)); }
	inline double get_m_value_13() const { return ___m_value_13; }
	inline double* get_address_of_m_value_13() { return &___m_value_13; }
	inline void set_m_value_13(double value)
	{
		___m_value_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DOUBLE_T3688195453_H
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
#ifndef UINT32_T2817190363_H
#define UINT32_T2817190363_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt32
struct  UInt32_t2817190363 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_t2817190363, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT32_T2817190363_H
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
#ifndef VIDEOCLIP_T2336480633_H
#define VIDEOCLIP_T2336480633_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Video.VideoClip
struct  VideoClip_t2336480633  : public Object_t3038624000
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VIDEOCLIP_T2336480633_H
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
#ifndef EVENTHANDLER_T1140939921_H
#define EVENTHANDLER_T1140939921_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Video.VideoPlayer/EventHandler
struct  EventHandler_t1140939921  : public MulticastDelegate_t1619953455
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTHANDLER_T1140939921_H
#ifndef ERROREVENTHANDLER_T1409275877_H
#define ERROREVENTHANDLER_T1409275877_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Video.VideoPlayer/ErrorEventHandler
struct  ErrorEventHandler_t1409275877  : public MulticastDelegate_t1619953455
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ERROREVENTHANDLER_T1409275877_H
#ifndef FRAMEREADYEVENTHANDLER_T2656609697_H
#define FRAMEREADYEVENTHANDLER_T2656609697_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Video.VideoPlayer/FrameReadyEventHandler
struct  FrameReadyEventHandler_t2656609697  : public MulticastDelegate_t1619953455
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FRAMEREADYEVENTHANDLER_T2656609697_H
#ifndef TIMEEVENTHANDLER_T204976650_H
#define TIMEEVENTHANDLER_T204976650_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Video.VideoPlayer/TimeEventHandler
struct  TimeEventHandler_t204976650  : public MulticastDelegate_t1619953455
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMEEVENTHANDLER_T204976650_H
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
#ifndef VIDEOPLAYER_T3941353606_H
#define VIDEOPLAYER_T3941353606_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Video.VideoPlayer
struct  VideoPlayer_t3941353606  : public Behaviour_t740419834
{
public:
	// UnityEngine.Video.VideoPlayer/EventHandler UnityEngine.Video.VideoPlayer::prepareCompleted
	EventHandler_t1140939921 * ___prepareCompleted_2;
	// UnityEngine.Video.VideoPlayer/EventHandler UnityEngine.Video.VideoPlayer::loopPointReached
	EventHandler_t1140939921 * ___loopPointReached_3;
	// UnityEngine.Video.VideoPlayer/EventHandler UnityEngine.Video.VideoPlayer::started
	EventHandler_t1140939921 * ___started_4;
	// UnityEngine.Video.VideoPlayer/EventHandler UnityEngine.Video.VideoPlayer::frameDropped
	EventHandler_t1140939921 * ___frameDropped_5;
	// UnityEngine.Video.VideoPlayer/ErrorEventHandler UnityEngine.Video.VideoPlayer::errorReceived
	ErrorEventHandler_t1409275877 * ___errorReceived_6;
	// UnityEngine.Video.VideoPlayer/EventHandler UnityEngine.Video.VideoPlayer::seekCompleted
	EventHandler_t1140939921 * ___seekCompleted_7;
	// UnityEngine.Video.VideoPlayer/TimeEventHandler UnityEngine.Video.VideoPlayer::clockResyncOccurred
	TimeEventHandler_t204976650 * ___clockResyncOccurred_8;
	// UnityEngine.Video.VideoPlayer/FrameReadyEventHandler UnityEngine.Video.VideoPlayer::frameReady
	FrameReadyEventHandler_t2656609697 * ___frameReady_9;

public:
	inline static int32_t get_offset_of_prepareCompleted_2() { return static_cast<int32_t>(offsetof(VideoPlayer_t3941353606, ___prepareCompleted_2)); }
	inline EventHandler_t1140939921 * get_prepareCompleted_2() const { return ___prepareCompleted_2; }
	inline EventHandler_t1140939921 ** get_address_of_prepareCompleted_2() { return &___prepareCompleted_2; }
	inline void set_prepareCompleted_2(EventHandler_t1140939921 * value)
	{
		___prepareCompleted_2 = value;
		Il2CppCodeGenWriteBarrier((&___prepareCompleted_2), value);
	}

	inline static int32_t get_offset_of_loopPointReached_3() { return static_cast<int32_t>(offsetof(VideoPlayer_t3941353606, ___loopPointReached_3)); }
	inline EventHandler_t1140939921 * get_loopPointReached_3() const { return ___loopPointReached_3; }
	inline EventHandler_t1140939921 ** get_address_of_loopPointReached_3() { return &___loopPointReached_3; }
	inline void set_loopPointReached_3(EventHandler_t1140939921 * value)
	{
		___loopPointReached_3 = value;
		Il2CppCodeGenWriteBarrier((&___loopPointReached_3), value);
	}

	inline static int32_t get_offset_of_started_4() { return static_cast<int32_t>(offsetof(VideoPlayer_t3941353606, ___started_4)); }
	inline EventHandler_t1140939921 * get_started_4() const { return ___started_4; }
	inline EventHandler_t1140939921 ** get_address_of_started_4() { return &___started_4; }
	inline void set_started_4(EventHandler_t1140939921 * value)
	{
		___started_4 = value;
		Il2CppCodeGenWriteBarrier((&___started_4), value);
	}

	inline static int32_t get_offset_of_frameDropped_5() { return static_cast<int32_t>(offsetof(VideoPlayer_t3941353606, ___frameDropped_5)); }
	inline EventHandler_t1140939921 * get_frameDropped_5() const { return ___frameDropped_5; }
	inline EventHandler_t1140939921 ** get_address_of_frameDropped_5() { return &___frameDropped_5; }
	inline void set_frameDropped_5(EventHandler_t1140939921 * value)
	{
		___frameDropped_5 = value;
		Il2CppCodeGenWriteBarrier((&___frameDropped_5), value);
	}

	inline static int32_t get_offset_of_errorReceived_6() { return static_cast<int32_t>(offsetof(VideoPlayer_t3941353606, ___errorReceived_6)); }
	inline ErrorEventHandler_t1409275877 * get_errorReceived_6() const { return ___errorReceived_6; }
	inline ErrorEventHandler_t1409275877 ** get_address_of_errorReceived_6() { return &___errorReceived_6; }
	inline void set_errorReceived_6(ErrorEventHandler_t1409275877 * value)
	{
		___errorReceived_6 = value;
		Il2CppCodeGenWriteBarrier((&___errorReceived_6), value);
	}

	inline static int32_t get_offset_of_seekCompleted_7() { return static_cast<int32_t>(offsetof(VideoPlayer_t3941353606, ___seekCompleted_7)); }
	inline EventHandler_t1140939921 * get_seekCompleted_7() const { return ___seekCompleted_7; }
	inline EventHandler_t1140939921 ** get_address_of_seekCompleted_7() { return &___seekCompleted_7; }
	inline void set_seekCompleted_7(EventHandler_t1140939921 * value)
	{
		___seekCompleted_7 = value;
		Il2CppCodeGenWriteBarrier((&___seekCompleted_7), value);
	}

	inline static int32_t get_offset_of_clockResyncOccurred_8() { return static_cast<int32_t>(offsetof(VideoPlayer_t3941353606, ___clockResyncOccurred_8)); }
	inline TimeEventHandler_t204976650 * get_clockResyncOccurred_8() const { return ___clockResyncOccurred_8; }
	inline TimeEventHandler_t204976650 ** get_address_of_clockResyncOccurred_8() { return &___clockResyncOccurred_8; }
	inline void set_clockResyncOccurred_8(TimeEventHandler_t204976650 * value)
	{
		___clockResyncOccurred_8 = value;
		Il2CppCodeGenWriteBarrier((&___clockResyncOccurred_8), value);
	}

	inline static int32_t get_offset_of_frameReady_9() { return static_cast<int32_t>(offsetof(VideoPlayer_t3941353606, ___frameReady_9)); }
	inline FrameReadyEventHandler_t2656609697 * get_frameReady_9() const { return ___frameReady_9; }
	inline FrameReadyEventHandler_t2656609697 ** get_address_of_frameReady_9() { return &___frameReady_9; }
	inline void set_frameReady_9(FrameReadyEventHandler_t2656609697 * value)
	{
		___frameReady_9 = value;
		Il2CppCodeGenWriteBarrier((&___frameReady_9), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VIDEOPLAYER_T3941353606_H



// System.Void UnityEngine.Object::.ctor()
extern "C"  void Object__ctor_m4101226926 (Object_t3038624000 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Video.VideoPlayer::INTERNAL_CALL_Play(UnityEngine.Video.VideoPlayer)
extern "C"  void VideoPlayer_INTERNAL_CALL_Play_m307268990 (RuntimeObject * __this /* static, unused */, VideoPlayer_t3941353606 * ___self0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Video.VideoPlayer::INTERNAL_CALL_Pause(UnityEngine.Video.VideoPlayer)
extern "C"  void VideoPlayer_INTERNAL_CALL_Pause_m655674856 (RuntimeObject * __this /* static, unused */, VideoPlayer_t3941353606 * ___self0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
extern "C"  Delegate_t4185853630 * Delegate_Combine_m1894528834 (RuntimeObject * __this /* static, unused */, Delegate_t4185853630 * p0, Delegate_t4185853630 * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
extern "C"  Delegate_t4185853630 * Delegate_Remove_m2646842649 (RuntimeObject * __this /* static, unused */, Delegate_t4185853630 * p0, Delegate_t4185853630 * p1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Video.VideoPlayer/EventHandler::Invoke(UnityEngine.Video.VideoPlayer)
extern "C"  void EventHandler_Invoke_m4109901533 (EventHandler_t1140939921 * __this, VideoPlayer_t3941353606 * ___source0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Video.VideoPlayer/FrameReadyEventHandler::Invoke(UnityEngine.Video.VideoPlayer,System.Int64)
extern "C"  void FrameReadyEventHandler_Invoke_m1587809962 (FrameReadyEventHandler_t2656609697 * __this, VideoPlayer_t3941353606 * ___source0, int64_t ___frameIdx1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Video.VideoPlayer/ErrorEventHandler::Invoke(UnityEngine.Video.VideoPlayer,System.String)
extern "C"  void ErrorEventHandler_Invoke_m3185647162 (ErrorEventHandler_t1409275877 * __this, VideoPlayer_t3941353606 * ___source0, String_t* ___message1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Video.VideoPlayer/TimeEventHandler::Invoke(UnityEngine.Video.VideoPlayer,System.Double)
extern "C"  void TimeEventHandler_Invoke_m2328036903 (TimeEventHandler_t204976650 * __this, VideoPlayer_t3941353606 * ___source0, double ___seconds1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Video.VideoClip::.ctor()
extern "C"  void VideoClip__ctor_m26819437 (VideoClip_t2336480633 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VideoClip__ctor_m26819437_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Object_t3038624000_il2cpp_TypeInfo_var);
		Object__ctor_m4101226926(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String UnityEngine.Video.VideoClip::get_originalPath()
extern "C"  String_t* VideoClip_get_originalPath_m354521499 (VideoClip_t2336480633 * __this, const RuntimeMethod* method)
{
	typedef String_t* (*VideoClip_get_originalPath_m354521499_ftn) (VideoClip_t2336480633 *);
	static VideoClip_get_originalPath_m354521499_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoClip_get_originalPath_m354521499_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoClip::get_originalPath()");
	String_t* retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.UInt64 UnityEngine.Video.VideoClip::get_frameCount()
extern "C"  uint64_t VideoClip_get_frameCount_m1694340026 (VideoClip_t2336480633 * __this, const RuntimeMethod* method)
{
	typedef uint64_t (*VideoClip_get_frameCount_m1694340026_ftn) (VideoClip_t2336480633 *);
	static VideoClip_get_frameCount_m1694340026_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoClip_get_frameCount_m1694340026_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoClip::get_frameCount()");
	uint64_t retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Double UnityEngine.Video.VideoClip::get_frameRate()
extern "C"  double VideoClip_get_frameRate_m1448622944 (VideoClip_t2336480633 * __this, const RuntimeMethod* method)
{
	typedef double (*VideoClip_get_frameRate_m1448622944_ftn) (VideoClip_t2336480633 *);
	static VideoClip_get_frameRate_m1448622944_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoClip_get_frameRate_m1448622944_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoClip::get_frameRate()");
	double retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Double UnityEngine.Video.VideoClip::get_length()
extern "C"  double VideoClip_get_length_m1773866758 (VideoClip_t2336480633 * __this, const RuntimeMethod* method)
{
	typedef double (*VideoClip_get_length_m1773866758_ftn) (VideoClip_t2336480633 *);
	static VideoClip_get_length_m1773866758_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoClip_get_length_m1773866758_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoClip::get_length()");
	double retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.UInt32 UnityEngine.Video.VideoClip::get_width()
extern "C"  uint32_t VideoClip_get_width_m1009314352 (VideoClip_t2336480633 * __this, const RuntimeMethod* method)
{
	typedef uint32_t (*VideoClip_get_width_m1009314352_ftn) (VideoClip_t2336480633 *);
	static VideoClip_get_width_m1009314352_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoClip_get_width_m1009314352_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoClip::get_width()");
	uint32_t retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.UInt32 UnityEngine.Video.VideoClip::get_height()
extern "C"  uint32_t VideoClip_get_height_m1041499027 (VideoClip_t2336480633 * __this, const RuntimeMethod* method)
{
	typedef uint32_t (*VideoClip_get_height_m1041499027_ftn) (VideoClip_t2336480633 *);
	static VideoClip_get_height_m1041499027_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoClip_get_height_m1041499027_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoClip::get_height()");
	uint32_t retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.UInt16 UnityEngine.Video.VideoClip::get_audioTrackCount()
extern "C"  uint16_t VideoClip_get_audioTrackCount_m2680455113 (VideoClip_t2336480633 * __this, const RuntimeMethod* method)
{
	typedef uint16_t (*VideoClip_get_audioTrackCount_m2680455113_ftn) (VideoClip_t2336480633 *);
	static VideoClip_get_audioTrackCount_m2680455113_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoClip_get_audioTrackCount_m2680455113_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoClip::get_audioTrackCount()");
	uint16_t retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// UnityEngine.Video.VideoClip UnityEngine.Video.VideoPlayer::get_clip()
extern "C"  VideoClip_t2336480633 * VideoPlayer_get_clip_m3254980461 (VideoPlayer_t3941353606 * __this, const RuntimeMethod* method)
{
	typedef VideoClip_t2336480633 * (*VideoPlayer_get_clip_m3254980461_ftn) (VideoPlayer_t3941353606 *);
	static VideoPlayer_get_clip_m3254980461_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_get_clip_m3254980461_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::get_clip()");
	VideoClip_t2336480633 * retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.Video.VideoPlayer::Play()
extern "C"  void VideoPlayer_Play_m2892301564 (VideoPlayer_t3941353606 * __this, const RuntimeMethod* method)
{
	{
		VideoPlayer_INTERNAL_CALL_Play_m307268990(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Video.VideoPlayer::INTERNAL_CALL_Play(UnityEngine.Video.VideoPlayer)
extern "C"  void VideoPlayer_INTERNAL_CALL_Play_m307268990 (RuntimeObject * __this /* static, unused */, VideoPlayer_t3941353606 * ___self0, const RuntimeMethod* method)
{
	typedef void (*VideoPlayer_INTERNAL_CALL_Play_m307268990_ftn) (VideoPlayer_t3941353606 *);
	static VideoPlayer_INTERNAL_CALL_Play_m307268990_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_INTERNAL_CALL_Play_m307268990_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::INTERNAL_CALL_Play(UnityEngine.Video.VideoPlayer)");
	_il2cpp_icall_func(___self0);
}
// System.Void UnityEngine.Video.VideoPlayer::Pause()
extern "C"  void VideoPlayer_Pause_m2943485589 (VideoPlayer_t3941353606 * __this, const RuntimeMethod* method)
{
	{
		VideoPlayer_INTERNAL_CALL_Pause_m655674856(NULL /*static, unused*/, __this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Video.VideoPlayer::INTERNAL_CALL_Pause(UnityEngine.Video.VideoPlayer)
extern "C"  void VideoPlayer_INTERNAL_CALL_Pause_m655674856 (RuntimeObject * __this /* static, unused */, VideoPlayer_t3941353606 * ___self0, const RuntimeMethod* method)
{
	typedef void (*VideoPlayer_INTERNAL_CALL_Pause_m655674856_ftn) (VideoPlayer_t3941353606 *);
	static VideoPlayer_INTERNAL_CALL_Pause_m655674856_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_INTERNAL_CALL_Pause_m655674856_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::INTERNAL_CALL_Pause(UnityEngine.Video.VideoPlayer)");
	_il2cpp_icall_func(___self0);
}
// System.Boolean UnityEngine.Video.VideoPlayer::get_isPlaying()
extern "C"  bool VideoPlayer_get_isPlaying_m1057077472 (VideoPlayer_t3941353606 * __this, const RuntimeMethod* method)
{
	typedef bool (*VideoPlayer_get_isPlaying_m1057077472_ftn) (VideoPlayer_t3941353606 *);
	static VideoPlayer_get_isPlaying_m1057077472_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_get_isPlaying_m1057077472_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::get_isPlaying()");
	bool retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Int64 UnityEngine.Video.VideoPlayer::get_frame()
extern "C"  int64_t VideoPlayer_get_frame_m1162077101 (VideoPlayer_t3941353606 * __this, const RuntimeMethod* method)
{
	typedef int64_t (*VideoPlayer_get_frame_m1162077101_ftn) (VideoPlayer_t3941353606 *);
	static VideoPlayer_get_frame_m1162077101_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_get_frame_m1162077101_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::get_frame()");
	int64_t retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.UInt64 UnityEngine.Video.VideoPlayer::get_frameCount()
extern "C"  uint64_t VideoPlayer_get_frameCount_m1976603340 (VideoPlayer_t3941353606 * __this, const RuntimeMethod* method)
{
	typedef uint64_t (*VideoPlayer_get_frameCount_m1976603340_ftn) (VideoPlayer_t3941353606 *);
	static VideoPlayer_get_frameCount_m1976603340_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (VideoPlayer_get_frameCount_m1976603340_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Video.VideoPlayer::get_frameCount()");
	uint64_t retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.Video.VideoPlayer::add_prepareCompleted(UnityEngine.Video.VideoPlayer/EventHandler)
extern "C"  void VideoPlayer_add_prepareCompleted_m68552678 (VideoPlayer_t3941353606 * __this, EventHandler_t1140939921 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VideoPlayer_add_prepareCompleted_m68552678_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_t1140939921 * V_0 = NULL;
	EventHandler_t1140939921 * V_1 = NULL;
	{
		EventHandler_t1140939921 * L_0 = __this->get_prepareCompleted_2();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_t1140939921 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_t1140939921 ** L_2 = __this->get_address_of_prepareCompleted_2();
		EventHandler_t1140939921 * L_3 = V_1;
		EventHandler_t1140939921 * L_4 = ___value0;
		Delegate_t4185853630 * L_5 = Delegate_Combine_m1894528834(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		EventHandler_t1140939921 * L_6 = V_0;
		EventHandler_t1140939921 * L_7 = InterlockedCompareExchangeImpl<EventHandler_t1140939921 *>(L_2, ((EventHandler_t1140939921 *)CastclassSealed((RuntimeObject*)L_5, EventHandler_t1140939921_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_t1140939921 * L_8 = V_0;
		EventHandler_t1140939921 * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_t1140939921 *)L_8) == ((RuntimeObject*)(EventHandler_t1140939921 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Video.VideoPlayer::remove_prepareCompleted(UnityEngine.Video.VideoPlayer/EventHandler)
extern "C"  void VideoPlayer_remove_prepareCompleted_m3434587999 (VideoPlayer_t3941353606 * __this, EventHandler_t1140939921 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VideoPlayer_remove_prepareCompleted_m3434587999_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_t1140939921 * V_0 = NULL;
	EventHandler_t1140939921 * V_1 = NULL;
	{
		EventHandler_t1140939921 * L_0 = __this->get_prepareCompleted_2();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_t1140939921 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_t1140939921 ** L_2 = __this->get_address_of_prepareCompleted_2();
		EventHandler_t1140939921 * L_3 = V_1;
		EventHandler_t1140939921 * L_4 = ___value0;
		Delegate_t4185853630 * L_5 = Delegate_Remove_m2646842649(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		EventHandler_t1140939921 * L_6 = V_0;
		EventHandler_t1140939921 * L_7 = InterlockedCompareExchangeImpl<EventHandler_t1140939921 *>(L_2, ((EventHandler_t1140939921 *)CastclassSealed((RuntimeObject*)L_5, EventHandler_t1140939921_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_t1140939921 * L_8 = V_0;
		EventHandler_t1140939921 * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_t1140939921 *)L_8) == ((RuntimeObject*)(EventHandler_t1140939921 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Video.VideoPlayer::add_loopPointReached(UnityEngine.Video.VideoPlayer/EventHandler)
extern "C"  void VideoPlayer_add_loopPointReached_m1466426124 (VideoPlayer_t3941353606 * __this, EventHandler_t1140939921 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VideoPlayer_add_loopPointReached_m1466426124_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_t1140939921 * V_0 = NULL;
	EventHandler_t1140939921 * V_1 = NULL;
	{
		EventHandler_t1140939921 * L_0 = __this->get_loopPointReached_3();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_t1140939921 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_t1140939921 ** L_2 = __this->get_address_of_loopPointReached_3();
		EventHandler_t1140939921 * L_3 = V_1;
		EventHandler_t1140939921 * L_4 = ___value0;
		Delegate_t4185853630 * L_5 = Delegate_Combine_m1894528834(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		EventHandler_t1140939921 * L_6 = V_0;
		EventHandler_t1140939921 * L_7 = InterlockedCompareExchangeImpl<EventHandler_t1140939921 *>(L_2, ((EventHandler_t1140939921 *)CastclassSealed((RuntimeObject*)L_5, EventHandler_t1140939921_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_t1140939921 * L_8 = V_0;
		EventHandler_t1140939921 * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_t1140939921 *)L_8) == ((RuntimeObject*)(EventHandler_t1140939921 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Video.VideoPlayer::remove_loopPointReached(UnityEngine.Video.VideoPlayer/EventHandler)
extern "C"  void VideoPlayer_remove_loopPointReached_m3133311723 (VideoPlayer_t3941353606 * __this, EventHandler_t1140939921 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VideoPlayer_remove_loopPointReached_m3133311723_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_t1140939921 * V_0 = NULL;
	EventHandler_t1140939921 * V_1 = NULL;
	{
		EventHandler_t1140939921 * L_0 = __this->get_loopPointReached_3();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_t1140939921 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_t1140939921 ** L_2 = __this->get_address_of_loopPointReached_3();
		EventHandler_t1140939921 * L_3 = V_1;
		EventHandler_t1140939921 * L_4 = ___value0;
		Delegate_t4185853630 * L_5 = Delegate_Remove_m2646842649(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		EventHandler_t1140939921 * L_6 = V_0;
		EventHandler_t1140939921 * L_7 = InterlockedCompareExchangeImpl<EventHandler_t1140939921 *>(L_2, ((EventHandler_t1140939921 *)CastclassSealed((RuntimeObject*)L_5, EventHandler_t1140939921_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_t1140939921 * L_8 = V_0;
		EventHandler_t1140939921 * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_t1140939921 *)L_8) == ((RuntimeObject*)(EventHandler_t1140939921 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Video.VideoPlayer::add_started(UnityEngine.Video.VideoPlayer/EventHandler)
extern "C"  void VideoPlayer_add_started_m4085232257 (VideoPlayer_t3941353606 * __this, EventHandler_t1140939921 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VideoPlayer_add_started_m4085232257_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_t1140939921 * V_0 = NULL;
	EventHandler_t1140939921 * V_1 = NULL;
	{
		EventHandler_t1140939921 * L_0 = __this->get_started_4();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_t1140939921 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_t1140939921 ** L_2 = __this->get_address_of_started_4();
		EventHandler_t1140939921 * L_3 = V_1;
		EventHandler_t1140939921 * L_4 = ___value0;
		Delegate_t4185853630 * L_5 = Delegate_Combine_m1894528834(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		EventHandler_t1140939921 * L_6 = V_0;
		EventHandler_t1140939921 * L_7 = InterlockedCompareExchangeImpl<EventHandler_t1140939921 *>(L_2, ((EventHandler_t1140939921 *)CastclassSealed((RuntimeObject*)L_5, EventHandler_t1140939921_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_t1140939921 * L_8 = V_0;
		EventHandler_t1140939921 * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_t1140939921 *)L_8) == ((RuntimeObject*)(EventHandler_t1140939921 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Video.VideoPlayer::remove_started(UnityEngine.Video.VideoPlayer/EventHandler)
extern "C"  void VideoPlayer_remove_started_m1553680433 (VideoPlayer_t3941353606 * __this, EventHandler_t1140939921 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VideoPlayer_remove_started_m1553680433_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_t1140939921 * V_0 = NULL;
	EventHandler_t1140939921 * V_1 = NULL;
	{
		EventHandler_t1140939921 * L_0 = __this->get_started_4();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_t1140939921 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_t1140939921 ** L_2 = __this->get_address_of_started_4();
		EventHandler_t1140939921 * L_3 = V_1;
		EventHandler_t1140939921 * L_4 = ___value0;
		Delegate_t4185853630 * L_5 = Delegate_Remove_m2646842649(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		EventHandler_t1140939921 * L_6 = V_0;
		EventHandler_t1140939921 * L_7 = InterlockedCompareExchangeImpl<EventHandler_t1140939921 *>(L_2, ((EventHandler_t1140939921 *)CastclassSealed((RuntimeObject*)L_5, EventHandler_t1140939921_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_t1140939921 * L_8 = V_0;
		EventHandler_t1140939921 * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_t1140939921 *)L_8) == ((RuntimeObject*)(EventHandler_t1140939921 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Video.VideoPlayer::add_errorReceived(UnityEngine.Video.VideoPlayer/ErrorEventHandler)
extern "C"  void VideoPlayer_add_errorReceived_m4149968752 (VideoPlayer_t3941353606 * __this, ErrorEventHandler_t1409275877 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VideoPlayer_add_errorReceived_m4149968752_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ErrorEventHandler_t1409275877 * V_0 = NULL;
	ErrorEventHandler_t1409275877 * V_1 = NULL;
	{
		ErrorEventHandler_t1409275877 * L_0 = __this->get_errorReceived_6();
		V_0 = L_0;
	}

IL_0007:
	{
		ErrorEventHandler_t1409275877 * L_1 = V_0;
		V_1 = L_1;
		ErrorEventHandler_t1409275877 ** L_2 = __this->get_address_of_errorReceived_6();
		ErrorEventHandler_t1409275877 * L_3 = V_1;
		ErrorEventHandler_t1409275877 * L_4 = ___value0;
		Delegate_t4185853630 * L_5 = Delegate_Combine_m1894528834(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		ErrorEventHandler_t1409275877 * L_6 = V_0;
		ErrorEventHandler_t1409275877 * L_7 = InterlockedCompareExchangeImpl<ErrorEventHandler_t1409275877 *>(L_2, ((ErrorEventHandler_t1409275877 *)CastclassSealed((RuntimeObject*)L_5, ErrorEventHandler_t1409275877_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		ErrorEventHandler_t1409275877 * L_8 = V_0;
		ErrorEventHandler_t1409275877 * L_9 = V_1;
		if ((!(((RuntimeObject*)(ErrorEventHandler_t1409275877 *)L_8) == ((RuntimeObject*)(ErrorEventHandler_t1409275877 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Video.VideoPlayer::remove_errorReceived(UnityEngine.Video.VideoPlayer/ErrorEventHandler)
extern "C"  void VideoPlayer_remove_errorReceived_m3895229000 (VideoPlayer_t3941353606 * __this, ErrorEventHandler_t1409275877 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VideoPlayer_remove_errorReceived_m3895229000_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ErrorEventHandler_t1409275877 * V_0 = NULL;
	ErrorEventHandler_t1409275877 * V_1 = NULL;
	{
		ErrorEventHandler_t1409275877 * L_0 = __this->get_errorReceived_6();
		V_0 = L_0;
	}

IL_0007:
	{
		ErrorEventHandler_t1409275877 * L_1 = V_0;
		V_1 = L_1;
		ErrorEventHandler_t1409275877 ** L_2 = __this->get_address_of_errorReceived_6();
		ErrorEventHandler_t1409275877 * L_3 = V_1;
		ErrorEventHandler_t1409275877 * L_4 = ___value0;
		Delegate_t4185853630 * L_5 = Delegate_Remove_m2646842649(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		ErrorEventHandler_t1409275877 * L_6 = V_0;
		ErrorEventHandler_t1409275877 * L_7 = InterlockedCompareExchangeImpl<ErrorEventHandler_t1409275877 *>(L_2, ((ErrorEventHandler_t1409275877 *)CastclassSealed((RuntimeObject*)L_5, ErrorEventHandler_t1409275877_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		ErrorEventHandler_t1409275877 * L_8 = V_0;
		ErrorEventHandler_t1409275877 * L_9 = V_1;
		if ((!(((RuntimeObject*)(ErrorEventHandler_t1409275877 *)L_8) == ((RuntimeObject*)(ErrorEventHandler_t1409275877 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Video.VideoPlayer::add_seekCompleted(UnityEngine.Video.VideoPlayer/EventHandler)
extern "C"  void VideoPlayer_add_seekCompleted_m3343379738 (VideoPlayer_t3941353606 * __this, EventHandler_t1140939921 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VideoPlayer_add_seekCompleted_m3343379738_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_t1140939921 * V_0 = NULL;
	EventHandler_t1140939921 * V_1 = NULL;
	{
		EventHandler_t1140939921 * L_0 = __this->get_seekCompleted_7();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_t1140939921 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_t1140939921 ** L_2 = __this->get_address_of_seekCompleted_7();
		EventHandler_t1140939921 * L_3 = V_1;
		EventHandler_t1140939921 * L_4 = ___value0;
		Delegate_t4185853630 * L_5 = Delegate_Combine_m1894528834(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		EventHandler_t1140939921 * L_6 = V_0;
		EventHandler_t1140939921 * L_7 = InterlockedCompareExchangeImpl<EventHandler_t1140939921 *>(L_2, ((EventHandler_t1140939921 *)CastclassSealed((RuntimeObject*)L_5, EventHandler_t1140939921_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_t1140939921 * L_8 = V_0;
		EventHandler_t1140939921 * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_t1140939921 *)L_8) == ((RuntimeObject*)(EventHandler_t1140939921 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Video.VideoPlayer::remove_seekCompleted(UnityEngine.Video.VideoPlayer/EventHandler)
extern "C"  void VideoPlayer_remove_seekCompleted_m1743846549 (VideoPlayer_t3941353606 * __this, EventHandler_t1140939921 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VideoPlayer_remove_seekCompleted_m1743846549_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_t1140939921 * V_0 = NULL;
	EventHandler_t1140939921 * V_1 = NULL;
	{
		EventHandler_t1140939921 * L_0 = __this->get_seekCompleted_7();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_t1140939921 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_t1140939921 ** L_2 = __this->get_address_of_seekCompleted_7();
		EventHandler_t1140939921 * L_3 = V_1;
		EventHandler_t1140939921 * L_4 = ___value0;
		Delegate_t4185853630 * L_5 = Delegate_Remove_m2646842649(NULL /*static, unused*/, L_3, L_4, /*hidden argument*/NULL);
		EventHandler_t1140939921 * L_6 = V_0;
		EventHandler_t1140939921 * L_7 = InterlockedCompareExchangeImpl<EventHandler_t1140939921 *>(L_2, ((EventHandler_t1140939921 *)CastclassSealed((RuntimeObject*)L_5, EventHandler_t1140939921_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_t1140939921 * L_8 = V_0;
		EventHandler_t1140939921 * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_t1140939921 *)L_8) == ((RuntimeObject*)(EventHandler_t1140939921 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.Video.VideoPlayer::InvokePrepareCompletedCallback_Internal(UnityEngine.Video.VideoPlayer)
extern "C"  void VideoPlayer_InvokePrepareCompletedCallback_Internal_m831788196 (RuntimeObject * __this /* static, unused */, VideoPlayer_t3941353606 * ___source0, const RuntimeMethod* method)
{
	{
		VideoPlayer_t3941353606 * L_0 = ___source0;
		NullCheck(L_0);
		EventHandler_t1140939921 * L_1 = L_0->get_prepareCompleted_2();
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		VideoPlayer_t3941353606 * L_2 = ___source0;
		NullCheck(L_2);
		EventHandler_t1140939921 * L_3 = L_2->get_prepareCompleted_2();
		VideoPlayer_t3941353606 * L_4 = ___source0;
		NullCheck(L_3);
		EventHandler_Invoke_m4109901533(L_3, L_4, /*hidden argument*/NULL);
	}

IL_0018:
	{
		return;
	}
}
// System.Void UnityEngine.Video.VideoPlayer::InvokeFrameReadyCallback_Internal(UnityEngine.Video.VideoPlayer,System.Int64)
extern "C"  void VideoPlayer_InvokeFrameReadyCallback_Internal_m2512671314 (RuntimeObject * __this /* static, unused */, VideoPlayer_t3941353606 * ___source0, int64_t ___frameIdx1, const RuntimeMethod* method)
{
	{
		VideoPlayer_t3941353606 * L_0 = ___source0;
		NullCheck(L_0);
		FrameReadyEventHandler_t2656609697 * L_1 = L_0->get_frameReady_9();
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		VideoPlayer_t3941353606 * L_2 = ___source0;
		NullCheck(L_2);
		FrameReadyEventHandler_t2656609697 * L_3 = L_2->get_frameReady_9();
		VideoPlayer_t3941353606 * L_4 = ___source0;
		int64_t L_5 = ___frameIdx1;
		NullCheck(L_3);
		FrameReadyEventHandler_Invoke_m1587809962(L_3, L_4, L_5, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void UnityEngine.Video.VideoPlayer::InvokeLoopPointReachedCallback_Internal(UnityEngine.Video.VideoPlayer)
extern "C"  void VideoPlayer_InvokeLoopPointReachedCallback_Internal_m686966457 (RuntimeObject * __this /* static, unused */, VideoPlayer_t3941353606 * ___source0, const RuntimeMethod* method)
{
	{
		VideoPlayer_t3941353606 * L_0 = ___source0;
		NullCheck(L_0);
		EventHandler_t1140939921 * L_1 = L_0->get_loopPointReached_3();
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		VideoPlayer_t3941353606 * L_2 = ___source0;
		NullCheck(L_2);
		EventHandler_t1140939921 * L_3 = L_2->get_loopPointReached_3();
		VideoPlayer_t3941353606 * L_4 = ___source0;
		NullCheck(L_3);
		EventHandler_Invoke_m4109901533(L_3, L_4, /*hidden argument*/NULL);
	}

IL_0018:
	{
		return;
	}
}
// System.Void UnityEngine.Video.VideoPlayer::InvokeStartedCallback_Internal(UnityEngine.Video.VideoPlayer)
extern "C"  void VideoPlayer_InvokeStartedCallback_Internal_m4184378713 (RuntimeObject * __this /* static, unused */, VideoPlayer_t3941353606 * ___source0, const RuntimeMethod* method)
{
	{
		VideoPlayer_t3941353606 * L_0 = ___source0;
		NullCheck(L_0);
		EventHandler_t1140939921 * L_1 = L_0->get_started_4();
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		VideoPlayer_t3941353606 * L_2 = ___source0;
		NullCheck(L_2);
		EventHandler_t1140939921 * L_3 = L_2->get_started_4();
		VideoPlayer_t3941353606 * L_4 = ___source0;
		NullCheck(L_3);
		EventHandler_Invoke_m4109901533(L_3, L_4, /*hidden argument*/NULL);
	}

IL_0018:
	{
		return;
	}
}
// System.Void UnityEngine.Video.VideoPlayer::InvokeFrameDroppedCallback_Internal(UnityEngine.Video.VideoPlayer)
extern "C"  void VideoPlayer_InvokeFrameDroppedCallback_Internal_m3488796993 (RuntimeObject * __this /* static, unused */, VideoPlayer_t3941353606 * ___source0, const RuntimeMethod* method)
{
	{
		VideoPlayer_t3941353606 * L_0 = ___source0;
		NullCheck(L_0);
		EventHandler_t1140939921 * L_1 = L_0->get_frameDropped_5();
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		VideoPlayer_t3941353606 * L_2 = ___source0;
		NullCheck(L_2);
		EventHandler_t1140939921 * L_3 = L_2->get_frameDropped_5();
		VideoPlayer_t3941353606 * L_4 = ___source0;
		NullCheck(L_3);
		EventHandler_Invoke_m4109901533(L_3, L_4, /*hidden argument*/NULL);
	}

IL_0018:
	{
		return;
	}
}
// System.Void UnityEngine.Video.VideoPlayer::InvokeErrorReceivedCallback_Internal(UnityEngine.Video.VideoPlayer,System.String)
extern "C"  void VideoPlayer_InvokeErrorReceivedCallback_Internal_m2832418700 (RuntimeObject * __this /* static, unused */, VideoPlayer_t3941353606 * ___source0, String_t* ___errorStr1, const RuntimeMethod* method)
{
	{
		VideoPlayer_t3941353606 * L_0 = ___source0;
		NullCheck(L_0);
		ErrorEventHandler_t1409275877 * L_1 = L_0->get_errorReceived_6();
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		VideoPlayer_t3941353606 * L_2 = ___source0;
		NullCheck(L_2);
		ErrorEventHandler_t1409275877 * L_3 = L_2->get_errorReceived_6();
		VideoPlayer_t3941353606 * L_4 = ___source0;
		String_t* L_5 = ___errorStr1;
		NullCheck(L_3);
		ErrorEventHandler_Invoke_m3185647162(L_3, L_4, L_5, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void UnityEngine.Video.VideoPlayer::InvokeSeekCompletedCallback_Internal(UnityEngine.Video.VideoPlayer)
extern "C"  void VideoPlayer_InvokeSeekCompletedCallback_Internal_m2030610356 (RuntimeObject * __this /* static, unused */, VideoPlayer_t3941353606 * ___source0, const RuntimeMethod* method)
{
	{
		VideoPlayer_t3941353606 * L_0 = ___source0;
		NullCheck(L_0);
		EventHandler_t1140939921 * L_1 = L_0->get_seekCompleted_7();
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		VideoPlayer_t3941353606 * L_2 = ___source0;
		NullCheck(L_2);
		EventHandler_t1140939921 * L_3 = L_2->get_seekCompleted_7();
		VideoPlayer_t3941353606 * L_4 = ___source0;
		NullCheck(L_3);
		EventHandler_Invoke_m4109901533(L_3, L_4, /*hidden argument*/NULL);
	}

IL_0018:
	{
		return;
	}
}
// System.Void UnityEngine.Video.VideoPlayer::InvokeClockResyncOccurredCallback_Internal(UnityEngine.Video.VideoPlayer,System.Double)
extern "C"  void VideoPlayer_InvokeClockResyncOccurredCallback_Internal_m975821504 (RuntimeObject * __this /* static, unused */, VideoPlayer_t3941353606 * ___source0, double ___seconds1, const RuntimeMethod* method)
{
	{
		VideoPlayer_t3941353606 * L_0 = ___source0;
		NullCheck(L_0);
		TimeEventHandler_t204976650 * L_1 = L_0->get_clockResyncOccurred_8();
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		VideoPlayer_t3941353606 * L_2 = ___source0;
		NullCheck(L_2);
		TimeEventHandler_t204976650 * L_3 = L_2->get_clockResyncOccurred_8();
		VideoPlayer_t3941353606 * L_4 = ___source0;
		double L_5 = ___seconds1;
		NullCheck(L_3);
		TimeEventHandler_Invoke_m2328036903(L_3, L_4, L_5, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void UnityEngine.Video.VideoPlayer/ErrorEventHandler::.ctor(System.Object,System.IntPtr)
extern "C"  void ErrorEventHandler__ctor_m2347631204 (ErrorEventHandler_t1409275877 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Video.VideoPlayer/ErrorEventHandler::Invoke(UnityEngine.Video.VideoPlayer,System.String)
extern "C"  void ErrorEventHandler_Invoke_m3185647162 (ErrorEventHandler_t1409275877 * __this, VideoPlayer_t3941353606 * ___source0, String_t* ___message1, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		ErrorEventHandler_Invoke_m3185647162((ErrorEventHandler_t1409275877 *)__this->get_prev_9(),___source0, ___message1, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((RuntimeMethod*)(__this->get_method_3()));
	bool ___methodIsStatic = MethodIsStatic((RuntimeMethod*)(__this->get_method_3()));
	if (__this->get_m_target_2() != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (RuntimeObject *, void* __this, VideoPlayer_t3941353606 * ___source0, String_t* ___message1, const RuntimeMethod* method);
		((FunctionPointerType)__this->get_method_ptr_0())(NULL,__this->get_m_target_2(),___source0, ___message1,(RuntimeMethod*)(__this->get_method_3()));
	}
	else if (__this->get_m_target_2() != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (void* __this, VideoPlayer_t3941353606 * ___source0, String_t* ___message1, const RuntimeMethod* method);
		((FunctionPointerType)__this->get_method_ptr_0())(__this->get_m_target_2(),___source0, ___message1,(RuntimeMethod*)(__this->get_method_3()));
	}
	else
	{
		typedef void (*FunctionPointerType) (void* __this, String_t* ___message1, const RuntimeMethod* method);
		((FunctionPointerType)__this->get_method_ptr_0())(___source0, ___message1,(RuntimeMethod*)(__this->get_method_3()));
	}
}
// System.IAsyncResult UnityEngine.Video.VideoPlayer/ErrorEventHandler::BeginInvoke(UnityEngine.Video.VideoPlayer,System.String,System.AsyncCallback,System.Object)
extern "C"  RuntimeObject* ErrorEventHandler_BeginInvoke_m3342153913 (ErrorEventHandler_t1409275877 * __this, VideoPlayer_t3941353606 * ___source0, String_t* ___message1, AsyncCallback_t1562013078 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___source0;
	__d_args[1] = ___message1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void UnityEngine.Video.VideoPlayer/ErrorEventHandler::EndInvoke(System.IAsyncResult)
extern "C"  void ErrorEventHandler_EndInvoke_m1388367788 (ErrorEventHandler_t1409275877 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
// System.Void UnityEngine.Video.VideoPlayer/EventHandler::.ctor(System.Object,System.IntPtr)
extern "C"  void EventHandler__ctor_m2637747336 (EventHandler_t1140939921 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Video.VideoPlayer/EventHandler::Invoke(UnityEngine.Video.VideoPlayer)
extern "C"  void EventHandler_Invoke_m4109901533 (EventHandler_t1140939921 * __this, VideoPlayer_t3941353606 * ___source0, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		EventHandler_Invoke_m4109901533((EventHandler_t1140939921 *)__this->get_prev_9(),___source0, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((RuntimeMethod*)(__this->get_method_3()));
	bool ___methodIsStatic = MethodIsStatic((RuntimeMethod*)(__this->get_method_3()));
	if (__this->get_m_target_2() != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (RuntimeObject *, void* __this, VideoPlayer_t3941353606 * ___source0, const RuntimeMethod* method);
		((FunctionPointerType)__this->get_method_ptr_0())(NULL,__this->get_m_target_2(),___source0,(RuntimeMethod*)(__this->get_method_3()));
	}
	else if (__this->get_m_target_2() != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (void* __this, VideoPlayer_t3941353606 * ___source0, const RuntimeMethod* method);
		((FunctionPointerType)__this->get_method_ptr_0())(__this->get_m_target_2(),___source0,(RuntimeMethod*)(__this->get_method_3()));
	}
	else
	{
		typedef void (*FunctionPointerType) (void* __this, const RuntimeMethod* method);
		((FunctionPointerType)__this->get_method_ptr_0())(___source0,(RuntimeMethod*)(__this->get_method_3()));
	}
}
// System.IAsyncResult UnityEngine.Video.VideoPlayer/EventHandler::BeginInvoke(UnityEngine.Video.VideoPlayer,System.AsyncCallback,System.Object)
extern "C"  RuntimeObject* EventHandler_BeginInvoke_m3264574812 (EventHandler_t1140939921 * __this, VideoPlayer_t3941353606 * ___source0, AsyncCallback_t1562013078 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___source0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void UnityEngine.Video.VideoPlayer/EventHandler::EndInvoke(System.IAsyncResult)
extern "C"  void EventHandler_EndInvoke_m3144265545 (EventHandler_t1140939921 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
// System.Void UnityEngine.Video.VideoPlayer/FrameReadyEventHandler::.ctor(System.Object,System.IntPtr)
extern "C"  void FrameReadyEventHandler__ctor_m404853872 (FrameReadyEventHandler_t2656609697 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Video.VideoPlayer/FrameReadyEventHandler::Invoke(UnityEngine.Video.VideoPlayer,System.Int64)
extern "C"  void FrameReadyEventHandler_Invoke_m1587809962 (FrameReadyEventHandler_t2656609697 * __this, VideoPlayer_t3941353606 * ___source0, int64_t ___frameIdx1, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		FrameReadyEventHandler_Invoke_m1587809962((FrameReadyEventHandler_t2656609697 *)__this->get_prev_9(),___source0, ___frameIdx1, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((RuntimeMethod*)(__this->get_method_3()));
	bool ___methodIsStatic = MethodIsStatic((RuntimeMethod*)(__this->get_method_3()));
	if (__this->get_m_target_2() != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (RuntimeObject *, void* __this, VideoPlayer_t3941353606 * ___source0, int64_t ___frameIdx1, const RuntimeMethod* method);
		((FunctionPointerType)__this->get_method_ptr_0())(NULL,__this->get_m_target_2(),___source0, ___frameIdx1,(RuntimeMethod*)(__this->get_method_3()));
	}
	else if (__this->get_m_target_2() != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (void* __this, VideoPlayer_t3941353606 * ___source0, int64_t ___frameIdx1, const RuntimeMethod* method);
		((FunctionPointerType)__this->get_method_ptr_0())(__this->get_m_target_2(),___source0, ___frameIdx1,(RuntimeMethod*)(__this->get_method_3()));
	}
	else
	{
		typedef void (*FunctionPointerType) (void* __this, int64_t ___frameIdx1, const RuntimeMethod* method);
		((FunctionPointerType)__this->get_method_ptr_0())(___source0, ___frameIdx1,(RuntimeMethod*)(__this->get_method_3()));
	}
}
// System.IAsyncResult UnityEngine.Video.VideoPlayer/FrameReadyEventHandler::BeginInvoke(UnityEngine.Video.VideoPlayer,System.Int64,System.AsyncCallback,System.Object)
extern "C"  RuntimeObject* FrameReadyEventHandler_BeginInvoke_m4105202595 (FrameReadyEventHandler_t2656609697 * __this, VideoPlayer_t3941353606 * ___source0, int64_t ___frameIdx1, AsyncCallback_t1562013078 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FrameReadyEventHandler_BeginInvoke_m4105202595_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = ___source0;
	__d_args[1] = Box(Int64_t4204515573_il2cpp_TypeInfo_var, &___frameIdx1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void UnityEngine.Video.VideoPlayer/FrameReadyEventHandler::EndInvoke(System.IAsyncResult)
extern "C"  void FrameReadyEventHandler_EndInvoke_m216245885 (FrameReadyEventHandler_t2656609697 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
// System.Void UnityEngine.Video.VideoPlayer/TimeEventHandler::.ctor(System.Object,System.IntPtr)
extern "C"  void TimeEventHandler__ctor_m3504282691 (TimeEventHandler_t204976650 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.Video.VideoPlayer/TimeEventHandler::Invoke(UnityEngine.Video.VideoPlayer,System.Double)
extern "C"  void TimeEventHandler_Invoke_m2328036903 (TimeEventHandler_t204976650 * __this, VideoPlayer_t3941353606 * ___source0, double ___seconds1, const RuntimeMethod* method)
{
	if(__this->get_prev_9() != NULL)
	{
		TimeEventHandler_Invoke_m2328036903((TimeEventHandler_t204976650 *)__this->get_prev_9(),___source0, ___seconds1, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((RuntimeMethod*)(__this->get_method_3()));
	bool ___methodIsStatic = MethodIsStatic((RuntimeMethod*)(__this->get_method_3()));
	if (__this->get_m_target_2() != NULL && ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (RuntimeObject *, void* __this, VideoPlayer_t3941353606 * ___source0, double ___seconds1, const RuntimeMethod* method);
		((FunctionPointerType)__this->get_method_ptr_0())(NULL,__this->get_m_target_2(),___source0, ___seconds1,(RuntimeMethod*)(__this->get_method_3()));
	}
	else if (__this->get_m_target_2() != NULL || ___methodIsStatic)
	{
		typedef void (*FunctionPointerType) (void* __this, VideoPlayer_t3941353606 * ___source0, double ___seconds1, const RuntimeMethod* method);
		((FunctionPointerType)__this->get_method_ptr_0())(__this->get_m_target_2(),___source0, ___seconds1,(RuntimeMethod*)(__this->get_method_3()));
	}
	else
	{
		typedef void (*FunctionPointerType) (void* __this, double ___seconds1, const RuntimeMethod* method);
		((FunctionPointerType)__this->get_method_ptr_0())(___source0, ___seconds1,(RuntimeMethod*)(__this->get_method_3()));
	}
}
// System.IAsyncResult UnityEngine.Video.VideoPlayer/TimeEventHandler::BeginInvoke(UnityEngine.Video.VideoPlayer,System.Double,System.AsyncCallback,System.Object)
extern "C"  RuntimeObject* TimeEventHandler_BeginInvoke_m749083081 (TimeEventHandler_t204976650 * __this, VideoPlayer_t3941353606 * ___source0, double ___seconds1, AsyncCallback_t1562013078 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TimeEventHandler_BeginInvoke_m749083081_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = ___source0;
	__d_args[1] = Box(Double_t3688195453_il2cpp_TypeInfo_var, &___seconds1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void UnityEngine.Video.VideoPlayer/TimeEventHandler::EndInvoke(System.IAsyncResult)
extern "C"  void TimeEventHandler_EndInvoke_m979135929 (TimeEventHandler_t204976650 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
