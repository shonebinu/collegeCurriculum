public class SumDivisibleBy7 {
    public static void main(String[] args) {
        int sum = 0;
        System.out.print("Numbers divisible by 7 between 100 and 200: ");
        for (int i = 101; i < 200; i++) {
            if (i % 7 == 0) {
                System.out.print(i + " ");
                sum += i;
            }
        }
        System.out.println("\nSum of these numbers: " + sum);
    }
}

