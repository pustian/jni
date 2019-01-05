public class InstanceVariableJNI {
    static {
        System.loadLibrary("instanceVariableJNI");
    }
    // Instance variables
    private static int number = 88;
    private static String message = "Hello from Java";
    private native void modifyInstanceVariable();

    public static void main(String args[]) {
        InstanceVariableJNI instanceVariableJNI = new InstanceVariableJNI();
        System.out.println("number=" + InstanceVariableJNI.number);
        System.out.println("message=" + InstanceVariableJNI.message);
        instanceVariableJNI.modifyInstanceVariable();
        System.out.println("After call function modifyInstanceVariable");
        System.out.println("number=" + InstanceVariableJNI.number);
        System.out.println("message=" + InstanceVariableJNI.message);
    }
}
