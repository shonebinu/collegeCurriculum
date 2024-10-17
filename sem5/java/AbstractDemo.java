import java.util.Scanner;

abstract class Perfect {
    abstract void special(int limit);
}

class Square extends Perfect {
    void special(int limit) {
        int square = 1;
        System.out.println("The perfect squares are:");
        for (int i = 2; square <= limit; i++) {
            System.out.println(square);
            square = i * i;
        }
    }
}

class AbstractDemo {
    public static void main(String[] args) {
        int limit;
        Scanner input = new Scanner(System.in);
        Square squareFinder = new Square();
        System.out.println("Enter the limit:");
        limit = input.nextInt();
        squareFinder.special(limit);
    }
}
