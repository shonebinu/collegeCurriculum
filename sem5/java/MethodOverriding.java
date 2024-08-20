import java.util.Scanner;

class Square {
    void area(double sideLength) {
        double area = sideLength * sideLength;
        System.out.println("Area of Square: " + area);
    }
}

class Cube extends Square {
    void area(double sideLength) {
        super.area(sideLength);

        double surfaceArea = 6 * sideLength * sideLength;
        System.out.println("Surface Area of Cube: " + surfaceArea);
    }
}

class MethodOverriding {
    public static void main(String[] args) {
        Cube cube = new Cube();

        Scanner scanner = new Scanner(System.in);

        double sideLength;

        System.out.print("Enter the side length of the cube (and square): ");
        sideLength = scanner.nextDouble();

        cube.area(sideLength);
    }
}
