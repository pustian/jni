vim ConstructorJNI.java
javac -h . ConstructorJNI.java
vim ConstructorJNI.c
gcc -fPIC -I"$JAVA_HOME/include" -I"$JAVA_HOME/include/linux" -I./include -shared -o libinstanceCallBackMethod.so InstanceCallBackMethod.c
java -Djava.library.path=. InstanceCallBackMethod


ConstructorJNI.c 中类型使用中Signature
javap -s -p ConstructorJNI
