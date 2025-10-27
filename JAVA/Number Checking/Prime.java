import java.util.Scanner;

public class Prime{
    public static void main(String[]xd) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the number = ");
        int num = sc.nextInt();
        sc.close();
        boolean isPrime = true;
        for (int i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                isPrime = false;
                break;
            }
        }
        if (num < 2) {
            System.out.println("IT is Not a Prime no.");
        } else if (isPrime) {
            System.out.println("It is a Prime no.");
        } else {
            System.out.println("It is Not a Prime no.");
        }
    }
}