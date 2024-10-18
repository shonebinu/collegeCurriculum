import java.util.Scanner;

class ArmstrongException extends Exception {
  private int number;

  ArmstrongException(int number) {
    this.number = number;
  }

  public String toString() {
    return "ArmstrongException: " + number + " is an Armstrong Number";
  }
}

class Armstrongex {
  void armstrong(int number) throws ArmstrongException {
    int originalNumber = number;
    int sum = 0;
    while (number > 0) {
      int digit = number % 10;
      sum += (digit * digit * digit);
      number /= 10;
    }
    if (originalNumber == sum)
      throw new ArmstrongException(originalNumber);
    else
      System.out.println("Not an Armstrong Number");
  }
}

class ArmstrongTest {
  public static void main(String[] args) {
    Armstrongex checker = new Armstrongex();
    Scanner scanner = new Scanner(System.in);

    try {
      System.out.println("Enter the Number");
      int number = scanner.nextInt();
      checker.armstrong(number);
    } catch (ArmstrongException e) {
      System.out.println(e);
    }
  }
}