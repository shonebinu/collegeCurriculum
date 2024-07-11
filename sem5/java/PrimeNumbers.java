public class PrimeNumbers {
    public static void main(String[] args) {
        int limit = Integer.parseInt(args[0]);
        System.out.println("Prime numbers up to " + limit + ": ");
        for (int num = 2; num <= limit; num++) {
            if (isPrime(num)) {
                System.out.print(num + " ");
            }
        }
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

