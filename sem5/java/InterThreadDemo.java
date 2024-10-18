import java.util.Random;

class Num {
  int n;
  boolean flag = false;

  synchronized void numbergeneration() {
    Random r = new Random();
    n = r.nextInt(50);
    System.out.println("Generated Number = " + n);
    flag = true;
    notifyAll();
  }

  synchronized void numbersquare() {
    try {
      while (!flag)
        wait();
    } catch (InterruptedException e) {
      System.out.println("Thread interrupted");
    }
    System.out.println("Square = " + n * n);
  }

  synchronized void numbercube() {
    try {
      while (!flag)
        wait();
    } catch (InterruptedException e) {
      System.out.println("Thread interrupted");
    }
    System.out.println("Cube = " + n * n * n);
  }
}

class Thread1 extends Thread {
  Num n;

  Thread1(Num n) {
    this.n = n;
  }

  public void run() {
    try {
      sleep(100);
    } catch (Exception e) {
    }
    n.numbergeneration();
  }
}

class Thread2 extends Thread {
  Num n;

  Thread2(Num n) {
    this.n = n;
  }

  public void run() {
    n.numbersquare();
  }
}

class Thread3 extends Thread {
  Num n;

  Thread3(Num n) {
    this.n = n;
  }

  public void run() {
    n.numbercube();
  }
}

class InterThreadDemo {
  public static void main(String[] args) {
    Num n = new Num();
    Thread1 t1 = new Thread1(n);
    Thread2 t2 = new Thread2(n);
    Thread3 t3 = new Thread3(n);
    t1.start();
    t2.start();
    t3.start();
  }
}