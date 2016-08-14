#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// fbInit
struct fbInit_t3012962284;
// Facebook.Unity.ILoginResult
struct ILoginResult_t528611517;
// Facebook.Unity.IGraphResult
struct IGraphResult_t873401058;

#include "codegen/il2cpp-codegen.h"

// System.Void fbInit::.ctor()
extern "C"  void fbInit__ctor_m2774623791 (fbInit_t3012962284 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void fbInit::Awake()
extern "C"  void fbInit_Awake_m3012229010 (fbInit_t3012962284 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void fbInit::internLogin()
extern "C"  void fbInit_internLogin_m4073395236 (fbInit_t3012962284 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void fbInit::retrievePosts()
extern "C"  void fbInit_retrievePosts_m3289233060 (fbInit_t3012962284 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void fbInit::AuthCallback(Facebook.Unity.ILoginResult)
extern "C"  void fbInit_AuthCallback_m1726807442 (fbInit_t3012962284 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void fbInit::postsCallback(Facebook.Unity.IGraphResult)
extern "C"  void fbInit_postsCallback_m4208019338 (fbInit_t3012962284 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void fbInit::returnPostLikes(Facebook.Unity.IGraphResult)
extern "C"  void fbInit_returnPostLikes_m1780006038 (fbInit_t3012962284 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
