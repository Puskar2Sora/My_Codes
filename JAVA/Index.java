import java.util.Scanner;

public class Index{
     public static void main(String[] args) {
        //userInfo.dataRead();
        Scanner input = new Scanner(System.in);
        System.out.println("=============================\n|    Welcome to The Bank    |\n=============================");
        System.out.println("  * For Login type 1");
        System.out.print("  * For Register type 2\n----------------------\nEnter your choice: ");
        byte choice;
        do {
            try {

                choice = input.nextByte();
                if (choice == (byte) 1) {
                    System.out.println("log in page");
                    break;
                } else if (choice == (byte) 2) {
                    System.out.println("register page");
                    break;
                } else {
                    System.out.print("⚠ Invalid  choice \nEnter your choice again: ");
                }

            } catch (Exception e) {
                System.out.println( " "+e.getMessage());
            }
        } while (true);

     }



}