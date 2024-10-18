/*
 * Write a Java Program to calculate the Result. Result should consist of name,
 * seatno, date, center number and marks of semester three exam. Create a User
 * Defined Exception class MarksOutOfBoundsException, If Entered marks of any
 * subject is greater than 100 or less than 0, and then program should create a
 * user defined Exception of type.
 */

class MarksOutOfBoundsException extends Exception {
  int marks;

  MarksOutOfBoundsException(int marks) {
    this.marks = marks;
  }

  public String toString() {
    return "MarksOutOfBoundsException: " + marks + " is out of bounds (0-100)";
  }
}

class Result {
  String name;
  int seatno;
  String date;
  int centerNumber;
  int[] marks = new int[5];
  int currentIndex = 0;

  Result(String name, int seatno, String date, int centerNumber) {
    this.name = name;
    this.seatno = seatno;
    this.date = date;
    this.centerNumber = centerNumber;
  }

  void push(int mark) throws MarksOutOfBoundsException {
    if (mark < 0 || mark > 100)
      throw new MarksOutOfBoundsException(mark);
    if (currentIndex < 5)
      marks[currentIndex++] = mark;
  }

  void displayResult() {
    System.out.println(name + ", " + seatno + ", " + date + ", " + centerNumber);
    for (int i = 0; i < currentIndex; i++)
      System.out.println("Subject " + (i + 1) + ": " + marks[i]);
  }
}

class ExamResultCalculator {
  public static void main(String[] args) {
    Result result = new Result("John", 1001, "01/01/2024", 5001);
    try {
      result.push(75);
      result.push(80);
      result.push(90);
      result.push(85);
      result.push(110); // This will throw an exception
    } catch (MarksOutOfBoundsException e) {
      System.out.println(e);
    }
    result.displayResult();
  }
}
