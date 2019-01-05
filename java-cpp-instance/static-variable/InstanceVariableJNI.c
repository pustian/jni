#include "InstanceVariableJNI.h"

JNIEXPORT void JNICALL Java_InstanceVariableJNI_modifyInstanceVariable(JNIEnv * env, jobject thisObj) {
   // Get a reference to this object's class
   jclass thisClass = (*env)->GetObjectClass(env, thisObj);
 
   // int
   // Get the Field ID of the instance variables "number"
   jfieldID fidNumber = (*env)->GetStaticFieldID(env, thisClass, "number", "I");
   if (NULL == fidNumber) return;
 
   // Get the int given the Field ID
   jint number = (*env)->GetStaticIntField(env, thisObj, fidNumber);
   printf("In C, the int is %d\n", number);
 
   // Change the variable
   number *= 10;
   (*env)->SetStaticIntField(env, thisObj, fidNumber, number);
   
     
   // Get the Field ID of the instance variables "message"
   jfieldID fidMessage = (*env)->GetStaticFieldID(env, thisClass, "message", "Ljava/lang/String;");
   if (NULL == fidMessage) return;
 
   // String
   // Get the object given the Field ID
   jstring message = (*env)->GetStaticObjectField(env, thisObj, fidMessage);
 
   // Create a C-string with the JNI String
   const char *cStr = (*env)->GetStringUTFChars(env, message, NULL);
   if (NULL == cStr) return;
 
   printf("In C, the string is %s\n", cStr);
   (*env)->ReleaseStringUTFChars(env, message, cStr);
 
   // Create a new C-string and assign to the JNI string
   message = (*env)->NewStringUTF(env, "Hello from C");
   if (NULL == message) return;
 
   // modify the instance variables
   (*env)->SetStaticObjectField(env, thisObj, fidMessage, message);
}
