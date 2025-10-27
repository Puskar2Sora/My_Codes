import java.util.Scanner;
class Factor{
    public static void main(String as[])
    {
        int i,n;
      Scanner ob =new Scanner(System.in);
      System.out.print("Eneter the No.=");
      n=ob.nextInt();
      System.out.println("Factors Are ===");
      for(i=2;i<n;i++)
      {
        if(n%i==0)
          System.out.print("  "+i);
      }
    }
}