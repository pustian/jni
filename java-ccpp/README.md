vim HelloJNICpp.java
javac -h . HelloJNICpp.java
vim HelloJNICpp.cpp              # c的代码
vim HelloJNICppImpl.h
vim HelloJNICppImpl.cpp

g++ -fPIC -I"$JAVA_HOME/include" -I"$JAVA_HOME/include/linux" -shared -o libhello.so HelloJNICpp.c HelloJNICppImpl.cpp
java -Djava.library.path=. HelloJNICpp




x86_64-w64-mingw32-g++ -I"%JAVA_HOME%\include" -I"%JAVA_HOME%\include\win32" -shared -o hello.dll HelloJNICpp.c HelloJNICppImpl.cpp
