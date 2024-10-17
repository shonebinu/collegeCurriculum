import java.util.Scanner;

class StringContainsDemo {

  public static void main(String[] args) {
    Scanner scanner = new Scanner(System.in);

    System.out.println("Enter a string:");
    String inputString = scanner.nextLine();

    int indexOfT = -1;

    for (int charIndex = 0; charIndex < inputString.length(); charIndex++) {
      if (inputString.charAt(charIndex) == 't') {
        indexOfT = charIndex;
        break;
      }
    }

    if (indexOfT >= 0) {
      System.out.println("First match of 't' in string at index: " + indexOfT);
    } else {
      System.out.println("The string does not contain 't'");
    }

  }
}