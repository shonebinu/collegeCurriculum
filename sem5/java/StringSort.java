import java.util.Scanner;

public class StringSort {
  private String[] strings;

  public void readStrings() {
    Scanner scanner = new Scanner(System.in);
    System.out.print("Enter number of strings: ");
    int count = scanner.nextInt();
    scanner.nextLine();

    strings = new String[count];
    System.out.println("Enter the Strings one by one:");
    for (int i = 0; i < count; i++) {
      strings[i] = scanner.nextLine();
    }
  }

  public void sortStrings() {
    for (int i = 0; i < strings.length; i++) {
      for (int j = i + 1; j < strings.length; j++) {
        if (strings[i].compareTo(strings[j]) > 0) {
          String temp = strings[i];
          strings[i] = strings[j];
          strings[j] = temp;
        }
      }
    }
  }

  public void displayStrings() {
    System.out.println("Strings in Sorted Order:");
    for (String str : strings) {
      System.out.println(str);
    }
  }

  public static void main(String[] args) {
    StringSort sorter = new StringSort();
    sorter.readStrings();
    sorter.sortStrings();
    sorter.displayStrings();
  }
}