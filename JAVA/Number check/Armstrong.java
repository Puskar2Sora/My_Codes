import java.util.Scanner;
class Armstrong{
    public static void main(String as[])
    {
    int n,x,r=0,s=0,l=0;
    Scanner ob=new Scanner(System.in);
    System.out.print("Enter the No.="); 
    n=ob.nextInt();
    double k=0;
    for(x=n;n>0;n/=10)
    {
        l=n%10;
        k = Math.pow(l,3);
        s=s+(int)k;
        r=r*10+l;  
    }
    System.out.println(x==s ? "Armstrong":"Not Armstrong");
  }
}