/*
 * Create an interface “CreditCardInterface” with methods to viewCreditAmount,
 * viewPin, changePin, useCard, and payBalance. Create a class Customer (name,
 * card number, pin, creditAmount – initialized to 0). Implement methods
 * viewCreditAmount, viewPin, changePin, and payBalance of the interface. From
 * Customer, create classes RegularCardHolder (maxCreditLimit) and
 * GoldCardHolder (String specialPrivileges) and define the remaining methods of
 * the interface.
 */

interface CreditCardInterface {
  double viewCreditAmount();

  int viewPin();

  void changePin(int newPin);

  boolean useCard(double amount);

  void payBalance(double amount);
}

class Customer implements CreditCardInterface {
  String name;
  String cardNumber;
  int pin;
  double creditAmount;

  Customer(String name, String cardNumber, int pin) {
    this.name = name;
    this.cardNumber = cardNumber;
    this.pin = pin;
    this.creditAmount = 0;
  }

  public double viewCreditAmount() {
    return creditAmount;
  }

  public int viewPin() {
    return pin;
  }

  public void changePin(int newPin) {
    pin = newPin;
  }

  public void payBalance(double amount) {
    creditAmount -= amount;
  }

  public boolean useCard(double amount) {
    return false;
  }
}

class RegularCardHolder extends Customer {
  double maxCreditLimit;

  RegularCardHolder(String name, String cardNumber, int pin, double maxCreditLimit) {
    super(name, cardNumber, pin);
    this.maxCreditLimit = maxCreditLimit;
  }

  public boolean useCard(double amount) {
    if (creditAmount + amount <= maxCreditLimit) {
      creditAmount += amount;
      return true;
    }
    return false;
  }
}

class GoldCardHolder extends Customer {
  String specialPrivileges;

  GoldCardHolder(String name, String cardNumber, int pin, String specialPrivileges) {
    super(name, cardNumber, pin);
    this.specialPrivileges = specialPrivileges;
  }

  public boolean useCard(double amount) {
    creditAmount += amount;
    return true;
  }
}

class CreditCardDemo {
  public static void main(String[] args) {
    RegularCardHolder regular = new RegularCardHolder("John", "1234-5678", 1234, 5000);
    GoldCardHolder gold = new GoldCardHolder("Alice", "8765-4321", 5678, "Lounge Access");

    // Demo Regular Card
    System.out.println("Regular Card Tests:");
    System.out.println("Initial balance: " + regular.viewCreditAmount());
    System.out.println("Purchase 3000: " + regular.useCard(3000));
    System.out.println("New balance: " + regular.viewCreditAmount());
    System.out.println("Purchase 3000: " + regular.useCard(3000)); // Should fail
    regular.payBalance(1000);
    System.out.println("After payment: " + regular.viewCreditAmount());

    // Demo Gold Card
    System.out.println("\nGold Card Tests:");
    System.out.println("Initial balance: " + gold.viewCreditAmount());
    System.out.println("Purchase 10000: " + gold.useCard(10000)); // Should succeed
    System.out.println("New balance: " + gold.viewCreditAmount());
    gold.changePin(9999);
    System.out.println("New PIN: " + gold.viewPin());
  }
}