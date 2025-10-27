import java.util.Scanner;
class Leap{
    public static void main(String[]xd){
        int y;
        Scanner ob= new Scanner(System.in);
        System.out.println("Enter year :");
        y=ob.nextInt();
        if(y%400==0)
          System.out.println("Leap Year");
        else if(y%4==0 && y%100!=0)
          System.out.println("Leap Year");  
        else
          System.out.println("NOt Leap Year"); 
        ob.close();   
    }
}