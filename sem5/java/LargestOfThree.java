public class LargestOfThree {
    public static void main(String[] args) {
        int num1 = 10, num2 = 20, num3 = 15;
        int largest = num1;
        if (num2 > largest)
            largest = num2;
        if (num3 > largest)
            largest = num3;
        System.out.println("Largest number is: " + largest);
    }
}

