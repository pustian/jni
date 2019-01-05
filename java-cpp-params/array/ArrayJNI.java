public class ArrayJNI {
    static {
        System.loadLibrary("arrayJNI");
    }
    // Declare a native method sumAndAverage() that receives an int[] and
    //  return a double[2] array with [0] as sum and [1] as average
    private native double[] sumAndAverage(int[] numbers);
    public static void main(String[] args) {
        System.out.println("Begin===");
        int num[] = {1, 3, 5, 7,9};
        double[] sumAverage = new ArrayJNI(). sumAndAverage(num); 
        System.out.println("sum="+sumAverage[0]+" double="+sumAverage[1]);
        System.out.println("===end");
    }
}
