import java.util.Scanner;
class Pprime {
   public static void main(String as[])
   {
    int i,n,f=1;
    Scanner ob =new Scanner(System.in);
    System.out.print("Enter  the no.= ");
    n=ob.nextInt();
    for(i=2;i<n;i++)
      {
         if(n%2==0)
           f++;
      }
      if(f==1)
        System.out.print("Prime");
      else 
       System.out.print("Not Prime");
      ob.close();
   }
}
