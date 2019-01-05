// In "linux/jni_mh.h" - machine header which is machine dependent
typedef long            jint;
typedef __int64         jlong;
typedef signed char     jbyte;
 
// In "jni.h"
typedef unsigned char   jboolean;
typedef unsigned short  jchar;
typedef short           jshort;
typedef float           jfloat;
typedef double          jdouble;
typedef jint            jsize;


gcc -fPIC -I"$JAVA_HOME/include" -I"$JAVA_HOME/include/linux" -I./include -shared -o libstringJNI.so StringJNI.c
java -Djava.library.path=. StringJNI


The JNI Environment (accessed via the argument JNIEnv*) provides functions for the conversion:

To get a C-string (char*) from JNI string (jstring), invoke method const char* GetStringUTFChars(JNIEnv*, jstring, jboolean*).
To get a JNI string (jstring) from a C-string (char*), invoke method jstring NewStringUTF(JNIEnv*, char*).

// UTF-8 String (encoded to 1-3 byte, backward compatible with 7-bit ASCII)
// Can be mapped to null-terminated char-array C-string
const char * GetStringUTFChars(JNIEnv *env, jstring string, jboolean *isCopy);
   // Returns a pointer to an array of bytes representing the string in modified UTF-8 encoding.
void ReleaseStringUTFChars(JNIEnv *env, jstring string, const char *utf);
   // Informs the VM that the native code no longer needs access to utf.
jstring NewStringUTF(JNIEnv *env, const char *bytes);
   // Constructs a new java.lang.String object from an array of characters in modified UTF-8 encoding.
jsize GetStringUTFLength(JNIEnv *env, jstring string);
   // Returns the length in bytes of the modified UTF-8 representation of a string.
void GetStringUTFRegion(JNIEnv *env, jstring str, jsize start, jsize length, char *buf);
   // Translates len number of Unicode characters beginning at offset start into modified UTF-8 encoding 
   // and place the result in the given buffer buf.
  
// Unicode Strings (16-bit character)
const jchar * GetStringChars(JNIEnv *env, jstring string, jboolean *isCopy);
   // Returns a pointer to the array of Unicode characters
void ReleaseStringChars(JNIEnv *env, jstring string, const jchar *chars);
   // Informs the VM that the native code no longer needs access to chars.
jstring NewString(JNIEnv *env, const jchar *unicodeChars, jsize length);
   // Constructs a new java.lang.String object from an array of Unicode characters.
jsize GetStringLength(JNIEnv *env, jstring string);
   // Returns the length (the count of Unicode characters) of a Java string.
void GetStringRegion(JNIEnv *env, jstring str, jsize start, jsize length, jchar *buf);
   // Copies len number of Unicode characters beginning at offset start to the given buffer buf
