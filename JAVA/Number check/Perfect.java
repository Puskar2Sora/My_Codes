import java.util.Scanner;
class Perfect{
    public static void main(String as[])
    {
      int i,n,s=0;
      Scanner ob = new Scanner(System.in);
      System.out.print("Enter the no.=");
      n=ob.nextInt();
      for(i=1;i<n;i++)
      {
        if(n%i==0)
            s+=i;
      }
      if(n==s)
        System.out.print("Perfect");
      else
        System.out.print("Not");
    }
}