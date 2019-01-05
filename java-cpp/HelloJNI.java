public class HelloJNI {
    static {
        // Load native library hello.dll (Windows) or libhello.so (Unixes) at runtime
        // This library contains a native method called sayHello()
        System.loadLibrary("helloC");
    }
    
    // Declare an instance native method sayHello() which receives no parameter and returns void
    private native void sayHello();

    public static void main(String[] args) {
       new HelloJNI().sayHello();  // Create an instance and invoke the native method 
    }
}
