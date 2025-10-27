import java.util.Scanner;
class Spyy{
    public static void main(String as[])
    {
        int s=0,n,r=0,l,y=1;
        Scanner ob=new Scanner(System.in);
        System.out.print("Enter the no.=");
        n=ob.nextInt();
        for(;n!=0;n=n/10)
        {
          l=n%10;
          s=s+l;
          y=y*l;
          r=r*10+l;
        }
        System.out.print( s==y ? "Spy":"Not");
    }
}