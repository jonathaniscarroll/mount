﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// Facebook.Unity.InitDelegate
struct InitDelegate_t5726901;
// System.Object
struct Il2CppObject;
// System.IAsyncResult
struct IAsyncResult_t2754620036;
// System.AsyncCallback
struct AsyncCallback_t1369114871;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_IntPtr4010401971.h"
#include "mscorlib_System_AsyncCallback1369114871.h"

// System.Void Facebook.Unity.InitDelegate::.ctor(System.Object,System.IntPtr)
extern "C"  void InitDelegate__ctor_m3471929580 (InitDelegate_t5726901 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.InitDelegate::Invoke()
extern "C"  void InitDelegate_Invoke_m1167027270 (InitDelegate_t5726901 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult Facebook.Unity.InitDelegate::BeginInvoke(System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * InitDelegate_BeginInvoke_m2868036997 (InitDelegate_t5726901 * __this, AsyncCallback_t1369114871 * ___callback0, Il2CppObject * ___object1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Facebook.Unity.InitDelegate::EndInvoke(System.IAsyncResult)
extern "C"  void InitDelegate_EndInvoke_m2535078140 (InitDelegate_t5726901 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
