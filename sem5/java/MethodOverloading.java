import java.util.Scanner;

class Shape {
    void volume(double sideLength) {
        double v = sideLength * sideLength * sideLength;
        System.out.println("Volume of Cube: " + v);
    }

    void volume(double length, double breadth, double height) {
        double v = length * breadth * height;
        System.out.println("Volume of Cuboid: " + v);
    }

    void volume(double radius, double height) {
        double v = 3.14 * radius * radius * height;
        System.out.println("Volume of Cylinder: " + v);
    }
}

class MethodOverloading {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        Shape shape = new Shape();

        System.out.print("Enter the side length of the cube: ");
        double cubeSideLength = scanner.nextDouble();
        shape.volume(cubeSideLength);

        System.out.print("Enter the length, breadth, and height of the cuboid: ");
        double cuboidLength = scanner.nextDouble();
        double cuboidBreadth = scanner.nextDouble();
        double cuboidHeight = scanner.nextDouble();
        shape.volume(cuboidLength, cuboidBreadth, cuboidHeight);

        System.out.print("Enter the radius and height of the cylinder: ");
        double cylinderRadius = scanner.nextDouble();
        double cylinderHeight = scanner.nextDouble();
        shape.volume(cylinderRadius, cylinderHeight);
    }
}
