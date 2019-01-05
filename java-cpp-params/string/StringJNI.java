public class StringJNI {
    static {
        System.loadLibrary("stringJNI");
    }

    private native String sayHello(String string);

    public static void main(String[] args) {
        String result= new StringJNI().sayHello("tianpusen");
        System.out.println("result="+result);
    }
}
