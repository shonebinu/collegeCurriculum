class ThreadA extends Thread {
  public void run() {
    for (char ch = 'a'; ch <= 'z'; ch++) {
      System.out.print(ch + " ");
    }
  }
}

class ThreadB extends Thread {
  public void run() {
    for (char ch = 'A'; ch <= 'Z'; ch++) {
      System.out.print(ch + " ");
    }
  }
}

class ThreadExample1 {
  public static void main(String[] args) {
    ThreadA lowercaseThread = new ThreadA();
    ThreadB uppercaseThread = new ThreadB();
    lowercaseThread.start();
    uppercaseThread.start();
  }
}
