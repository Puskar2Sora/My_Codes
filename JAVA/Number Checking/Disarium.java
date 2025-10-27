/*
   Disarium No.
   89  -->  9^2  +8^1  =89
   135   --> 5^3+3^2 +1^1=135
 */
import java.util.Scanner;
class Disarium
 {
      public static void main(String[] as) {
          int n,s=0,c=0,p,x,rem=0;
          Scanner ob =new Scanner(System.in);
          System.out.print("Enter the No. = ");
          n=ob.nextInt();
          for(x=n;n>0;n=n/10)
          {
              c++;
          }
          for(n=x;n>0;n=n/10)
          {
               rem=n%10;
               p=(int)Math.pow((double)rem,(double)c--);
               s=s+p;
          }       
          if(s==x)
            System.out.print(x+" is Disarium No. ");
          else
            System.out.print(x+" is NOT Disarium No. ");
    }
}