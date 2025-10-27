import java.util.Scanner;
class Str {
    public static void main(String[] as) {
        String x;
        Scanner ob =new Scanner(System.in);
        System.out.print("Enter the String = ");
        x=ob.nextLine();
        System.out.println("String = "+x);
        System.out.print("Length = "+x.length());
        ob.close();
    }
}