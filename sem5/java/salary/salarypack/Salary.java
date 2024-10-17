package salarypack;

public class Salary {
  private int employeeId, basicPay;
  private String name;
  private double totalSalary, hra, da, pf;

  public Salary(String name, int employeeId, int basicPay) {
    this.name = name;
    this.employeeId = employeeId;
    this.basicPay = basicPay;
  }

  public void display() {
    da = basicPay * 0.05;
    hra = basicPay * 0.05;
    pf = basicPay * 0.08;
    totalSalary = basicPay + da + hra - pf;

    System.out.println("************Employee Salary Slip************");
    System.out.println("Name: " + name);
    System.out.println("Employee Id: " + employeeId);
    System.out.println("Basic Salary: " + basicPay);
    System.out.println("HRA: " + hra);
    System.out.println("DA: " + da);
    System.out.println("PF: " + pf);
    System.out.println("Net Pay: " + totalSalary);
  }
}