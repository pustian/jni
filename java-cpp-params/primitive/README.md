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



gcc -fPIC -I"$JAVA_HOME/include" -I"$JAVA_HOME/include/linux"  -shared -o libarithmetic.so Primitive.c
java -Djava.library.path=. Primitive

