import java.util.Scanner;
class Greater{
    public static void main(String[]xd){
        int a,b;
        Scanner ob=new Scanner(System.in);
        System.out.println("Enter 1st NUmber :");
        a=ob.nextInt();
        System.out.println("Enter 2nd Number :");
        b=ob.nextInt();
        if(a>b)
         System.out.println("1st is Greater");
        else
         System.out.println("2nd is Greater"); 
        ob.close(); 
    }
}