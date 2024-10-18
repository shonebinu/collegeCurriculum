/*
Create a class called Matrix which contains a 2d integer array. Include the following member functions
  a. To read the matrix,
  b. To display the matrix ,
  c. check whether the given matrix is symmetric or not
*/

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

  boolean isSymmetric() {
    if (array.length != array[0].length)
      return false;

    for (int i = 0; i < array.length; i++)
      for (int j = i + 1; j < array[0].length; j++)
        if (array[i][j] != array[j][i])
          return false;

    return true;
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

    boolean isSymmetric = m.isSymmetric();

    if (isSymmetric)
      System.out.println("The given matrix is symmetric");
    else
      System.out.println("The given matrix is not symmetric");
  }
}