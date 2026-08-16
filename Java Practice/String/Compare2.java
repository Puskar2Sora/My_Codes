import java.util.Scanner;
class Compare2
{
    public static void main(String[] kalo)
    {
        String x,y;
        Scanner la=new Scanner(System.in);
        System.out.print("Enter the 1st String=");
        x=la.nextLine();
        System.out.print("Enter the 2nd String=");
        y=la.nextLine();
        if(x.equalsIgnoreCase(y))
            System.out.print("String Matched");
        else
            System.out.print("String Not matched");
        la.close();
    }
}
