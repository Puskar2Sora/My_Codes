import java.util.Scanner;
    class Buzz{
      public static void main(String xd[]){
        int x;
        Scanner ob=new Scanner(System.in);
        System.out.println("Enter the No.");
        x=ob.nextInt();
        if(x%10==7 && x%7==0)
          System.out.println("Buzz Number");
        else
          System.out.println("Not Buzz Number");
        ob.close(); 
      }
    }