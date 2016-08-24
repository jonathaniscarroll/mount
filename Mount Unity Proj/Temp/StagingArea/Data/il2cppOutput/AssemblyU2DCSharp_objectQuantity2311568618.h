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
// objectDictionary
struct objectDictionary_t3599772981;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t2662109048;

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
	// objectDictionary objectQuantity::objectDictionary
	objectDictionary_t3599772981 * ___objectDictionary_6;
	// System.Single objectQuantity::randomX
	float ___randomX_7;
	// System.Single objectQuantity::randomZ
	float ___randomZ_8;
	// UnityEngine.GameObject[] objectQuantity::findItems
	GameObjectU5BU5D_t2662109048* ___findItems_9;
	// System.Int32 objectQuantity::x
	int32_t ___x_10;

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

	inline static int32_t get_offset_of_objectDictionary_6() { return static_cast<int32_t>(offsetof(objectQuantity_t2311568618, ___objectDictionary_6)); }
	inline objectDictionary_t3599772981 * get_objectDictionary_6() const { return ___objectDictionary_6; }
	inline objectDictionary_t3599772981 ** get_address_of_objectDictionary_6() { return &___objectDictionary_6; }
	inline void set_objectDictionary_6(objectDictionary_t3599772981 * value)
	{
		___objectDictionary_6 = value;
		Il2CppCodeGenWriteBarrier(&___objectDictionary_6, value);
	}

	inline static int32_t get_offset_of_randomX_7() { return static_cast<int32_t>(offsetof(objectQuantity_t2311568618, ___randomX_7)); }
	inline float get_randomX_7() const { return ___randomX_7; }
	inline float* get_address_of_randomX_7() { return &___randomX_7; }
	inline void set_randomX_7(float value)
	{
		___randomX_7 = value;
	}

	inline static int32_t get_offset_of_randomZ_8() { return static_cast<int32_t>(offsetof(objectQuantity_t2311568618, ___randomZ_8)); }
	inline float get_randomZ_8() const { return ___randomZ_8; }
	inline float* get_address_of_randomZ_8() { return &___randomZ_8; }
	inline void set_randomZ_8(float value)
	{
		___randomZ_8 = value;
	}

	inline static int32_t get_offset_of_findItems_9() { return static_cast<int32_t>(offsetof(objectQuantity_t2311568618, ___findItems_9)); }
	inline GameObjectU5BU5D_t2662109048* get_findItems_9() const { return ___findItems_9; }
	inline GameObjectU5BU5D_t2662109048** get_address_of_findItems_9() { return &___findItems_9; }
	inline void set_findItems_9(GameObjectU5BU5D_t2662109048* value)
	{
		___findItems_9 = value;
		Il2CppCodeGenWriteBarrier(&___findItems_9, value);
	}

	inline static int32_t get_offset_of_x_10() { return static_cast<int32_t>(offsetof(objectQuantity_t2311568618, ___x_10)); }
	inline int32_t get_x_10() const { return ___x_10; }
	inline int32_t* get_address_of_x_10() { return &___x_10; }
	inline void set_x_10(int32_t value)
	{
		___x_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
