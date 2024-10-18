class MyException extends Exception {
  private int number;

  MyException(int number) {
    this.number = number;
  }

  public String toString() {
    return "MyException: " + number + " is less than zero";
  }
}

class Testex {
  void sum(int a, int b) throws MyException {
    if (a < 10)
      throw new MyException(a);
    else
      System.out.println(a + b);
  }
}

class ExpTest {
  public static void main(String[] args) {
    Testex calculator = new Testex();
    try {
      calculator.sum(-10, 20);
    } catch (MyException e) {
      System.out.println(e);
    }
  }
}
