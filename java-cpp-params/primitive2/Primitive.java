public class Primitive {
    static {
        System.loadLibrary("arithmetic");
    }
    
    private native int add(int x, int y);
    private native int sub(int x, int y);
    private native int mul(int x, int y);
    private native int div(int x, int y);

    public static void main(String[] args) {
        Primitive primitive = new Primitive();
        System.out.println("Begin---");
        int x = 10;
        int y = 5;
        System.out.println("add(10, 5)=" + primitive.add(10, 5) );
        System.out.println("sub(10, 5)=" + primitive.sub(10, 5) );
        System.out.println("mul(10, 5)=" + primitive.mul(10, 5) );
        System.out.println("div(10, 5)=" + primitive.div(10, 5) );
        System.out.println("---End");
    }
}
