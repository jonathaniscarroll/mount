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
// objectquality
struct objectquality_t4090284256;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// objectQuantity
struct  objectQuantity_t2311568618  : public MonoBehaviour_t667441552
{
public:
	// System.Single objectQuantity::objectProb
	float ___objectProb_2;
	// UnityEngine.GameObject objectQuantity::cubicleObject
	GameObject_t3674682005 * ___cubicleObject_3;
	// game_engine objectQuantity::quantity
	game_engine_t3906582319 * ___quantity_4;
	// objectquality objectQuantity::quality
	objectquality_t4090284256 * ___quality_5;

public:
	inline static int32_t get_offset_of_objectProb_2() { return static_cast<int32_t>(offsetof(objectQuantity_t2311568618, ___objectProb_2)); }
	inline float get_objectProb_2() const { return ___objectProb_2; }
	inline float* get_address_of_objectProb_2() { return &___objectProb_2; }
	inline void set_objectProb_2(float value)
	{
		___objectProb_2 = value;
	}

	inline static int32_t get_offset_of_cubicleObject_3() { return static_cast<int32_t>(offsetof(objectQuantity_t2311568618, ___cubicleObject_3)); }
	inline GameObject_t3674682005 * get_cubicleObject_3() const { return ___cubicleObject_3; }
	inline GameObject_t3674682005 ** get_address_of_cubicleObject_3() { return &___cubicleObject_3; }
	inline void set_cubicleObject_3(GameObject_t3674682005 * value)
	{
		___cubicleObject_3 = value;
		Il2CppCodeGenWriteBarrier(&___cubicleObject_3, value);
	}

	inline static int32_t get_offset_of_quantity_4() { return static_cast<int32_t>(offsetof(objectQuantity_t2311568618, ___quantity_4)); }
	inline game_engine_t3906582319 * get_quantity_4() const { return ___quantity_4; }
	inline game_engine_t3906582319 ** get_address_of_quantity_4() { return &___quantity_4; }
	inline void set_quantity_4(game_engine_t3906582319 * value)
	{
		___quantity_4 = value;
		Il2CppCodeGenWriteBarrier(&___quantity_4, value);
	}

	inline static int32_t get_offset_of_quality_5() { return static_cast<int32_t>(offsetof(objectQuantity_t2311568618, ___quality_5)); }
	inline objectquality_t4090284256 * get_quality_5() const { return ___quality_5; }
	inline objectquality_t4090284256 ** get_address_of_quality_5() { return &___quality_5; }
	inline void set_quality_5(objectquality_t4090284256 * value)
	{
		___quality_5 = value;
		Il2CppCodeGenWriteBarrier(&___quality_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
