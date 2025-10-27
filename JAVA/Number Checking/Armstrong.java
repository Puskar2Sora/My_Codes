import java.util.Scanner;

public class Armstrong{
    public static void main(String[]xd) {
        int digits = 0, rem = 0, sum = 0;
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the no. = ");
        int num = sc.nextInt();
        for (int c = num; c > 0; c /= 10) {
            digits++;
        }
        for (int n = num; n > 0; n /= 10) {
            rem = n % 10;
            sum += Math.pow(rem, digits);
        }
        if (num == sum)
            System.out.println("It's a Armstrong Number");
        else
            System.out.println("It's Not a Armstrong Number");

        sc.close();

    }
}