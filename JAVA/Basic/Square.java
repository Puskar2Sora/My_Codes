//WAP to calc. area and circumference of circle
import java.util.Scanner;
class Square {
    public static void main(String[] as) {
        double a,ar,pr;
        Scanner ob = new Scanner(System.in);
        System.out.print("Enter the Length = ");
        a=ob.nextDouble();
        ar=a*a;
        pr=4*a;
        System.out.print("Area = "+ar+" Permimeter = "+pr);
        ob.close();
    }
}