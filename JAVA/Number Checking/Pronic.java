import java.util.Scanner;

public class Pronic {
    public static void main(String[]xd) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the number = ");
        int num = sc.nextInt();
        boolean pronic = false;
        for (int i = 1; i <= num; i++) {
            if (i * (i + 1) == num) {
                pronic = true;
            }
        }
        if (pronic) {
            System.out.println("It is a Pronic Number ");
        } else {
            System.out.println("It is Not a Pronic Number ");
        }
        sc.close();
    }
}