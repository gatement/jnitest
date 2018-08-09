#include <jni.h>

#ifndef _Included_TestJni
#define _Included_TestJni

#ifdef __cplusplus
extern "C" {
#endif

JNIEXPORT void JNICALL Java_lgh_TestJni_print (JNIEnv*, jobject, jstring);
JNIEXPORT jstring JNICALL Java_lgh_TestJni_printAndGet (JNIEnv*, jobject, jstring);

#ifdef __cplusplus
}
#endif

#endif
