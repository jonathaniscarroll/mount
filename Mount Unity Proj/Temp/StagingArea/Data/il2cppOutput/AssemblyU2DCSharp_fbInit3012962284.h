#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<System.String>
struct List_1_t1375417109;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t696267445;
// System.String
struct String_t;
// game_engine
struct game_engine_t3906582319;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// fbInit
struct  fbInit_t3012962284  : public MonoBehaviour_t667441552
{
public:
	// System.Collections.Generic.List`1<System.String> fbInit::perm
	List_1_t1375417109 * ___perm_2;
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> fbInit::FBUserDetails
	Dictionary_2_t696267445 * ___FBUserDetails_3;
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> fbInit::PostDetails
	Dictionary_2_t696267445 * ___PostDetails_4;
	// System.String fbInit::fbID
	String_t* ___fbID_5;
	// System.Int32 fbInit::likeCount
	int32_t ___likeCount_6;
	// System.Int32 fbInit::postCount
	int32_t ___postCount_7;
	// game_engine fbInit::GameEngine
	game_engine_t3906582319 * ___GameEngine_8;

public:
	inline static int32_t get_offset_of_perm_2() { return static_cast<int32_t>(offsetof(fbInit_t3012962284, ___perm_2)); }
	inline List_1_t1375417109 * get_perm_2() const { return ___perm_2; }
	inline List_1_t1375417109 ** get_address_of_perm_2() { return &___perm_2; }
	inline void set_perm_2(List_1_t1375417109 * value)
	{
		___perm_2 = value;
		Il2CppCodeGenWriteBarrier(&___perm_2, value);
	}

	inline static int32_t get_offset_of_FBUserDetails_3() { return static_cast<int32_t>(offsetof(fbInit_t3012962284, ___FBUserDetails_3)); }
	inline Dictionary_2_t696267445 * get_FBUserDetails_3() const { return ___FBUserDetails_3; }
	inline Dictionary_2_t696267445 ** get_address_of_FBUserDetails_3() { return &___FBUserDetails_3; }
	inline void set_FBUserDetails_3(Dictionary_2_t696267445 * value)
	{
		___FBUserDetails_3 = value;
		Il2CppCodeGenWriteBarrier(&___FBUserDetails_3, value);
	}

	inline static int32_t get_offset_of_PostDetails_4() { return static_cast<int32_t>(offsetof(fbInit_t3012962284, ___PostDetails_4)); }
	inline Dictionary_2_t696267445 * get_PostDetails_4() const { return ___PostDetails_4; }
	inline Dictionary_2_t696267445 ** get_address_of_PostDetails_4() { return &___PostDetails_4; }
	inline void set_PostDetails_4(Dictionary_2_t696267445 * value)
	{
		___PostDetails_4 = value;
		Il2CppCodeGenWriteBarrier(&___PostDetails_4, value);
	}

	inline static int32_t get_offset_of_fbID_5() { return static_cast<int32_t>(offsetof(fbInit_t3012962284, ___fbID_5)); }
	inline String_t* get_fbID_5() const { return ___fbID_5; }
	inline String_t** get_address_of_fbID_5() { return &___fbID_5; }
	inline void set_fbID_5(String_t* value)
	{
		___fbID_5 = value;
		Il2CppCodeGenWriteBarrier(&___fbID_5, value);
	}

	inline static int32_t get_offset_of_likeCount_6() { return static_cast<int32_t>(offsetof(fbInit_t3012962284, ___likeCount_6)); }
	inline int32_t get_likeCount_6() const { return ___likeCount_6; }
	inline int32_t* get_address_of_likeCount_6() { return &___likeCount_6; }
	inline void set_likeCount_6(int32_t value)
	{
		___likeCount_6 = value;
	}

	inline static int32_t get_offset_of_postCount_7() { return static_cast<int32_t>(offsetof(fbInit_t3012962284, ___postCount_7)); }
	inline int32_t get_postCount_7() const { return ___postCount_7; }
	inline int32_t* get_address_of_postCount_7() { return &___postCount_7; }
	inline void set_postCount_7(int32_t value)
	{
		___postCount_7 = value;
	}

	inline static int32_t get_offset_of_GameEngine_8() { return static_cast<int32_t>(offsetof(fbInit_t3012962284, ___GameEngine_8)); }
	inline game_engine_t3906582319 * get_GameEngine_8() const { return ___GameEngine_8; }
	inline game_engine_t3906582319 ** get_address_of_GameEngine_8() { return &___GameEngine_8; }
	inline void set_GameEngine_8(game_engine_t3906582319 * value)
	{
		___GameEngine_8 = value;
		Il2CppCodeGenWriteBarrier(&___GameEngine_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
