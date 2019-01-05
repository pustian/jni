vim InstanceVariableJNI.java
javac -h . InstanceVariableJNI.java
vim InstanceVariableJNI.c
gcc -fPIC -I"$JAVA_HOME/include" -I"$JAVA_HOME/include/linux" -I./include -shared -o libinstanceVariableJNI.so InstanceVariableJNI.c
java -Djava.library.path=. InstanceVariableJNI

