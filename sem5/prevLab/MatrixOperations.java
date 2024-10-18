/*
Create a class called Matrix which contains a 2d integer array, m & n (order of matrix)
as data members. Include the following member functions
  a. To read the matrix,
  b. To display the matrix ,
  c. Overload a method product () to find the product of two matrices and to multiply each element of a matrix with a constant value 
*/

import java.util.Scanner;

class Matrix {
  int arr[][];
  int m, n;

  Matrix(int m, int n) {
    this.m = m;
    this.n = n;
    arr = new int[m][n];
  }

  void read() {
    Scanner sc = new Scanner(System.in);
    for (int i = 0; i < m; i++)
      for (int j = 0; j < n; j++)
        arr[i][j] = sc.nextInt();
  }

  void display() {
    for (int i = 0; i < m; i++) {
      for (int j = 0; j < n; j++)
        System.out.print(arr[i][j] + " ");
      System.out.println();
    }
  }

  Matrix product(Matrix b) {
    if (this.n != b.m)
      return null;
    Matrix result = new Matrix(this.m, b.n);
    for (int i = 0; i < this.m; i++)
      for (int j = 0; j < b.n; j++)
        for (int k = 0; k < this.n; k++)
          result.arr[i][j] += this.arr[i][k] * b.arr[k][j];
    return result;
  }

  void product(int constant) {
    for (int i = 0; i < m; i++)
      for (int j = 0; j < n; j++)
        arr[i][j] *= constant;
  }
}

class MatrixOperations {
  public static void main(String[] args) {
    Matrix a = new Matrix(2, 2);
    System.out.println("Enter matrix A:");
    a.read();

    Matrix b = new Matrix(2, 2);
    System.out.println("Enter matrix B:");
    b.read();

    System.out.println("Matrix A:");
    a.display();

    System.out.println("Matrix B:");
    b.display();

    Matrix c = a.product(b);
    if (c != null) {
      System.out.println("Product of A and B:");
      c.display();
    } else {
      System.out.println("Cannot multiply these matrices");
    }

    System.out.println("Matrix A multiplied by 2:");
    a.product(2);
    a.display();
  }
}