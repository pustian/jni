#include <jni.h>
#include "Primitive.h"

JNIEXPORT jint JNICALL Java_Primitive_add(JNIEnv *env, jobject obj, jint x, jint y) {
    return x + y;
}
