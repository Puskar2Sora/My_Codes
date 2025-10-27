//multiple inheritance with more than one interface
import java.util.Scanner;

class A2 {
    int len, br, ar, pr;

    public void input() {
        Scanner ob = new Scanner(System.in);
        System.out.print("Enter the Length = ");
        len = ob.nextInt();
        System.out.print("Enter the Breadth = ");
        br = ob.nextInt();
    }

    public void rect_calc() {
        ar = len * br;
        pr = 2 * (len + br);
    }
}

interface Cir {
    public final double pi = 3.14;

    public void cir_calc(double r);
}

interface Str {
    public void concat();
}

class MPLI2 extends A2 implements Cir, Str {
    double c_ar, c_pr;
    String x, y, z;

    public void cir_calc(double r) {
        c_ar = pi * r * r;
        c_pr = 2 * pi * r;
    }

    public void concat() {
        Scanner ob = new Scanner(System.in);
        System.out.print("Enter the 1st String = ");
        x = ob.nextLine();
        System.out.print("Enter the 2nd String = ");
        y = ob.nextLine();
        z = x + " " + y;
    }

    public void show() {
        System.out.println("Rect. Area = " + ar + " Rect Perimeter = " + pr);
        System.out.println("Circ. Area = " + c_ar + " Circ. Perimeter = " + c_pr);
        System.out.println("String = " + z);
    }

    public static void main(String[] args) {
        MPLI2 ob = new MPLI2();
        ob.input();
        ob.rect_calc();
        Scanner obj = new Scanner(System.in);
        System.out.print("Enter the Radius = ");
        double r = obj.nextDouble();
        ob.cir_calc(r);
        ob.concat();
        ob.show();
    }
}