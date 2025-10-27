/*WAP to print the acromatic string 
    input ---> asif chowdhury
    output- A.C.
*/
import java.util.Scanner;
class Acromatic
{
    public static void main(String as[])
    {
        String x;
        Scanner ob=new Scanner(System.in);
        System.out.print("Enter the String = ");
        x=ob.nextLine();
        x=" "+x.toUpperCase();
        System.out.println("String ="+x);
      //  System.out.print("String ="+x.charAt(1));
        for(int i=0;i<x.length();i++)
        {
            if(x.charAt(i)==' ')
               System.out.print(x.charAt(i+1)+".");
        }
    }
}