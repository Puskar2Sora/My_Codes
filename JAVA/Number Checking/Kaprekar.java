import java.util.Scanner;

public class Kaprekar {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int c = 0, sum = 0;
        System.out.print("Enter the number = ");
        int num = sc.nextInt();
        int square = num * num;
        System.out.println(num + "^2 = " + square);

        for (int i = num; i > 0; i /= 10) {
            c++;
        }

        int split = (int) Math.pow(10, c );

        for (int j = square; j > 0; j /= split) {
            sum += j % split;
        }
        if (sum == num) {
            System.out.println(" It's a Kaprekar Number");
        } else {
            System.out.println(" It's Not a Kaprekar Number");
        }
        sc.close();
    }
}