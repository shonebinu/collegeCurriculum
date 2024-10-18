import java.util.Scanner;

class PrimeException extends Exception {
  private int number;

  PrimeException(int number) {
    this.number = number;
  }

  public String toString() {
    return "PrimeException: " + number + " is a prime number";
  }
}

class Primeex {
  void prime(int number) throws PrimeException {
    boolean isPrime = true;
    for (int i = 2; i <= number / 2; i++) {
      if (number % i == 0) {
        isPrime = false;
        break;
      }
    }
    if (isPrime) {
      throw new PrimeException(number);
    } else {
      System.out.println("Not Prime");
    }
  }
}

class PrimeTest {
  public static void main(String[] args) {
    Primeex checker = new Primeex();
    Scanner scanner = new Scanner(System.in);
    try {
      System.out.println("Enter the number");
      int number = scanner.nextInt();
      checker.prime(number);
    } catch (PrimeException e) {
      System.out.println(e);
    }
  }
}
