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
// internMove
struct internMove_t2703232515;
// UnityEngine.Rigidbody
struct Rigidbody_t3346577219;
// UnityEngine.LineRenderer
struct LineRenderer_t1892709339;
// UnityEngine.TextMesh
struct TextMesh_t2567681854;
// UnityEngine.UI.Text
struct Text_t9039225;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// interaction
struct  interaction_t1844104722  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.GameObject interaction::intern
	GameObject_t3674682005 * ___intern_2;
	// internMove interaction::acting
	internMove_t2703232515 * ___acting_3;
	// System.Single interaction::counter
	float ___counter_4;
	// System.Single interaction::roll
	float ___roll_5;
	// System.Int32 interaction::holdingPencil
	int32_t ___holdingPencil_6;
	// System.Int32 interaction::holdingCoffee
	int32_t ___holdingCoffee_7;
	// System.Int32 interaction::holdingPaper
	int32_t ___holdingPaper_8;
	// UnityEngine.Rigidbody interaction::rigidthrow
	Rigidbody_t3346577219 * ___rigidthrow_9;
	// System.Single interaction::randomX
	float ___randomX_10;
	// System.Single interaction::randomY
	float ___randomY_11;
	// System.Single interaction::randomZ
	float ___randomZ_12;
	// UnityEngine.Rigidbody interaction::rotater
	Rigidbody_t3346577219 * ___rotater_13;
	// System.Int32 interaction::segmentSize
	int32_t ___segmentSize_14;
	// UnityEngine.GameObject interaction::Drawing
	GameObject_t3674682005 * ___Drawing_15;
	// UnityEngine.LineRenderer interaction::render
	LineRenderer_t1892709339 * ___render_16;
	// System.Int32 interaction::drawLength
	int32_t ___drawLength_17;
	// UnityEngine.TextMesh interaction::textMesh
	TextMesh_t2567681854 * ___textMesh_18;
	// UnityEngine.UI.Text interaction::laptoptext
	Text_t9039225 * ___laptoptext_19;
	// System.Int32 interaction::i
	int32_t ___i_20;
	// System.Int32 interaction::j
	int32_t ___j_21;

