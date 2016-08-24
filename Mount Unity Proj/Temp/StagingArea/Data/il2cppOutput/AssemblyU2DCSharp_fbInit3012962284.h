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
// cubicleGeneration
struct cubicleGeneration_t372503483;
// objectDictionary
struct objectDictionary_t3599772981;

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
	// System.Collections.Generic.Dictionary`2<System.String,System.Object> fbInit::FBName
	Dictionary_2_t696267445 * ___FBName_5;
	// System.String fbInit::fbID
	String_t* ___fbID_6;
	// System.Int32 fbInit::likeCount
	int32_t ___likeCount_7;
	// System.Int32 fbInit::postCount
	int32_t ___postCount_8;
	// System.Int32 fbInit::postNumber
	int32_t ___postNumber_9;
	// game_engine fbInit::GameEngine
	game_engine_t3906582319 * ___GameEngine_10;
	// cubicleGeneration fbInit::CubicleGeneration
	cubicleGeneration_t372503483 * ___CubicleGeneration_11;
	// objectDictionary fbInit::ObjectGeneration
	objectDictionary_t3599772981 * ___ObjectGeneration_12;
	// System.Boolean fbInit::start
	bool ___start_13;
	// System.String fbInit::get_data
	String_t* ___get_data_14;
	// System.String fbInit::userName
	String_t* ___userName_15;

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

	inline static int32_t get_offset_of_FBName_5() { return static_cast<int32_t>(offsetof(fbInit_t3012962284, ___FBName_5)); }
	inline Dictionary_2_t696267445 * get_FBName_5() const { return ___FBName_5; }
	inline Dictionary_2_t696267445 ** get_address_of_FBName_5() { return &___FBName_5; }
	inline void set_FBName_5(Dictionary_2_t696267445 * value)
	{
		___FBName_5 = value;
		Il2CppCodeGenWriteBarrier(&___FBName_5, value);
	}

	inline static int32_t get_offset_of_fbID_6() { return static_cast<int32_t>(offsetof(fbInit_t3012962284, ___fbID_6)); }
	inline String_t* get_fbID_6() const { return ___fbID_6; }
	inline String_t** get_address_of_fbID_6() { return &___fbID_6; }
	inline void set_fbID_6(String_t* value)
	{
		___fbID_6 = value;
		Il2CppCodeGenWriteBarrier(&___fbID_6, value);
	}

	inline static int32_t get_offset_of_likeCount_7() { return static_cast<int32_t>(offsetof(fbInit_t3012962284, ___likeCount_7)); }
	inline int32_t get_likeCount_7() const { return ___likeCount_7; }
	inline int32_t* get_address_of_likeCount_7() { return &___likeCount_7; }
	inline void set_likeCount_7(int32_t value)
	{
		___likeCount_7 = value;
	}

	inline static int32_t get_offset_of_postCount_8() { return static_cast<int32_t>(offsetof(fbInit_t3012962284, ___postCount_8)); }
	inline int32_t get_postCount_8() const { return ___postCount_8; }
	inline int32_t* get_address_of_postCount_8() { return &___postCount_8; }
	inline void set_postCount_8(int32_t value)
	{
		___postCount_8 = value;
	}

	inline static int32_t get_offset_of_postNumber_9() { return static_cast<int32_t>(offsetof(fbInit_t3012962284, ___postNumber_9)); }
	inline int32_t get_postNumber_9() const { return ___postNumber_9; }
	inline int32_t* get_address_of_postNumber_9() { return &___postNumber_9; }
	inline void set_postNumber_9(int32_t value)
	{
		___postNumber_9 = value;
	}

	inline static int32_t get_offset_of_GameEngine_10() { return static_cast<int32_t>(offsetof(fbInit_t3012962284, ___GameEngine_10)); }
	inline game_engine_t3906582319 * get_GameEngine_10() const { return ___GameEngine_10; }
	inline game_engine_t3906582319 ** get_address_of_GameEngine_10() { return &___GameEngine_10; }
	inline void set_GameEngine_10(game_engine_t3906582319 * value)
	{
		___GameEngine_10 = value;
		Il2CppCodeGenWriteBarrier(&___GameEngine_10, value);
	}

	inline static int32_t get_offset_of_CubicleGeneration_11() { return static_cast<int32_t>(offsetof(fbInit_t3012962284, ___CubicleGeneration_11)); }
	inline cubicleGeneration_t372503483 * get_CubicleGeneration_11() const { return ___CubicleGeneration_11; }
	inline cubicleGeneration_t372503483 ** get_address_of_CubicleGeneration_11() { return &___CubicleGeneration_11; }
	inline void set_CubicleGeneration_11(cubicleGeneration_t372503483 * value)
	{
		___CubicleGeneration_11 = value;
		Il2CppCodeGenWriteBarrier(&___CubicleGeneration_11, value);
	}

	inline static int32_t get_offset_of_ObjectGeneration_12() { return static_cast<int32_t>(offsetof(fbInit_t3012962284, ___ObjectGeneration_12)); }
	inline objectDictionary_t3599772981 * get_ObjectGeneration_12() const { return ___ObjectGeneration_12; }
	inline objectDictionary_t3599772981 ** get_address_of_ObjectGeneration_12() { return &___ObjectGeneration_12; }
	inline void set_ObjectGeneration_12(objectDictionary_t3599772981 * value)
	{
		___ObjectGeneration_12 = value;
		Il2CppCodeGenWriteBarrier(&___ObjectGeneration_12, value);
	}

	inline static int32_t get_offset_of_start_13() { return static_cast<int32_t>(offsetof(fbInit_t3012962284, ___start_13)); }
	inline bool get_start_13() const { return ___start_13; }
	inline bool* get_address_of_start_13() { return &___start_13; }
	inline void set_start_13(bool value)
	{
		___start_13 = value;
	}

	inline static int32_t get_offset_of_get_data_14() { return static_cast<int32_t>(offsetof(fbInit_t3012962284, ___get_data_14)); }
	inline String_t* get_get_data_14() const { return ___get_data_14; }
	inline String_t** get_address_of_get_data_14() { return &___get_data_14; }
	inline void set_get_data_14(String_t* value)
	{
		___get_data_14 = value;
		Il2CppCodeGenWriteBarrier(&___get_data_14, value);
	}

	inline static int32_t get_offset_of_userName_15() { return static_cast<int32_t>(offsetof(fbInit_t3012962284, ___userName_15)); }
	inline String_t* get_userName_15() const { return ___userName_15; }
	inline String_t** get_address_of_userName_15() { return &___userName_15; }
	inline void set_userName_15(String_t* value)
	{
		___userName_15 = value;
		Il2CppCodeGenWriteBarrier(&___userName_15, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
