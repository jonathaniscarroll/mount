#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// game_engine
struct game_engine_t3906582319;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t747900261;
// UnityEngine.GameObject
struct GameObject_t3674682005;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t1355284822;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// cubicleGeneration
struct  cubicleGeneration_t372503483  : public MonoBehaviour_t667441552
{
public:
	// game_engine cubicleGeneration::GameEngine
	game_engine_t3906582319 * ___GameEngine_2;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> cubicleGeneration::cubicles
	List_1_t747900261 * ___cubicles_3;
	// UnityEngine.GameObject cubicleGeneration::cubicle
	GameObject_t3674682005 * ___cubicle_4;
	// UnityEngine.GameObject cubicleGeneration::newestCubicle
	GameObject_t3674682005 * ___newestCubicle_5;
	// System.Collections.Generic.List`1<UnityEngine.Vector3> cubicleGeneration::directions
	List_1_t1355284822 * ___directions_6;
	// UnityEngine.Vector3 cubicleGeneration::cubiclePos
	Vector3_t4282066566  ___cubiclePos_7;
	// UnityEngine.Vector3 cubicleGeneration::newCubiclePos
	Vector3_t4282066566  ___newCubiclePos_8;
	// UnityEngine.GameObject cubicleGeneration::pathway
	GameObject_t3674682005 * ___pathway_9;
	// UnityEngine.GameObject cubicleGeneration::newPathway
	GameObject_t3674682005 * ___newPathway_10;

public:
	inline static int32_t get_offset_of_GameEngine_2() { return static_cast<int32_t>(offsetof(cubicleGeneration_t372503483, ___GameEngine_2)); }
	inline game_engine_t3906582319 * get_GameEngine_2() const { return ___GameEngine_2; }
	inline game_engine_t3906582319 ** get_address_of_GameEngine_2() { return &___GameEngine_2; }
	inline void set_GameEngine_2(game_engine_t3906582319 * value)
	{
		___GameEngine_2 = value;
		Il2CppCodeGenWriteBarrier(&___GameEngine_2, value);
	}

	inline static int32_t get_offset_of_cubicles_3() { return static_cast<int32_t>(offsetof(cubicleGeneration_t372503483, ___cubicles_3)); }
	inline List_1_t747900261 * get_cubicles_3() const { return ___cubicles_3; }
	inline List_1_t747900261 ** get_address_of_cubicles_3() { return &___cubicles_3; }
	inline void set_cubicles_3(List_1_t747900261 * value)
	{
		___cubicles_3 = value;
		Il2CppCodeGenWriteBarrier(&___cubicles_3, value);
	}

	inline static int32_t get_offset_of_cubicle_4() { return static_cast<int32_t>(offsetof(cubicleGeneration_t372503483, ___cubicle_4)); }
	inline GameObject_t3674682005 * get_cubicle_4() const { return ___cubicle_4; }
	inline GameObject_t3674682005 ** get_address_of_cubicle_4() { return &___cubicle_4; }
	inline void set_cubicle_4(GameObject_t3674682005 * value)
	{
		___cubicle_4 = value;
		Il2CppCodeGenWriteBarrier(&___cubicle_4, value);
	}

	inline static int32_t get_offset_of_newestCubicle_5() { return static_cast<int32_t>(offsetof(cubicleGeneration_t372503483, ___newestCubicle_5)); }
	inline GameObject_t3674682005 * get_newestCubicle_5() const { return ___newestCubicle_5; }
	inline GameObject_t3674682005 ** get_address_of_newestCubicle_5() { return &___newestCubicle_5; }
	inline void set_newestCubicle_5(GameObject_t3674682005 * value)
	{
		___newestCubicle_5 = value;
		Il2CppCodeGenWriteBarrier(&___newestCubicle_5, value);
	}

	inline static int32_t get_offset_of_directions_6() { return static_cast<int32_t>(offsetof(cubicleGeneration_t372503483, ___directions_6)); }
	inline List_1_t1355284822 * get_directions_6() const { return ___directions_6; }
	inline List_1_t1355284822 ** get_address_of_directions_6() { return &___directions_6; }
	inline void set_directions_6(List_1_t1355284822 * value)
	{
		___directions_6 = value;
		Il2CppCodeGenWriteBarrier(&___directions_6, value);
	}

	inline static int32_t get_offset_of_cubiclePos_7() { return static_cast<int32_t>(offsetof(cubicleGeneration_t372503483, ___cubiclePos_7)); }
	inline Vector3_t4282066566  get_cubiclePos_7() const { return ___cubiclePos_7; }
	inline Vector3_t4282066566 * get_address_of_cubiclePos_7() { return &___cubiclePos_7; }
	inline void set_cubiclePos_7(Vector3_t4282066566  value)
	{
		___cubiclePos_7 = value;
	}

	inline static int32_t get_offset_of_newCubiclePos_8() { return static_cast<int32_t>(offsetof(cubicleGeneration_t372503483, ___newCubiclePos_8)); }
	inline Vector3_t4282066566  get_newCubiclePos_8() const { return ___newCubiclePos_8; }
	inline Vector3_t4282066566 * get_address_of_newCubiclePos_8() { return &___newCubiclePos_8; }
	inline void set_newCubiclePos_8(Vector3_t4282066566  value)
	{
		___newCubiclePos_8 = value;
	}

	inline static int32_t get_offset_of_pathway_9() { return static_cast<int32_t>(offsetof(cubicleGeneration_t372503483, ___pathway_9)); }
	inline GameObject_t3674682005 * get_pathway_9() const { return ___pathway_9; }
	inline GameObject_t3674682005 ** get_address_of_pathway_9() { return &___pathway_9; }
	inline void set_pathway_9(GameObject_t3674682005 * value)
	{
		___pathway_9 = value;
		Il2CppCodeGenWriteBarrier(&___pathway_9, value);
	}

	inline static int32_t get_offset_of_newPathway_10() { return static_cast<int32_t>(offsetof(cubicleGeneration_t372503483, ___newPathway_10)); }
	inline GameObject_t3674682005 * get_newPathway_10() const { return ___newPathway_10; }
	inline GameObject_t3674682005 ** get_address_of_newPathway_10() { return &___newPathway_10; }
	inline void set_newPathway_10(GameObject_t3674682005 * value)
	{
		___newPathway_10 = value;
		Il2CppCodeGenWriteBarrier(&___newPathway_10, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
