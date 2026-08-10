import java.util.Scanner;
class Compare
{
    public static void main(String[] args)
    {
        String s,k;
        Scanner kb= new Scanner(System.in);
        System.out.println("Enter the 1st String= ");
        s=kb.nextLine();
        System.out.print("Enter the 1st String = ");
        k=kb.nextLine();
        s=s.toLowerCase();
        k=k.toLowerCase();
        if(s.equals(k))
            System.out.print("String Matched");
        else
            System.out.print("String Mismatched");
        kb.close();
    }
}