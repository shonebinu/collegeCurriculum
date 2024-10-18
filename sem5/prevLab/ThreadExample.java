/*
Write multithreaded program to print lowercase letters and uppercase letters from two different threads with suitable delay. 
*/

class ThreadA extends Thread {
  public void run() {
    try {
      for (char ch = 'a'; ch <= 'z'; ch++) {
        System.out.print(ch + " ");
        Thread.sleep(100); // 100 milliseconds delay
      }
    } catch (InterruptedException e) {
      System.out.println("ThreadA interrupted");
    }
  }
}

class ThreadB extends Thread {
  public void run() {
    try {
      for (char ch = 'A'; ch <= 'Z'; ch++) {
        System.out.print(ch + " ");
        Thread.sleep(100); // 100 milliseconds delay
      }
    } catch (InterruptedException e) {
      System.out.println("ThreadB interrupted");
    }
  }
}

class ThreadExample {
  public static void main(String[] args) {
    ThreadA lowercaseThread = new ThreadA();
    ThreadB uppercaseThread = new ThreadB();
    lowercaseThread.start();
    uppercaseThread.start();
  }
}
