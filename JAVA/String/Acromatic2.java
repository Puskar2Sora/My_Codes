/*WAP to print the acromatic string 
    input ---> asif chowdhury
    output- A.CHOWDHURY
*/
import java.util.Scanner;
class Acromatic2
{
    public static void main(String as[])
    {
        String x;
        int j=0;
        Scanner ob=new Scanner(System.in);
        System.out.print("Enter the String = ");
        x=ob.nextLine();
        x=x.toUpperCase().trim();
        System.out.println("String ="+x);
        System.out.print(x.charAt(0));
        for(int i=1;i<x.length();i++)
        {
            if(x.charAt(i)==' ')
            {
               System.out.print("."+x.charAt(i+1));
               j=i+1;
            }
            
        }
        for(j=j+1;j<x.length();j++)
            {
                System.out.print(x.charAt(j));
            }
    }
}