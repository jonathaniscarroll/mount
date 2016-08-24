#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// itemLvVars
struct itemLvVars_t1800886217;
// UnityEngine.Rigidbody
struct Rigidbody_t3346577219;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// itemLvDetect
struct  itemLvDetect_t3563220224  : public MonoBehaviour_t667441552
{
public:
	// itemLvVars itemLvDetect::itemLevelRead
	itemLvVars_t1800886217 * ___itemLevelRead_2;
	// UnityEngine.Rigidbody itemLvDetect::rigid
	Rigidbody_t3346577219 * ___rigid_3;
	// System.Single itemLvDetect::randomX
	float ___randomX_4;
	// System.Single itemLvDetect::randomY
	float ___randomY_5;
	// System.Single itemLvDetect::randomZ
	float ___randomZ_6;
	// System.Int32 itemLvDetect::topChairLevel
	int32_t ___topChairLevel_7;

public:
	inline static int32_t get_offset_of_itemLevelRead_2() { return static_cast<int32_t>(offsetof(itemLvDetect_t3563220224, ___itemLevelRead_2)); }
	inline itemLvVars_t1800886217 * get_itemLevelRead_2() const { return ___itemLevelRead_2; }
	inline itemLvVars_t1800886217 ** get_address_of_itemLevelRead_2() { return &___itemLevelRead_2; }
	inline void set_itemLevelRead_2(itemLvVars_t1800886217 * value)
	{
		___itemLevelRead_2 = value;
		Il2CppCodeGenWriteBarrier(&___itemLevelRead_2, value);
	}

	inline static int32_t get_offset_of_rigid_3() { return static_cast<int32_t>(offsetof(itemLvDetect_t3563220224, ___rigid_3)); }
	inline Rigidbody_t3346577219 * get_rigid_3() const { return ___rigid_3; }
	inline Rigidbody_t3346577219 ** get_address_of_rigid_3() { return &___rigid_3; }
	inline void set_rigid_3(Rigidbody_t3346577219 * value)
	{
		___rigid_3 = value;
		Il2CppCodeGenWriteBarrier(&___rigid_3, value);
	}

	inline static int32_t get_offset_of_randomX_4() { return static_cast<int32_t>(offsetof(itemLvDetect_t3563220224, ___randomX_4)); }
	inline float get_randomX_4() const { return ___randomX_4; }
	inline float* get_address_of_randomX_4() { return &___randomX_4; }
	inline void set_randomX_4(float value)
	{
		___randomX_4 = value;
	}

	inline static int32_t get_offset_of_randomY_5() { return static_cast<int32_t>(offsetof(itemLvDetect_t3563220224, ___randomY_5)); }
	inline float get_randomY_5() const { return ___randomY_5; }
	inline float* get_address_of_randomY_5() { return &___randomY_5; }
	inline void set_randomY_5(float value)
	{
		___randomY_5 = value;
	}

	inline static int32_t get_offset_of_randomZ_6() { return static_cast<int32_t>(offsetof(itemLvDetect_t3563220224, ___randomZ_6)); }
	inline float get_randomZ_6() const { return ___randomZ_6; }
	inline float* get_address_of_randomZ_6() { return &___randomZ_6; }
	inline void set_randomZ_6(float value)
	{
		___randomZ_6 = value;
	}

	inline static int32_t get_offset_of_topChairLevel_7() { return static_cast<int32_t>(offsetof(itemLvDetect_t3563220224, ___topChairLevel_7)); }
	inline int32_t get_topChairLevel_7() const { return ___topChairLevel_7; }
	inline int32_t* get_address_of_topChairLevel_7() { return &___topChairLevel_7; }
	inline void set_topChairLevel_7(int32_t value)
	{
		___topChairLevel_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
