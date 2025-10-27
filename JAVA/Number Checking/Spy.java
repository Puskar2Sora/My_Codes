import java.util.Scanner;
public class Spy {
    public static void main(String[]xd) {
        Scanner sc = new Scanner(System.in);
        int sum = 0, pro = 1;
        System.out.print("Enter the number = ");
        int num = sc.nextInt();
        for (int i = num; i > 0; i /= 10) {
            sum += i % 10;
            pro *= i % 10;
        }
        if (sum == pro) {
            System.out.println("Spy number");
        } else {
            System.out.println("Spy number");
        }
        sc.close();
    }
}