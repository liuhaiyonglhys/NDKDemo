//
// Created by liuha on 2016/4/16.
//

/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
#ifndef LOG_TAG
#define LOG_TAG "ANDROID_LAB"
#define LOGE(...) __android_log_print(ANDROID_LOG_ERROR, LOG_TAG, __VA_ARGS__)
#endif

/* Header for class lab_sodino_jnitest_MainActivity */

#ifndef _Included_com_lhy_ndk_MainActivity
#define _Included_com_lhy_ndk_MainActivity
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class: com_lhy_ndk_MainActivity
 * Method: getStringFromNative
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_lhy_ndk_MainActivity_getStringFromNative
        (JNIEnv * env, jobject jObj){
//    LOGE("log string from ndk.");
    env->NewStringUTF( "Hello from JNI !");
}

#ifdef __cplusplus
}
#endif
#endif