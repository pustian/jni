#include <jni.h>
#include <stdio.h>
#include "include/pustian_HelloJNI.h"
 
JNIEXPORT void JNICALL Java_pustian_HelloJNI_sayHello(JNIEnv *env, jobject thisObj) {
   printf("Hello World!\n");
   return;
}
