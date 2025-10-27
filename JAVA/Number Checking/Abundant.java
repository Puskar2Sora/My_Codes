import java.util.Scanner;
public class Abundant{
    public static void main(String[]xd) {
        int sum = 0;
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the number = ");
        int num = sc.nextInt();
        for (int i = 1; i < num; i++) {
            if (num % i == 0)
                sum += i;
        }
        if (num < sum)
            System.out.println("It's a Abundant Number");
        else
            System.out.println("It's Not a Abundant Number");
        sc.close();
    }
}