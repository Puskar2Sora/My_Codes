//WAP to calc. area and circumference of circle
import java.util.Scanner;
class Circ {
    public static void main(String[] as) {
        double r,ar,pr;
        Scanner ob = new Scanner(System.in);
        System.out.print("Enter the Radius = ");
        r=ob.nextDouble();
        ar=3.14*r*r;
        pr=2*3.14*r;
        System.out.print("Area = "+ar+" Circumferences = "+pr);
        ob.close();
    }
}