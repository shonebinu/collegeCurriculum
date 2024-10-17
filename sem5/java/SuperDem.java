import java.util.Scanner;

class Alpha {
    int x;

    Alpha(int a) {
        x = a;
    }

    void alphaShow() {
        System.out.println("value of x = " + x);
    }
}

class Beta extends Alpha {
    float p, q;

    Beta(int a, float b, float c) {
        super(a);
        p = b;
        q = c;
    }

    void betaShow() {
        System.out.println("value of p = " + p);
        System.out.println("value of q = " + q);
    }
}

class SuperDem {
    public static void main(String[] args) {
        Beta object = new Beta(2, 3.5f, 6.3f);
        object.alphaShow();
        object.betaShow();
    }
}