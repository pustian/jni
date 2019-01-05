#include <jni.h>
#include <stdio.h>
#include "Primitive.h"

JNIEXPORT jint JNICALL Java_Primitive_add(JNIEnv *env, jobject obj, jint x, jint y) {
    printf("In C x=%d y=%d x+y=%d\n", x, y, (x+y) );
    return x + y;
}

JNIEXPORT jint JNICALL Java_Primitive_sub(JNIEnv *env, jobject obj, jint x, jint y) {
    printf("In C x=%d y=%d x-y=%d\n", x, y, (x-y) );
    return x - y;
}

JNIEXPORT jint JNICALL Java_Primitive_mul(JNIEnv *env, jobject obj, jint x, jint y) {
    printf("In C x=%d y=%d x*y=%d\n", x, y, (x*y) );
    return x * y;
}

JNIEXPORT jint JNICALL Java_Primitive_div (JNIEnv *env, jobject obj, jint x, jint y) {
    printf("In C x=%d y=%d x/y=%d\n", x, y, (0==y? 0 : x/y) );
    return 0==y? 0: x / y;
}
