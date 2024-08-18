class PalindromeCheck {
    public static void main(String[] args) {
        String original = args[0];

        boolean isPalindrome = true;

        for (int i = 0; i < original.length() / 2; i++) {
            if (original.charAt(i) != original.charAt(original.length() - 1 - i)) {
                isPalindrome = false;
                break;
            }
        }

        if (isPalindrome) {
            System.out.println("Palindrome");
        } else {
            System.out.println("Not a Palindrome");
        }
    }
}
