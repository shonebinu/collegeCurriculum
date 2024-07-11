public class SumOfNNumbers {
    public static void main(String[] args) {
        int sum = 0;
        for (int i = 0; i < args.length; i++) {
        // for (String arg : args) { // arg is the element
            sum += Integer.parseInt(args[i]);
        }
        System.out.println("Sum of numbers: " + sum);
    }
}

