import java.util.Scanner;

class Account {
  private int accountNumber, balance;
  private String name;
  private static final int INITIAL_BALANCE = 1000;

  Scanner scanner = new Scanner(System.in);

  public void add() {
    System.out.println("Enter your account name");
    name = scanner.nextLine();
    System.out.println("Enter your Account Number");
    accountNumber = scanner.nextInt();
    balance = INITIAL_BALANCE;
  }

  public void deposit() {
    System.out.println("Enter the amount that you wish to deposit");
    int amount = scanner.nextInt();
    balance += amount;
    System.out.println("Transaction Successful");
    System.out.println("New Balance: " + balance);
  }

  public void withdraw() {
    System.out.println("Enter the amount to be withdrawn");
    int amount = scanner.nextInt();
    if (amount > balance) {
      System.out.println("TRANSACTION FAILED \nInsufficient Balance");
    } else {
      System.out.println("TRANSACTION SUCCESSFUL");
      balance -= amount;
      System.out.println("New Balance: " + balance);
    }
  }

  public void show() {
    System.out.println("Account Holder's name: " + name);
    System.out.println("Account Number: " + accountNumber);
    System.out.println("Balance: " + balance);
  }

  public int getAccountNumber() {
    return accountNumber;
  }
}

class Bank {
  public static void main(String[] args) {
    Scanner scanner = new Scanner(System.in);
    Account[] accounts = new Account[20];
    int accountCount = 0;

    while (true) {
      System.out.println("MENU\n1.CREATE ACCOUNT\n2.DEPOSIT\n3.WITHDRAW\n4.DISPLAY DETAILS\n5.EXIT\nEnter your choice");
      int choice = scanner.nextInt();

      switch (choice) {
        case 1:
          if (accountCount < accounts.length) {
            accounts[accountCount] = new Account();
            accounts[accountCount].add();
            accountCount++;
          } else {
            System.out.println("Maximum number of accounts reached.");
          }
          break;
        case 2:
        case 3:
        case 4:
          System.out.println("Enter your account number");
          int accountNumber = scanner.nextInt();
          Account account = findAccount(accounts, accountCount, accountNumber);
          if (account != null) {
            if (choice == 2)
              account.deposit();
            else if (choice == 3)
              account.withdraw();
            else
              account.show();
          } else {
            System.out.println("You have entered an Invalid account Number");
          }
          break;
        case 5:
          System.exit(0);
        default:
          System.out.println("Invalid choice. Please try again.");
      }
    }
  }

  private static Account findAccount(Account[] accounts, int count, int accountNumber) {
    for (int i = 0; i < count; i++) {
      if (accounts[i].getAccountNumber() == accountNumber) {
        return accounts[i];
      }
    }
    return null;
  }
}