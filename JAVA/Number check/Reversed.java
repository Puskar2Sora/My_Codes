import java.util.Scanner;
public class Reversed {
    public static void main(String a[])
    { 
        int n,r=0;
        Scanner ob=new Scanner(System.in);
        System.out.print("Enter the no.=");
        n=ob.nextInt();
        for( ;n!=0;n/=10)
        {
            r=(r*10)+(n%10);
        }
        System.out.print("Reverse No. ="+r);
    }
}
