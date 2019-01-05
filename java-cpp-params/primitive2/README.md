javac -h include Primitive.java

# gcc -fPIC -I"$JAVA_HOME/include" -I"$JAVA_HOME/include/linux" -I./include -shared -o libarithmetic.so  src/*
gcc -fPIC -I"$JAVA_HOME/include" -I"$JAVA_HOME/include/linux" -I./include -shared -o libarithmetic.so  src/Primitive.c

java -Djava.library.path=. Primitive
