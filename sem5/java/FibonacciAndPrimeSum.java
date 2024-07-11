public class FibonacciAndPrimeSum {
    public static void main(String[] args) {
        int limit = Integer.parseInt(args[0]);
        
        int a = 0, b = 1, sum = 0;
        System.out.print("Fibonacci series up to " + limit + ": ");
        
        while (a <= limit) {
            System.out.print(a + " ");
            if (isPrime(a)) {
                sum += a;
            }
            int c = a + b;
            a = b;
            b = c;
        }
        
        System.out.println("\nSum of prime numbers in Fibonacci series up to " + limit + ": " + sum);
    }
    
    public static boolean isPrime(int num) {
        if (num <= 1) {
            return false;
        }
        for (int i = 2; i <= Math.sqrt(num); i++) {
            if (num % i == 0) {
                return false;
            }
        }
        return true;
    }
}
