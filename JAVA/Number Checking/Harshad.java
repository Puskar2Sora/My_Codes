import java.util.Scanner;
public class Harshad{
    public static void main(String[] xd) {
        Scanner sc = new Scanner(System.in);
        int sum = 0;
        System.out.print("Enter the nuber = ");
        int num = sc.nextInt();
        for (int i = num; i > 0; i /= 10) {
            sum += i % 10;
        }
        if (num % sum == 0) {
            System.out.println("It's a Harshad number");
        } else {
            System.out.println("It's Not a Harshad number");
        }
        sc.close();
    }
}