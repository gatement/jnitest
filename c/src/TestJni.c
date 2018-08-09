#include <jni.h>
#include <stdio.h>
#include <TestJni.h>

JNIEXPORT void JNICALL Java_lgh_TestJni_print(JNIEnv* env, jobject obj, jstring content)
{
    // 从 instring 字符串取得指向字符串 UTF 编码的指针
    // 注意C语言必须(*env)->         C++ env->
    const jbyte *str = (const jbyte *)(*env)->GetStringUTFChars(env, content, JNI_FALSE);
    printf("C Print: %s\n", str);

    // 通知虚拟机本地代码不再需要通过 str 访问 Java 字符串。
    (*env)->ReleaseStringUTFChars(env, content, (const char *)str );

    return;
}

JNIEXPORT jstring JNICALL Java_lgh_TestJni_printAndGet(JNIEnv* env, jobject obj, jstring content)
{
    // 从 instring 字符串取得指向字符串 UTF 编码的指针
    // 注意C语言必须(*env)->         C++ env->
    const jbyte *str = (const jbyte *)(*env)->GetStringUTFChars(env, content, JNI_FALSE);
    printf("C Print: %s\n", str);

    // 通知虚拟机本地代码不再需要通过 str 访问 Java 字符串。
    (*env)->ReleaseStringUTFChars(env, content, (const char *)str );

    char* cstr = "Hello form C";
    jstring jstr2 = (*env) -> NewStringUTF(env, cstr);
    return jstr2;
}