public:
	inline static int32_t get_offset_of_intern_2() { return static_cast<int32_t>(offsetof(interaction_t1844104722, ___intern_2)); }
	inline GameObject_t3674682005 * get_intern_2() const { return ___intern_2; }
	inline GameObject_t3674682005 ** get_address_of_intern_2() { return &___intern_2; }
	inline void set_intern_2(GameObject_t3674682005 * value)
	{
		___intern_2 = value;
		Il2CppCodeGenWriteBarrier(&___intern_2, value);
	}

	inline static int32_t get_offset_of_acting_3() { return static_cast<int32_t>(offsetof(interaction_t1844104722, ___acting_3)); }
	inline internMove_t2703232515 * get_acting_3() const { return ___acting_3; }
	inline internMove_t2703232515 ** get_address_of_acting_3() { return &___acting_3; }
	inline void set_acting_3(internMove_t2703232515 * value)
	{
		___acting_3 = value;
		Il2CppCodeGenWriteBarrier(&___acting_3, value);
	}

	inline static int32_t get_offset_of_counter_4() { return static_cast<int32_t>(offsetof(interaction_t1844104722, ___counter_4)); }
	inline float get_counter_4() const { return ___counter_4; }
	inline float* get_address_of_counter_4() { return &___counter_4; }
	inline void set_counter_4(float value)
	{
		___counter_4 = value;
	}

	inline static int32_t get_offset_of_roll_5() { return static_cast<int32_t>(offsetof(interaction_t1844104722, ___roll_5)); }
	inline float get_roll_5() const { return ___roll_5; }
	inline float* get_address_of_roll_5() { return &___roll_5; }
	inline void set_roll_5(float value)
	{
		___roll_5 = value;
	}

	inline static int32_t get_offset_of_holdingPencil_6() { return static_cast<int32_t>(offsetof(interaction_t1844104722, ___holdingPencil_6)); }
	inline int32_t get_holdingPencil_6() const { return ___holdingPencil_6; }
	inline int32_t* get_address_of_holdingPencil_6() { return &___holdingPencil_6; }
	inline void set_holdingPencil_6(int32_t value)
	{
		___holdingPencil_6 = value;
	}

	inline static int32_t get_offset_of_holdingCoffee_7() { return static_cast<int32_t>(offsetof(interaction_t1844104722, ___holdingCoffee_7)); }
	inline int32_t get_holdingCoffee_7() const { return ___holdingCoffee_7; }
	inline int32_t* get_address_of_holdingCoffee_7() { return &___holdingCoffee_7; }
	inline void set_holdingCoffee_7(int32_t value)
	{
		___holdingCoffee_7 = value;
	}

	inline static int32_t get_offset_of_holdingPaper_8() { return static_cast<int32_t>(offsetof(interaction_t1844104722, ___holdingPaper_8)); }
	inline int32_t get_holdingPaper_8() const { return ___holdingPaper_8; }
	inline int32_t* get_address_of_holdingPaper_8() { return &___holdingPaper_8; }
	inline void set_holdingPaper_8(int32_t value)
	{
		___holdingPaper_8 = value;
	}

	inline static int32_t get_offset_of_rigidthrow_9() { return static_cast<int32_t>(offsetof(interaction_t1844104722, ___rigidthrow_9)); }
	inline Rigidbody_t3346577219 * get_rigidthrow_9() const { return ___rigidthrow_9; }
	inline Rigidbody_t3346577219 ** get_address_of_rigidthrow_9() { return &___rigidthrow_9; }
	inline void set_rigidthrow_9(Rigidbody_t3346577219 * value)
	{
		___rigidthrow_9 = value;
		Il2CppCodeGenWriteBarrier(&___rigidthrow_9, value);
	}

	inline static int32_t get_offset_of_randomX_10() { return static_cast<int32_t>(offsetof(interaction_t1844104722, ___randomX_10)); }
	inline float get_randomX_10() const { return ___randomX_10; }
	inline float* get_address_of_randomX_10() { return &___randomX_10; }
	inline void set_randomX_10(float value)
	{
		___randomX_10 = value;
	}

	inline static int32_t get_offset_of_randomY_11() { return static_cast<int32_t>(offsetof(interaction_t1844104722, ___randomY_11)); }
	inline float get_randomY_11() const { return ___randomY_11; }
	inline float* get_address_of_randomY_11() { return &___randomY_11; }
	inline void set_randomY_11(float value)
	{
		___randomY_11 = value;
	}

	inline static int32_t get_offset_of_randomZ_12() { return static_cast<int32_t>(offsetof(interaction_t1844104722, ___randomZ_12)); }
	inline float get_randomZ_12() const { return ___randomZ_12; }
	inline float* get_address_of_randomZ_12() { return &___randomZ_12; }
	inline void set_randomZ_12(float value)
	{
		___randomZ_12 = value;
	}

	inline static int32_t get_offset_of_rotater_13() { return static_cast<int32_t>(offsetof(interaction_t1844104722, ___rotater_13)); }
	inline Rigidbody_t3346577219 * get_rotater_13() const { return ___rotater_13; }
	inline Rigidbody_t3346577219 ** get_address_of_rotater_13() { return &___rotater_13; }
	inline void set_rotater_13(Rigidbody_t3346577219 * value)
	{
		___rotater_13 = value;
		Il2CppCodeGenWriteBarrier(&___rotater_13, value);
	}

	inline static int32_t get_offset_of_segmentSize_14() { return static_cast<int32_t>(offsetof(interaction_t1844104722, ___segmentSize_14)); }
	inline int32_t get_segmentSize_14() const { return ___segmentSize_14; }
	inline int32_t* get_address_of_segmentSize_14() { return &___segmentSize_14; }
	inline void set_segmentSize_14(int32_t value)
	{
		___segmentSize_14 = value;
	}

	inline static int32_t get_offset_of_Drawing_15() { return static_cast<int32_t>(offsetof(interaction_t1844104722, ___Drawing_15)); }
	inline GameObject_t3674682005 * get_Drawing_15() const { return ___Drawing_15; }
	inline GameObject_t3674682005 ** get_address_of_Drawing_15() { return &___Drawing_15; }
	inline void set_Drawing_15(GameObject_t3674682005 * value)
	{
		___Drawing_15 = value;
		Il2CppCodeGenWriteBarrier(&___Drawing_15, value);
	}

	inline static int32_t get_offset_of_render_16() { return static_cast<int32_t>(offsetof(interaction_t1844104722, ___render_16)); }
	inline LineRenderer_t1892709339 * get_render_16() const { return ___render_16; }
	inline LineRenderer_t1892709339 ** get_address_of_render_16() { return &___render_16; }
	inline void set_render_16(LineRenderer_t1892709339 * value)
	{
		___render_16 = value;
		Il2CppCodeGenWriteBarrier(&___render_16, value);
	}

	inline static int32_t get_offset_of_drawLength_17() { return static_cast<int32_t>(offsetof(interaction_t1844104722, ___drawLength_17)); }
	inline int32_t get_drawLength_17() const { return ___drawLength_17; }
	inline int32_t* get_address_of_drawLength_17() { return &___drawLength_17; }
	inline void set_drawLength_17(int32_t value)
	{
		___drawLength_17 = value;
	}

	inline static int32_t get_offset_of_textMesh_18() { return static_cast<int32_t>(offsetof(interaction_t1844104722, ___textMesh_18)); }
	inline TextMesh_t2567681854 * get_textMesh_18() const { return ___textMesh_18; }
	inline TextMesh_t2567681854 ** get_address_of_textMesh_18() { return &___textMesh_18; }
	inline void set_textMesh_18(TextMesh_t2567681854 * value)
	{
		___textMesh_18 = value;
		Il2CppCodeGenWriteBarrier(&___textMesh_18, value);
	}

	inline static int32_t get_offset_of_laptoptext_19() { return static_cast<int32_t>(offsetof(interaction_t1844104722, ___laptoptext_19)); }
	inline Text_t9039225 * get_laptoptext_19() const { return ___laptoptext_19; }
	inline Text_t9039225 ** get_address_of_laptoptext_19() { return &___laptoptext_19; }
	inline void set_laptoptext_19(Text_t9039225 * value)
	{
		___laptoptext_19 = value;
		Il2CppCodeGenWriteBarrier(&___laptoptext_19, value);
	}

	inline static int32_t get_offset_of_i_20() { return static_cast<int32_t>(offsetof(interaction_t1844104722, ___i_20)); }
	inline int32_t get_i_20() const { return ___i_20; }
	inline int32_t* get_address_of_i_20() { return &___i_20; }
	inline void set_i_20(int32_t value)
	{
		___i_20 = value;
	}

	inline static int32_t get_offset_of_j_21() { return static_cast<int32_t>(offsetof(interaction_t1844104722, ___j_21)); }
	inline int32_t get_j_21() const { return ___j_21; }
	inline int32_t* get_address_of_j_21() { return &___j_21; }
	inline void set_j_21(int32_t value)
	{
		___j_21 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
