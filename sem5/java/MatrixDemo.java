import java.util.Scanner;

class Matrix {
  int array[][];

  Matrix(int rows, int cols) {
    array = new int[rows][cols];
  }

  void read() {
    Scanner sc = new Scanner(System.in);
    System.out.println("Enter matrix elements: ");
    for (int i = 0; i < array.length; i++)
      for (int j = 0; j < array[i].length; j++)
        array[i][j] = sc.nextInt();
  }

  void display() {
    System.out.println("MATRIX");
    for (int i = 0; i < array.length; i++) {
      for (int j = 0; j < array[i].length; j++)
        System.out.print(array[i][j] + " ");
      System.out.println("");
    }
  }

  void tranpose() {
    System.out.println("TRANPOSE");
    for (int i = 0; i < array[0].length; i++) {
      for (int j = 0; j < array.length; j++)
        System.out.print(array[j][i] + " ");
      System.out.println("");
    }
  }
}

class MatrixDemo {
  public static void main(String args[]) {
    Scanner sc = new Scanner(System.in);

    System.out.print("Enter rows and columns: ");
    int rows = sc.nextInt();
    int cols = sc.nextInt();

    Matrix m = new Matrix(rows, cols);

    m.read();
    m.display();
    m.tranpose();
  }
}