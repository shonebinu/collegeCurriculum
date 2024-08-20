class PalindromeCheck {
    public static void main(String[] args) {
        int number = Integer.parseInt(args[0]);

        int originalNumber = number;
        int reversedNumber = 0;

        while (number != 0) {
            int digit = number % 10;
            reversedNumber = reversedNumber * 10 + digit;
            number = number / 10;
        }

        if (originalNumber == reversedNumber) {
            System.out.println("Palindrome");
        } else {
            System.out.println("Not a Palindrome");
        }
    }
}
