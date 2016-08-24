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
// game_engine
struct game_engine_t3906582319;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// phpComm
struct  phpComm_t3699136676  : public MonoBehaviour_t667441552
{
public:
	// System.String phpComm::secretKey
	String_t* ___secretKey_2;
	// System.String phpComm::addScoreURL
	String_t* ___addScoreURL_3;
	// System.String phpComm::highscoreURL
	String_t* ___highscoreURL_4;
	// game_engine phpComm::GameEngine
	game_engine_t3906582319 * ___GameEngine_5;
	// System.String phpComm::userName
	String_t* ___userName_6;
	// System.Int32 phpComm::likes
	int32_t ___likes_7;

public:
	inline static int32_t get_offset_of_secretKey_2() { return static_cast<int32_t>(offsetof(phpComm_t3699136676, ___secretKey_2)); }
	inline String_t* get_secretKey_2() const { return ___secretKey_2; }
	inline String_t** get_address_of_secretKey_2() { return &___secretKey_2; }
	inline void set_secretKey_2(String_t* value)
	{
		___secretKey_2 = value;
		Il2CppCodeGenWriteBarrier(&___secretKey_2, value);
	}

	inline static int32_t get_offset_of_addScoreURL_3() { return static_cast<int32_t>(offsetof(phpComm_t3699136676, ___addScoreURL_3)); }
	inline String_t* get_addScoreURL_3() const { return ___addScoreURL_3; }
	inline String_t** get_address_of_addScoreURL_3() { return &___addScoreURL_3; }
	inline void set_addScoreURL_3(String_t* value)
	{
		___addScoreURL_3 = value;
		Il2CppCodeGenWriteBarrier(&___addScoreURL_3, value);
	}

	inline static int32_t get_offset_of_highscoreURL_4() { return static_cast<int32_t>(offsetof(phpComm_t3699136676, ___highscoreURL_4)); }
	inline String_t* get_highscoreURL_4() const { return ___highscoreURL_4; }
	inline String_t** get_address_of_highscoreURL_4() { return &___highscoreURL_4; }
	inline void set_highscoreURL_4(String_t* value)
	{
		___highscoreURL_4 = value;
		Il2CppCodeGenWriteBarrier(&___highscoreURL_4, value);
	}

	inline static int32_t get_offset_of_GameEngine_5() { return static_cast<int32_t>(offsetof(phpComm_t3699136676, ___GameEngine_5)); }
	inline game_engine_t3906582319 * get_GameEngine_5() const { return ___GameEngine_5; }
	inline game_engine_t3906582319 ** get_address_of_GameEngine_5() { return &___GameEngine_5; }
	inline void set_GameEngine_5(game_engine_t3906582319 * value)
	{
		___GameEngine_5 = value;
		Il2CppCodeGenWriteBarrier(&___GameEngine_5, value);
	}

	inline static int32_t get_offset_of_userName_6() { return static_cast<int32_t>(offsetof(phpComm_t3699136676, ___userName_6)); }
	inline String_t* get_userName_6() const { return ___userName_6; }
	inline String_t** get_address_of_userName_6() { return &___userName_6; }
	inline void set_userName_6(String_t* value)
	{
		___userName_6 = value;
		Il2CppCodeGenWriteBarrier(&___userName_6, value);
	}

	inline static int32_t get_offset_of_likes_7() { return static_cast<int32_t>(offsetof(phpComm_t3699136676, ___likes_7)); }
	inline int32_t get_likes_7() const { return ___likes_7; }
	inline int32_t* get_address_of_likes_7() { return &___likes_7; }
	inline void set_likes_7(int32_t value)
	{
		___likes_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
