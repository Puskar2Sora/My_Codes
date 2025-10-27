//Multi level inheritance
import java.util.Scanner;

class Parent1 {
    int a, b, s;

    public void input() {
        Scanner ob = new Scanner(System.in);
        System.out.print("Enter the 1st no. = ");
        a = ob.nextInt();
        System.out.print("Enter the 2nd no. = ");
        b = ob.nextInt();
    }

    public void add() {
        s = a + b;
    }
}

class Child1 extends Parent1 {
    int sub;

    public void subtract() {
        sub = a - b;
    }
}

class Child2 extends Child1 {
    int m;

    public void multi() {
        m = a * b;
    }
}

class MLI extends Child2 {
    int d;

    public void division() {
        d = a / b;
    }

    public void show() {
        System.out.println("Addition = " + s);
        System.out.println("Subtraction = " + sub);
        System.out.println("Multiplication = " + m);
        System.out.println("Division = " + d);
    }

    public static void main(String[] args) {
        Derived ob = new Derived();
        ob.input();
        ob.division();
        ob.subtract();
        ob.add();
        ob.multi();
        ob.show();
    }
}
