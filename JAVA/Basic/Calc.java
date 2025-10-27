import java.util.Scanner;
class Calc{
  public static void main(String as[]){
    int a,b,s;
    Scanner ob = new Scanner(System.in);
    System.out.println("Enter 1st No. ");
    a=ob.nextInt();
    System.out.println("Enter 2nd No. ");
    b=ob.nextInt();
    s=a+b;
    System.out.println("Addition = "+s);
    System.out.println("Substraction ="+(a-b));
    System.out.println("Multiplication ="+(a*b));
    System.out.println("Division ="+(a/b));
    ob.close();
  }
}