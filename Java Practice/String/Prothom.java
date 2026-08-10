import java.util.Scanner;
class Prothom
{
    public static void main(String[] args)
    {
        String s;
        Scanner kb= new Scanner(System.in);
        System.out.println("Enter the String= ");
        s=kb.nextLine();
        System.out.print("String = "+s);
        System.out.println("String length = "+s.length());
        kb.close();
    }
}