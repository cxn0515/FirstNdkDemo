#include "com_example_ndkdemo_firstndkdemo_JniTest.h"

JNIEXPORT jstring JNICALL Java_com_example_ndkdemo_firstndkdemo_JniTest_getName
        (JNIEnv *env, jobject jobject1) {
    return (*env)->NewStringUTF( env,"hello my first jni");
}


