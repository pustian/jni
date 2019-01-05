public class InstanceVariableJNI {
    static {
        System.loadLibrary("instanceVariableJNI");
    }
    // Instance variables
    private int number = 88;
    private String message = "Hello from Java";
    private native void modifyInstanceVariable();

    public static void main(String args[]) {
        InstanceVariableJNI instanceVariableJNI = new InstanceVariableJNI();
        System.out.println("number=" + instanceVariableJNI.number);
        System.out.println("message=" + instanceVariableJNI.message);
        instanceVariableJNI.modifyInstanceVariable();
        System.out.println("After call function modifyInstanceVariable");
        System.out.println("number=" + instanceVariableJNI.number);
        System.out.println("message=" + instanceVariableJNI.message);
    }
}
