class Room {
    int length, breadth;

    Room(int x) {
        length = breadth = x;
    }

    Room(int x, int y) {
        length = x;
        breadth = y;
    }

    int area() {
        return length * breadth;
    }
}

class ConstructorOverloading {
    public static void main(String args[]) {
        Room room1 = new Room(20);
        Room room2 = new Room(20, 10);

        int area1 = room1.area();
        int area2 = room2.area();

        System.out.println("Area of Square room: " + area1);
        System.out.println("Area of Rectangular room: " + area2);
    }
}
