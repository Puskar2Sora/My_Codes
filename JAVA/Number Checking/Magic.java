import java.util.Scanner;

public class Magic {
    public static void main(String[]xd) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the number: ");
        int num = sc.nextInt();
        int n = num;
        while (num >= 10) {
            int sum = 0;
            for (; num > 0; num /= 10) {
                sum += num % 10;
            }
            num = sum;
        }
        if (num == 1) {
            System.out.println("It is a Magic Number!");
        } else {
            System.out.println("It is Not a Magic Number.");
        }
        sc.close();
    }
}