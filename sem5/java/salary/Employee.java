import salarypack.*;
import java.util.Scanner;

class Employee {
  public static void main(String[] args) {
    Scanner scanner = new Scanner(System.in);
    System.out.println("Enter the number of employees");
    int numEmployees = scanner.nextInt();
    scanner.nextLine();

    Salary[] employees = new Salary[numEmployees];

    for (int i = 0; i < numEmployees; i++) {
      System.out.println("Enter the name");
      String name = scanner.nextLine();
      System.out.println("Enter the employee id");
      int id = scanner.nextInt();
      System.out.println("Enter the basic pay");
      int basicPay = scanner.nextInt();
      scanner.nextLine();

      employees[i] = new Salary(name, id, basicPay);
    }

    for (Salary employee : employees) {
      employee.display();
    }
  }
}