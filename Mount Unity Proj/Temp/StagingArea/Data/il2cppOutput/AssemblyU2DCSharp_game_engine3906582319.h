#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_t9039225;
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

// game_engine
struct  game_engine_t3906582319  : public MonoBehaviour_t667441552
{
public:
	// System.Int32 game_engine::likes
	int32_t ___likes_2;
	// System.Int32 game_engine::posts
	int32_t ___posts_3;
	// System.Int32 game_engine::timer
	int32_t ___timer_4;
	// System.String game_engine::userName
	String_t* ___userName_5;
	// UnityEngine.UI.Text game_engine::likeText
	Text_t9039225 * ___likeText_6;
	// UnityEngine.UI.Text game_engine::postText
	Text_t9039225 * ___postText_7;
	// cubicleGeneration game_engine::CubicleGeneration
	cubicleGeneration_t372503483 * ___CubicleGeneration_8;
	// objectDictionary game_engine::ObjectGeneration
	objectDictionary_t3599772981 * ___ObjectGeneration_9;

public:
	inline static int32_t get_offset_of_likes_2() { return static_cast<int32_t>(offsetof(game_engine_t3906582319, ___likes_2)); }
	inline int32_t get_likes_2() const { return ___likes_2; }
	inline int32_t* get_address_of_likes_2() { return &___likes_2; }
	inline void set_likes_2(int32_t value)
	{
		___likes_2 = value;
	}

	inline static int32_t get_offset_of_posts_3() { return static_cast<int32_t>(offsetof(game_engine_t3906582319, ___posts_3)); }
	inline int32_t get_posts_3() const { return ___posts_3; }
	inline int32_t* get_address_of_posts_3() { return &___posts_3; }
	inline void set_posts_3(int32_t value)
	{
		___posts_3 = value;
	}

	inline static int32_t get_offset_of_timer_4() { return static_cast<int32_t>(offsetof(game_engine_t3906582319, ___timer_4)); }
	inline int32_t get_timer_4() const { return ___timer_4; }
	inline int32_t* get_address_of_timer_4() { return &___timer_4; }
	inline void set_timer_4(int32_t value)
	{
		___timer_4 = value;
	}

	inline static int32_t get_offset_of_userName_5() { return static_cast<int32_t>(offsetof(game_engine_t3906582319, ___userName_5)); }
	inline String_t* get_userName_5() const { return ___userName_5; }
	inline String_t** get_address_of_userName_5() { return &___userName_5; }
	inline void set_userName_5(String_t* value)
	{
		___userName_5 = value;
		Il2CppCodeGenWriteBarrier(&___userName_5, value);
	}

	inline static int32_t get_offset_of_likeText_6() { return static_cast<int32_t>(offsetof(game_engine_t3906582319, ___likeText_6)); }
	inline Text_t9039225 * get_likeText_6() const { return ___likeText_6; }
	inline Text_t9039225 ** get_address_of_likeText_6() { return &___likeText_6; }
	inline void set_likeText_6(Text_t9039225 * value)
	{
		___likeText_6 = value;
		Il2CppCodeGenWriteBarrier(&___likeText_6, value);
	}

	inline static int32_t get_offset_of_postText_7() { return static_cast<int32_t>(offsetof(game_engine_t3906582319, ___postText_7)); }
	inline Text_t9039225 * get_postText_7() const { return ___postText_7; }
	inline Text_t9039225 ** get_address_of_postText_7() { return &___postText_7; }
	inline void set_postText_7(Text_t9039225 * value)
	{
		___postText_7 = value;
		Il2CppCodeGenWriteBarrier(&___postText_7, value);
	}

	inline static int32_t get_offset_of_CubicleGeneration_8() { return static_cast<int32_t>(offsetof(game_engine_t3906582319, ___CubicleGeneration_8)); }
	inline cubicleGeneration_t372503483 * get_CubicleGeneration_8() const { return ___CubicleGeneration_8; }
	inline cubicleGeneration_t372503483 ** get_address_of_CubicleGeneration_8() { return &___CubicleGeneration_8; }
	inline void set_CubicleGeneration_8(cubicleGeneration_t372503483 * value)
	{
		___CubicleGeneration_8 = value;
		Il2CppCodeGenWriteBarrier(&___CubicleGeneration_8, value);
	}

	inline static int32_t get_offset_of_ObjectGeneration_9() { return static_cast<int32_t>(offsetof(game_engine_t3906582319, ___ObjectGeneration_9)); }
	inline objectDictionary_t3599772981 * get_ObjectGeneration_9() const { return ___ObjectGeneration_9; }
	inline objectDictionary_t3599772981 ** get_address_of_ObjectGeneration_9() { return &___ObjectGeneration_9; }
	inline void set_ObjectGeneration_9(objectDictionary_t3599772981 * value)
	{
		___ObjectGeneration_9 = value;
		Il2CppCodeGenWriteBarrier(&___ObjectGeneration_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
