#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Text
struct Text_t9039225;

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
	// UnityEngine.UI.Text game_engine::likeText
	Text_t9039225 * ___likeText_5;
	// UnityEngine.UI.Text game_engine::postText
	Text_t9039225 * ___postText_6;

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

	inline static int32_t get_offset_of_likeText_5() { return static_cast<int32_t>(offsetof(game_engine_t3906582319, ___likeText_5)); }
	inline Text_t9039225 * get_likeText_5() const { return ___likeText_5; }
	inline Text_t9039225 ** get_address_of_likeText_5() { return &___likeText_5; }
	inline void set_likeText_5(Text_t9039225 * value)
	{
		___likeText_5 = value;
		Il2CppCodeGenWriteBarrier(&___likeText_5, value);
	}

	inline static int32_t get_offset_of_postText_6() { return static_cast<int32_t>(offsetof(game_engine_t3906582319, ___postText_6)); }
	inline Text_t9039225 * get_postText_6() const { return ___postText_6; }
	inline Text_t9039225 ** get_address_of_postText_6() { return &___postText_6; }
	inline void set_postText_6(Text_t9039225 * value)
	{
		___postText_6 = value;
		Il2CppCodeGenWriteBarrier(&___postText_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
