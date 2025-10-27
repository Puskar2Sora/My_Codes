import java.util.Scanner;
class First
{
    static int i;
    public static void factor(int n)
    {
         for(i=1;i<=n;i++)
         {
             if(n%i==0)
                System.out.print(i+" ");
         }
    }
    public static void main(String[] args) {
       Scanner ob =new Scanner(System.in);        
       System.out.print("Enter the No. = ");
       int x=ob.nextInt();
       factor(x);//calling
     }
}