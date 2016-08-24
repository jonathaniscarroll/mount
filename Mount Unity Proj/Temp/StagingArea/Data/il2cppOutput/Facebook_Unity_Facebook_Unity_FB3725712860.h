﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// Facebook.Unity.IFacebook
struct IFacebook_t3463528877;
// Facebook.Unity.FB/OnDLLLoaded
struct OnDLLLoaded_t970356664;

#include "UnityEngine_UnityEngine_ScriptableObject2970544072.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Facebook.Unity.FB
struct  FB_t3725712860  : public ScriptableObject_t2970544072
{
public:

public:
};

struct FB_t3725712860_StaticFields
{
public:
	// Facebook.Unity.IFacebook Facebook.Unity.FB::facebook
	Il2CppObject * ___facebook_3;
	// System.Boolean Facebook.Unity.FB::isInitCalled
	bool ___isInitCalled_4;
	// System.String Facebook.Unity.FB::facebookDomain
	String_t* ___facebookDomain_5;
	// System.String Facebook.Unity.FB::graphApiVersion
	String_t* ___graphApiVersion_6;
	// System.String Facebook.Unity.FB::<AppId>k__BackingField
	String_t* ___U3CAppIdU3Ek__BackingField_7;
	// Facebook.Unity.FB/OnDLLLoaded Facebook.Unity.FB::<OnDLLLoadedDelegate>k__BackingField
	OnDLLLoaded_t970356664 * ___U3COnDLLLoadedDelegateU3Ek__BackingField_8;

public:
	inline static int32_t get_offset_of_facebook_3() { return static_cast<int32_t>(offsetof(FB_t3725712860_StaticFields, ___facebook_3)); }
	inline Il2CppObject * get_facebook_3() const { return ___facebook_3; }
	inline Il2CppObject ** get_address_of_facebook_3() { return &___facebook_3; }
	inline void set_facebook_3(Il2CppObject * value)
	{
		___facebook_3 = value;
		Il2CppCodeGenWriteBarrier(&___facebook_3, value);
	}

	inline static int32_t get_offset_of_isInitCalled_4() { return static_cast<int32_t>(offsetof(FB_t3725712860_StaticFields, ___isInitCalled_4)); }
	inline bool get_isInitCalled_4() const { return ___isInitCalled_4; }
	inline bool* get_address_of_isInitCalled_4() { return &___isInitCalled_4; }
	inline void set_isInitCalled_4(bool value)
	{
		___isInitCalled_4 = value;
	}

	inline static int32_t get_offset_of_facebookDomain_5() { return static_cast<int32_t>(offsetof(FB_t3725712860_StaticFields, ___facebookDomain_5)); }
	inline String_t* get_facebookDomain_5() const { return ___facebookDomain_5; }
	inline String_t** get_address_of_facebookDomain_5() { return &___facebookDomain_5; }
	inline void set_facebookDomain_5(String_t* value)
	{
		___facebookDomain_5 = value;
		Il2CppCodeGenWriteBarrier(&___facebookDomain_5, value);
	}

	inline static int32_t get_offset_of_graphApiVersion_6() { return static_cast<int32_t>(offsetof(FB_t3725712860_StaticFields, ___graphApiVersion_6)); }
	inline String_t* get_graphApiVersion_6() const { return ___graphApiVersion_6; }
	inline String_t** get_address_of_graphApiVersion_6() { return &___graphApiVersion_6; }
	inline void set_graphApiVersion_6(String_t* value)
	{
		___graphApiVersion_6 = value;
		Il2CppCodeGenWriteBarrier(&___graphApiVersion_6, value);
	}

	inline static int32_t get_offset_of_U3CAppIdU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(FB_t3725712860_StaticFields, ___U3CAppIdU3Ek__BackingField_7)); }
	inline String_t* get_U3CAppIdU3Ek__BackingField_7() const { return ___U3CAppIdU3Ek__BackingField_7; }
	inline String_t** get_address_of_U3CAppIdU3Ek__BackingField_7() { return &___U3CAppIdU3Ek__BackingField_7; }
	inline void set_U3CAppIdU3Ek__BackingField_7(String_t* value)
	{
		___U3CAppIdU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier(&___U3CAppIdU3Ek__BackingField_7, value);
	}

	inline static int32_t get_offset_of_U3COnDLLLoadedDelegateU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(FB_t3725712860_StaticFields, ___U3COnDLLLoadedDelegateU3Ek__BackingField_8)); }
	inline OnDLLLoaded_t970356664 * get_U3COnDLLLoadedDelegateU3Ek__BackingField_8() const { return ___U3COnDLLLoadedDelegateU3Ek__BackingField_8; }
	inline OnDLLLoaded_t970356664 ** get_address_of_U3COnDLLLoadedDelegateU3Ek__BackingField_8() { return &___U3COnDLLLoadedDelegateU3Ek__BackingField_8; }
	inline void set_U3COnDLLLoadedDelegateU3Ek__BackingField_8(OnDLLLoaded_t970356664 * value)
	{
		___U3COnDLLLoadedDelegateU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier(&___U3COnDLLLoadedDelegateU3Ek__BackingField_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
