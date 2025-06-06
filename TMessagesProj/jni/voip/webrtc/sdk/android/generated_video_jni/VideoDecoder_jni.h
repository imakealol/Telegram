// Copyright 2014 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.


// This file is autogenerated by
//     third_party/jni_zero/jni_generator.py
// For
//     org/webrtc/VideoDecoder

#ifndef org_webrtc_VideoDecoder_JNI
#define org_webrtc_VideoDecoder_JNI

#include <jni.h>

#include "third_party/jni_zero/jni_export.h"
#include "webrtc/sdk/android/src/jni/jni_generator_helper.h"


// Step 1: Forward declarations.

JNI_ZERO_COMPONENT_BUILD_EXPORT extern const char kClassPath_org_webrtc_VideoDecoder[];
const char kClassPath_org_webrtc_VideoDecoder[] = "org/webrtc/VideoDecoder";

JNI_ZERO_COMPONENT_BUILD_EXPORT extern const char
    kClassPath_org_webrtc_VideoDecoder_00024Settings[];
const char kClassPath_org_webrtc_VideoDecoder_00024Settings[] = "org/webrtc/VideoDecoder$Settings";
// Leaking this jclass as we cannot use LazyInstance from some threads.
JNI_ZERO_COMPONENT_BUILD_EXPORT std::atomic<jclass> g_org_webrtc_VideoDecoder_clazz(nullptr);
#ifndef org_webrtc_VideoDecoder_clazz_defined
#define org_webrtc_VideoDecoder_clazz_defined
inline jclass org_webrtc_VideoDecoder_clazz(JNIEnv* env) {
  return jni_zero::LazyGetClass(env, kClassPath_org_webrtc_VideoDecoder,
      &g_org_webrtc_VideoDecoder_clazz);
}
#endif
// Leaking this jclass as we cannot use LazyInstance from some threads.
JNI_ZERO_COMPONENT_BUILD_EXPORT std::atomic<jclass>
    g_org_webrtc_VideoDecoder_00024Settings_clazz(nullptr);
#ifndef org_webrtc_VideoDecoder_00024Settings_clazz_defined
#define org_webrtc_VideoDecoder_00024Settings_clazz_defined
inline jclass org_webrtc_VideoDecoder_00024Settings_clazz(JNIEnv* env) {
  return jni_zero::LazyGetClass(env, kClassPath_org_webrtc_VideoDecoder_00024Settings,
      &g_org_webrtc_VideoDecoder_00024Settings_clazz);
}
#endif


// Step 2: Constants (optional).


// Step 3: Method stubs.
namespace webrtc {
namespace jni {


static std::atomic<jmethodID> g_org_webrtc_VideoDecoder_createNative1(nullptr);
static jlong Java_VideoDecoder_createNative(JNIEnv* env, const jni_zero::JavaRef<jobject>& obj,
    jlong webrtcEnvRef) {
  jclass clazz = org_webrtc_VideoDecoder_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_webrtc_VideoDecoder_clazz(env), 0);

  jni_zero::JniJavaCallContextChecked call_context;
  call_context.Init<
      jni_zero::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "createNative",
          "(J)J",
          &g_org_webrtc_VideoDecoder_createNative1);

  jlong ret =
      env->CallLongMethod(obj.obj(),
          call_context.base.method_id, webrtcEnvRef);
  return ret;
}

static std::atomic<jmethodID> g_org_webrtc_VideoDecoder_decode2(nullptr);
static jni_zero::ScopedJavaLocalRef<jobject> Java_VideoDecoder_decode(JNIEnv* env, const
    jni_zero::JavaRef<jobject>& obj, const jni_zero::JavaRef<jobject>& frame,
    const jni_zero::JavaRef<jobject>& info) {
  jclass clazz = org_webrtc_VideoDecoder_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_webrtc_VideoDecoder_clazz(env), nullptr);

  jni_zero::JniJavaCallContextChecked call_context;
  call_context.Init<
      jni_zero::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "decode",
"(Lorg/webrtc/EncodedImage;Lorg/webrtc/VideoDecoder$DecodeInfo;)Lorg/webrtc/VideoCodecStatus;",
          &g_org_webrtc_VideoDecoder_decode2);

  jobject ret =
      env->CallObjectMethod(obj.obj(),
          call_context.base.method_id, frame.obj(), info.obj());
  return jni_zero::ScopedJavaLocalRef<jobject>(env, ret);
}

