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

// UnityEngine.AndroidJavaException
struct AndroidJavaException_t1033831801;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String1967731336.h"

// System.Void UnityEngine.AndroidJavaException::.ctor(System.String,System.String)
extern "C"  void AndroidJavaException__ctor_m1848301225 (AndroidJavaException_t1033831801 * __this, String_t* ___message, String_t* ___javaStackTrace, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.AndroidJavaException::get_StackTrace()
extern "C"  String_t* AndroidJavaException_get_StackTrace_m3186792040 (AndroidJavaException_t1033831801 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
