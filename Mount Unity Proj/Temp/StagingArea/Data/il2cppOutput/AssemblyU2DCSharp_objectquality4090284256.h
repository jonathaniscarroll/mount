#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t3674682005;
// game_engine
struct game_engine_t3906582319;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// objectquality
struct  objectquality_t4090284256  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.GameObject objectquality::poorItem
	GameObject_t3674682005 * ___poorItem_2;
	// UnityEngine.GameObject objectquality::goodItem
	GameObject_t3674682005 * ___goodItem_3;
	// UnityEngine.GameObject objectquality::currentItem
	GameObject_t3674682005 * ___currentItem_4;
	// System.Single objectquality::roll
	float ___roll_5;
	// System.Int32 objectquality::likeQuantity
	int32_t ___likeQuantity_6;
	// game_engine objectquality::quality
	game_engine_t3906582319 * ___quality_7;

public:
	inline static int32_t get_offset_of_poorItem_2() { return static_cast<int32_t>(offsetof(objectquality_t4090284256, ___poorItem_2)); }
	inline GameObject_t3674682005 * get_poorItem_2() const { return ___poorItem_2; }
	inline GameObject_t3674682005 ** get_address_of_poorItem_2() { return &___poorItem_2; }
	inline void set_poorItem_2(GameObject_t3674682005 * value)
	{
		___poorItem_2 = value;
		Il2CppCodeGenWriteBarrier(&___poorItem_2, value);
	}

	inline static int32_t get_offset_of_goodItem_3() { return static_cast<int32_t>(offsetof(objectquality_t4090284256, ___goodItem_3)); }
	inline GameObject_t3674682005 * get_goodItem_3() const { return ___goodItem_3; }
	inline GameObject_t3674682005 ** get_address_of_goodItem_3() { return &___goodItem_3; }
	inline void set_goodItem_3(GameObject_t3674682005 * value)
	{
		___goodItem_3 = value;
		Il2CppCodeGenWriteBarrier(&___goodItem_3, value);
	}

	inline static int32_t get_offset_of_currentItem_4() { return static_cast<int32_t>(offsetof(objectquality_t4090284256, ___currentItem_4)); }
	inline GameObject_t3674682005 * get_currentItem_4() const { return ___currentItem_4; }
	inline GameObject_t3674682005 ** get_address_of_currentItem_4() { return &___currentItem_4; }
	inline void set_currentItem_4(GameObject_t3674682005 * value)
	{
		___currentItem_4 = value;
		Il2CppCodeGenWriteBarrier(&___currentItem_4, value);
	}

	inline static int32_t get_offset_of_roll_5() { return static_cast<int32_t>(offsetof(objectquality_t4090284256, ___roll_5)); }
	inline float get_roll_5() const { return ___roll_5; }
	inline float* get_address_of_roll_5() { return &___roll_5; }
	inline void set_roll_5(float value)
	{
		___roll_5 = value;
	}

	inline static int32_t get_offset_of_likeQuantity_6() { return static_cast<int32_t>(offsetof(objectquality_t4090284256, ___likeQuantity_6)); }
	inline int32_t get_likeQuantity_6() const { return ___likeQuantity_6; }
	inline int32_t* get_address_of_likeQuantity_6() { return &___likeQuantity_6; }
	inline void set_likeQuantity_6(int32_t value)
	{
		___likeQuantity_6 = value;
	}

	inline static int32_t get_offset_of_quality_7() { return static_cast<int32_t>(offsetof(objectquality_t4090284256, ___quality_7)); }
	inline game_engine_t3906582319 * get_quality_7() const { return ___quality_7; }
	inline game_engine_t3906582319 ** get_address_of_quality_7() { return &___quality_7; }
	inline void set_quality_7(game_engine_t3906582319 * value)
	{
		___quality_7 = value;
		Il2CppCodeGenWriteBarrier(&___quality_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
