import java.util.Scanner;
class Harsad
{
    public static int Joog(int k)
    {
       int r=0,s=0,l;
       for(;k>0;k/=10)
       {
        l=k%10;
        s=s+l;
        r=r*10+l;
       }
       return s;
    }
    public static void main(String sd[])
    {
        int n;
        Scanner dk=new Scanner(System.in);
        System.out.print("Enter the no.=");
        n=dk.nextInt();
        System.out.print(n % Joog(n)==0?"Harshad":"Not");
    }
}