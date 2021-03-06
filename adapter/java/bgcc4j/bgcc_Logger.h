/***********************************************************************
  * Copyright (c) 2012, Baidu Inc. All rights reserved.
  * 
  * Licensed under the BSD License
  * you may not use this file except in compliance with the License.
  * You may obtain a copy of the License at
  * 
  *      license.txt
  *********************************************************************/

/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class bgcc_Logger */

#ifndef _Included_bgcc_Logger
#define _Included_bgcc_Logger
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     bgcc_Logger
 * Method:    open
 * Signature: (Ljava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_bgcc_Logger_open
  (JNIEnv *, jobject, jstring);

/*
 * Class:     bgcc_Logger
 * Method:    close
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_bgcc_Logger_close
  (JNIEnv *, jobject);

/*
 * Class:     bgcc_Logger
 * Method:    trace
 * Signature: (Ljava/lang/String;Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_bgcc_Logger_trace
  (JNIEnv *, jobject, jstring, jstring);

/*
 * Class:     bgcc_Logger
 * Method:    debug
 * Signature: (Ljava/lang/String;Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_bgcc_Logger_debug
  (JNIEnv *, jobject, jstring, jstring);

/*
 * Class:     bgcc_Logger
 * Method:    notice
 * Signature: (Ljava/lang/String;Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_bgcc_Logger_notice
  (JNIEnv *, jobject, jstring, jstring);

/*
 * Class:     bgcc_Logger
 * Method:    warn
 * Signature: (Ljava/lang/String;Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_bgcc_Logger_warn
  (JNIEnv *, jobject, jstring, jstring);

/*
 * Class:     bgcc_Logger
 * Method:    fatal
 * Signature: (Ljava/lang/String;Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_bgcc_Logger_fatal
  (JNIEnv *, jobject, jstring, jstring);

#ifdef __cplusplus
}
#endif
#endif
