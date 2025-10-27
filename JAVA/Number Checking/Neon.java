import java.util.Scanner;

public class Neon {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the number = ");
        int num = sc.nextInt();
        int Square = (int) Math.pow(num, 2), sum = 0;
        System.out.println("Square of " + num + " is " + Square);
        for (int i = Square; i > 0; i /= 10) {
            sum += (i % 10);
        }
        if (sum == num) {
            System.out.println("It's a Neon Number");
        } else {
            System.out.println("It's Not a Neon Number");
        }
        sc.close();
    }
}