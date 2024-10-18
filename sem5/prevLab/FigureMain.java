/*
 * Create an abstract class called Figure which contains three data members:
 * length, breadth, and height. Include an abstract method to find the area.
 * Figure class also contains concrete methods to read the data members and to
 * display them. Derive two classes Rectangle and Triangle from Figure and
 * override area() to find the area of a rectangle and triangle.
 */

abstract class Figure {
  double length;
  double breadth;
  double height;

  void readData(double length, double breadth, double height) {
    this.length = length;
    this.breadth = breadth;
    this.height = height;
  }

  void displayData() {
    System.out.println("Length: " + length);
    System.out.println("Breadth: " + breadth);
    System.out.println("Height: " + height);
  }

  abstract double area();
}

class Rectangle extends Figure {
  double area() {
    return length * breadth;
  }
}

class Triangle extends Figure {
  double area() {
    return 0.5 * length * breadth;
  }
}

class FigureMan {
  public static void main(String[] args) {
    Rectangle rectangle = new Rectangle();
    rectangle.readData(10, 5, 0);
    System.out.println("Rectangle Details:");
    rectangle.displayData();
    System.out.println("Rectangle Area: " + rectangle.area());

    Triangle triangle = new Triangle();
    triangle.readData(10, 5, 0);
    System.out.println("\nTriangle Details:");
    triangle.displayData();
    System.out.println("Triangle Area: " + triangle.area());
  }
}