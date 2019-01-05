#include <jni.h>
#include "HelloJNICpp.h"
#include "HelloJNICppImpl.h"

JNIEXPORT void JNICALL Java_HelloJNICpp_sayHello(JNIEnv *env, jobject obj) {
//    std::cout<<"Java HelloJNICpp sayHello "<<std::endl;
    sayHello();  // invoke C++ function
}
