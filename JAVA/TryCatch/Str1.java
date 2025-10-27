import java.util.InputMismatchException;
import java.util.Scanner;

class Str1 {
    public static void main(String[] args) {
        try {
            Scanner ob = new Scanner(System.in);
            System.out.print("Enter the String = ");
            String x = ob.nextLine();
            for (int i = 0; i <= x.length(); i++)
                System.out.print(x.charAt(i));
        } catch (StringIndexOutOfBoundsException e) {
            System.out.println("\nString out of Range");
        }
        /*
         * catch(InputMismatchException e)
         * {
         * System.out.println("\nInput Mismatch Exception !!");
         * }
         */
        catch (Exception e) {
            System.out.println("\nErrors !!!!!!!!!!!");
        }
    }
}