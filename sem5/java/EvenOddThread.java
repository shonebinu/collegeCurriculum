
class Odd extends Thread {
  public void run() {
    for (int i = 1; i <= 10; i++) {
      if (i % 2 != 0)
        System.out.println("odd no: " + i);
    }
  }
}

class Even implements Runnable {
  public void run() {
    for (int i = 1; i <= 10; i++) {
      if (i % 2 == 0)
        System.out.println("even no: " + i);
    }
  }
}

class EvenOddThread {
  public static void main(String[] args) {
    Odd oddThread = new Odd();
    Even evenRunnable = new Even();
    Thread evenThread = new Thread(evenRunnable);
    oddThread.start();
    evenThread.start();
  }
}