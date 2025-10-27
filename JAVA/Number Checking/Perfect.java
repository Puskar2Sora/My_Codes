import java.util.Scanner;
public class Perfect{
    public static void main(String[]xd) {
        Scanner sc = new Scanner(System.in);
        int sum = 0;
        System.out.print("Enter the no. = ");
        int num = sc.nextInt();
        for (int i = 1; i < num; i++) {
            if (num % i == 0) {
                sum += i;
            }
        }
        if (sum == num) {
            System.out.println("It's a Perfect number");
        } else {
            System.out.println("It's Not a Perfect number");
        }
        sc.close();
    }
}