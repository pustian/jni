vim Sample.java
javac Sample
vim sample.cpp

# cp $JAVA_HOME/jre/lib/amd64/server/libjvm.so /usr/local/lib/
# g++  -I"$JAVA_HOME/include" -I"$JAVA_HOME/include/linux"  sample.cpp -ljvm -L$JAVA_HOME/jre/lib/amd64/server
g++  -I"$JAVA_HOME/include" -I"$JAVA_HOME/include/linux"  sample.cpp