static std::atomic<jmethodID> g_org_webrtc_VideoDecoder_getImplementationName0(nullptr);
static jni_zero::ScopedJavaLocalRef<jstring> Java_VideoDecoder_getImplementationName(JNIEnv* env,
    const jni_zero::JavaRef<jobject>& obj) {
  jclass clazz = org_webrtc_VideoDecoder_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_webrtc_VideoDecoder_clazz(env), nullptr);

  jni_zero::JniJavaCallContextChecked call_context;
  call_context.Init<
      jni_zero::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "getImplementationName",
          "()Ljava/lang/String;",
          &g_org_webrtc_VideoDecoder_getImplementationName0);

  jstring ret =
      static_cast<jstring>(env->CallObjectMethod(obj.obj(),
          call_context.base.method_id));
  return jni_zero::ScopedJavaLocalRef<jstring>(env, ret);
}

static std::atomic<jmethodID> g_org_webrtc_VideoDecoder_initDecode2(nullptr);
static jni_zero::ScopedJavaLocalRef<jobject> Java_VideoDecoder_initDecode(JNIEnv* env, const
    jni_zero::JavaRef<jobject>& obj, const jni_zero::JavaRef<jobject>& settings,
    const jni_zero::JavaRef<jobject>& decodeCallback) {
  jclass clazz = org_webrtc_VideoDecoder_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_webrtc_VideoDecoder_clazz(env), nullptr);

  jni_zero::JniJavaCallContextChecked call_context;
  call_context.Init<
      jni_zero::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "initDecode",
"(Lorg/webrtc/VideoDecoder$Settings;Lorg/webrtc/VideoDecoder$Callback;)Lorg/webrtc/VideoCodecStatus;",
          &g_org_webrtc_VideoDecoder_initDecode2);

  jobject ret =
      env->CallObjectMethod(obj.obj(),
          call_context.base.method_id, settings.obj(), decodeCallback.obj());
  return jni_zero::ScopedJavaLocalRef<jobject>(env, ret);
}

static std::atomic<jmethodID> g_org_webrtc_VideoDecoder_release0(nullptr);
static jni_zero::ScopedJavaLocalRef<jobject> Java_VideoDecoder_release(JNIEnv* env, const
    jni_zero::JavaRef<jobject>& obj) {
  jclass clazz = org_webrtc_VideoDecoder_clazz(env);
  CHECK_CLAZZ(env, obj.obj(),
      org_webrtc_VideoDecoder_clazz(env), nullptr);

  jni_zero::JniJavaCallContextChecked call_context;
  call_context.Init<
      jni_zero::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "release",
          "()Lorg/webrtc/VideoCodecStatus;",
          &g_org_webrtc_VideoDecoder_release0);

  jobject ret =
      env->CallObjectMethod(obj.obj(),
          call_context.base.method_id);
  return jni_zero::ScopedJavaLocalRef<jobject>(env, ret);
}

static std::atomic<jmethodID> g_org_webrtc_VideoDecoder_00024Settings_Constructor3(nullptr);
static jni_zero::ScopedJavaLocalRef<jobject> Java_Settings_Constructor(JNIEnv* env, JniIntWrapper
    numberOfCores,
    JniIntWrapper width,
    JniIntWrapper height) {
  jclass clazz = org_webrtc_VideoDecoder_00024Settings_clazz(env);
  CHECK_CLAZZ(env, clazz,
      org_webrtc_VideoDecoder_00024Settings_clazz(env), nullptr);

  jni_zero::JniJavaCallContextChecked call_context;
  call_context.Init<
      jni_zero::MethodID::TYPE_INSTANCE>(
          env,
          clazz,
          "<init>",
          "(III)V",
          &g_org_webrtc_VideoDecoder_00024Settings_Constructor3);

  jobject ret =
      env->NewObject(clazz,
          call_context.base.method_id, as_jint(numberOfCores), as_jint(width), as_jint(height));
  return jni_zero::ScopedJavaLocalRef<jobject>(env, ret);
}

}  // namespace jni
}  // namespace webrtc

#endif  // org_webrtc_VideoDecoder_JNI
