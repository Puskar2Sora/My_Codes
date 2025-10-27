import java.util.Scanner;
class Greatest{
    public static void main(String[]xd){
        int a,b,c;
        Scanner ob=new Scanner(System.in);
        System.out.println("Enter 1st NUmber :");
        a=ob.nextInt();
        System.out.println("Enter 2nd Number :");
        b=ob.nextInt();
        System.out.println("Enter 3rd Number :");
        c=ob.nextInt();
        if(a>b && a>c)
         System.out.println("1st is Greater");
        else if(b>c)
         System.out.println("2nd is Greater"); 
        else
         System.out.println("3rd is Greater"); 
        ob.close(); 
    }
}
