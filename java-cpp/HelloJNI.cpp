#include <jni.h>
#include <iostream>
#include "HelloJNI.h"
JNIEXPORT void JNICALL Java_HelloJNI_sayHello(JNIEnv *env, jobject obj) {
    std::cout<<"Hello CPP"
       <<std::endl ;
}
