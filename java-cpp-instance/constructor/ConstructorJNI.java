public class ConstructorJNI {
    static {
        System.loadLibrary("constructorJNI");
    }
    // Native method that calls back the constructor and return the constructed object.
    // Return an Integer object with the given int.
    private native Integer getIntegerObject(int number);
    public static void main(String[] args) {
        int x = 100;
        System.out.println("In Java, the number x=" + x);
        Integer  y = new ConstructorJNI().getIntegerObject(x);
        System.out.println("In Java, the number x=" + x + " y=" +y);

    }
}
