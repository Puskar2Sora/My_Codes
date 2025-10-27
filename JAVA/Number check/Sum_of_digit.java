import java.util.Scanner;
public class Sum_of_digit{
    public static void main(String a[])
    {
        int s=0,k;
        Scanner ob=new Scanner(System.in);
        System.out.print("Enter the no.=");
        k=ob.nextInt();
        for(;k>0;k/=10)
        {
         s+=k%10;
        }
        System.out.print(""+s);

    }
}
