import java.util.Scanner;

class RectArea {
    int length, width, area;
    Scanner input = new Scanner(System.in);

    void area() {
        System.out.println("Enter the length of the rectangle:");
        length = input.nextInt();
        System.out.println("Enter the width of the rectangle:");
        width = input.nextInt();
        area = length * width;
        System.out.println("The Area = " + area);
    }
}

class RectVol extends RectArea {
    int height, volume;

    void vol() {
        System.out.println("Enter the height:");
        height = input.nextInt();
        volume = length * width * height;
        System.out.println("The Volume = " + volume);
    }
}

class Rectangle {
    public static void main(String[] args) {
        RectVol box = new RectVol();
        box.area();
        box.vol();
    }
}
