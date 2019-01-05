vim InstanceCallBackMethod.java
javac -h . InstanceCallBackMethod.java
vim InstanceCallBackMethod.c
gcc -fPIC -I"$JAVA_HOME/include" -I"$JAVA_HOME/include/linux" -I./include -shared -o libinstanceCallBackMethod.so InstanceCallBackMethod.c
java -Djava.library.path=. InstanceCallBackMethod


InstanceCallBackMethod.c 中类型使用中Signature
javap -s -p InstanceCallBackMethod
