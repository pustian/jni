#include <jni.h>
#include<iostream>
#ifdef _WIN32
#define PATH_SEPARATOR ';'
#else
#define PATH_SEPARATOR ':'
#endif

int main() {
    // Declare the variables
    JavaVMOption options[1];
    JNIEnv *env;
    JavaVM *jvm;
    JavaVMInitArgs vm_args;

    // Set the initialization arguments
    options[0].optionString = "-Djava.class.path=.";  // et the classpath
    // memset(&vm_args, 0, sizeof(vm_args));  // Set aside memory for vm_args
    vm_args.version = JNI_VERSION_1_2; 
    vm_args.nOptions = 1; 
    vm_args.options = options; 
    
    // Create the JVM
    long status = JNI_CreateJavaVM(&jvm, (void**)&env, &vm_args);

    if (status != JNI_ERR) {
        // Find and load the Java classes
        jclass cls = env->FindClass("Sample");

        // Find a Java method
        jmethodID method = env->GetStaticMethodID(cls, "intMethod", "(I)I");
        // Call a Java method
        jint square = env->CallStaticIntMethod(cls, method, 5);
        std::cout<<"5 sqrt="<<square<<std::endl;
        

//        jmethodID methodID = env->GetMethodID(cls, "booleanMethod", "(Z)Z");
//        jboolean bool_value = env->GetBoolMethod(cls, methodID, 1);
//        std::cout<<"1 bool_value="<<bool_value<<std::endl;

        jvm->DestroyJavaVM();
    }
    return 0;
}
