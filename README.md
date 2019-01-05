https://www.ibm.com/developerworks/java/tutorials/j-jni/j-jni.html
https://www3.ntu.edu.sg/home/ehchua/programming/java/JavaNativeInterface.html

java-cpp java 调用c/c++接口
java-ccpp java 调用c/c++接口 c/c++混合调用
java-cpp-package java package， c--include src

java-cpp-params/primitive  基本类型参数传递
java-cpp-params/primitive2
java-cpp-params/String    传递String参数。注意CPP和C调用有点区别
java-cpp-params/Array     传递基本类型数组

### 反射
java-cpp-instance/variable 变量
java-cpp-instance/static-variable static 变量
java-cpp-instance/method 方法





cpp-java c++ 调用java接口

.
├── cpp-java
│   ├── README.md
│   ├── sample.cpp
│   └── Sample.java
├── java-cpp
│   ├── HelloJNI.c
│   ├── HelloJNI.cpp
│   ├── HelloJNI.h
│   ├── HelloJNI.java
│   └── README.md
├── java-ccpp
│   ├── HelloJNICpp.cpp
│   ├── HelloJNICpp.h
│   ├── HelloJNICppImpl.cpp
│   ├── HelloJNICppImpl.h
│   ├── HelloJNICpp.java
│   └── README.md
├── java-cpp-instance
│   ├── constructor
│   │   ├── ConstructorJNI.c
│   │   ├── ConstructorJNI.class
│   │   ├── ConstructorJNI.h
│   │   ├── ConstructorJNI.java
│   │   └── README.md
│   ├── method
│   │   ├── InstanceCallBackMethod.c
│   │   ├── InstanceCallBackMethod.class
│   │   ├── InstanceCallBackMethod.h
│   │   ├── InstanceCallBackMethod.java
│   │   ├── libinstanceCallBackMethod.so
│   │   └── README.md
│   ├── static-variable
│   │   ├── InstanceVariableJNI.c
│   │   ├── InstanceVariableJNI.class
│   │   ├── InstanceVariableJNI.h
│   │   ├── InstanceVariableJNI.java
│   │   ├── libinstanceVariableJNI.so
│   │   └── README.md
│   └── variable
│       ├── InstanceVariableJNI.c
│       ├── InstanceVariableJNI.class
│       ├── InstanceVariableJNI.h
│       ├── InstanceVariableJNI.java
│       └── README.md
├── java-cpp-package
│   ├── HelloJNI.c
│   ├── include
│   │   └── pustian_HelloJNI.h
│   ├── pustian
│   │   └── HelloJNI.java
│   └── README.md
├── java-cpp-params
│   ├── array
│   │   ├── ArrayJNI.c
│   │   ├── ArrayJNI.class
│   │   ├── ArrayJNI.h
│   │   ├── ArrayJNI.java
│   │   └── libarrayJNI.so
│   ├── primitive
│   │   ├── Primitive.c
│   │   ├── Primitive.h
│   │   ├── Primitive.java
│   │   └── README.md
│   ├── primitive2
│   │   ├── include
│   │   │   └── Primitive.h
│   │   ├── Primitive.java
│   │   ├── README.md
│   │   └── src
│   │       └── Primitive.c
│   └── string
│       ├── README.md
│       ├── StringJNI.c
│       ├── StringJNI.class
│       ├── StringJNI.h
│       └── StringJNI.java
└── README.md
