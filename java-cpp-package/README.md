mkdir pustian
vim pustian/HelloJNI.java
javac -h include pustian/HelloJNI.java

vim HelloJNI.c

gcc -fPIC -I"$JAVA_HOME/include" -I"$JAVA_HOME/include/linux" -shared -o libhello.so HelloJNI.c

java -Djava.library.path=. pustian.HelloJNI

# HelloJNI.c 中include
gcc -fPIC -I"$JAVA_HOME/include" -I"$JAVA_HOME/include/linux" -I./include -shared -o libhello.so HelloJNI.c

// for Windows 64-bit JDK
> x86_64-w64-mingw32-gcc -I"%JAVA_HOME%\include" -I"%JAVA_HOME%\include\win32" -shared -o hello.dll HelloJNI.c
