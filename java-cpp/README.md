Write a Java Class HelloJNI.java that uses C/C++ Codes
1. vim HelloJNI.java
2. javac HelloJNI.java && javah -jni HelloJNI   < jdk8
   javac -h . HelloJNI.java                     jdk8
3. vim HelloC.c
4. gcc -fPIC -I"$JAVA_HOME/include" -I"$JAVA_HOME/include/linux" -shared -o libhelloC.so HelloJNI.c    c
   g++ -fPIC -I"$JAVA_HOME/include" -I"$JAVA_HOME/include/linux" -shared -o libhelloC.so HelloJNI.cpp  c++
5. java -Djava.library.path=. HelloJNI


windows 
> x86_64-w64-mingw32-gcc -I"%JAVA_HOME%\include" -I"%JAVA_HOME%\include\win32" -shared -o hello.dll HelloJNI.c

You can also compile and link in two steps:
// Compile-only "HelloJNI.c" with -c flag. Output is "HElloJNI.o"
> x86_64-w64-mingw32-gcc -c -I"%JAVA_HOME%\include" -I"%JAVA_HOME%\include\win32" HelloJNI.c
// Link "HelloJNO.o" into shared library "hello.dll"
> x86_64-w64-mingw32-gcc -shared -o hello.dll HelloJNI.o
