import java.util.Scanner;
class Factorial
{
    public static void main(String as[])
    {
        int f=1,i,n;
        Scanner ob=new Scanner(System.in);
        System.out.print("Enter the no.=");
        n=ob.nextInt();
        for(i=1;i<=n;i++)
        {
            f*=i;
        }
        System.out.print(""+f);
    }
}