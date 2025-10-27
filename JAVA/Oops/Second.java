import java.util.Scanner;
class Second
{
    int i,s=0;
    public void factor(int n)
    {
         for(i=1;i<=n;i++)
         {
             if(n%i==0)
             {
                System.out.print(i+" ");
                 s=s+i;
            }
         }
         System.out.print(" = "+s);
    }
    public static void main(String[] args) {
       Scanner ob =new Scanner(System.in);        
       System.out.print("Enter the No. = ");
       int x=ob.nextInt();
       Second ob1= new Second();
       ob1.factor(x);//calling
       ob.close();
    }
}