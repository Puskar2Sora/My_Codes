import java.util.Scanner;
class Palindrome{
    public static void main(String a[])
    {
        int r=0,n,x;
        Scanner ob=new Scanner(System.in);
        System.out.print("Enter the no.=");
        n=ob.nextInt();
        for(x=n;n>0;n/=10)
            r=r*10+(n%10);
        System.out.print( x==r ? "Palindrome No.":"Not Palindrome No.");
    }
}