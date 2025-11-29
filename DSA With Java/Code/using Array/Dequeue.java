import java.util.Scanner;

public class Dequeue {
    static final int MAX = 5;
    static int[] dequeArr = new int[MAX];
    static int left = -1;
    static int right = -1;
    static Scanner sc = new Scanner(System.in);

    static void insertRight() {
        int addedItem;
        if ((left == 0 && right == MAX - 1) || (left == right + 1)) {
            System.out.println("Queue Overflow");
            return;
        }
        if (left == -1) {
            left = 0;
            right = 0;
        } else {
            if (right == MAX - 1)
                right = 0;
            else
                right = right + 1;
        }
        System.out.print("Input the element for adding in queue : ");
        addedItem = sc.nextInt();
        dequeArr[right] = addedItem;
    }

    static void insertLeft() {
        int addedItem;
        if ((left == 0 && right == MAX - 1) || (left == right + 1)) {
            System.out.println("Queue Overflow");
            return;
        }
        if (left == -1) {
            left = 0;
            right = 0;
        } else {
            if (left == 0)
                left = MAX - 1;
            else
                left = left - 1;
        }
        System.out.print("Input the element for adding in queue : ");
        addedItem = sc.nextInt();
        dequeArr[left] = addedItem;
    }

    static void deleteLeft() {
        if (left == -1) {
            System.out.println("Queue Underflow");
            return;
        }
        System.out.println("Element deleted from queue is : " + dequeArr[left]);
        if (left == right) {
            left = -1;
            right = -1;
        } else if (left == MAX - 1)
            left = 0;
        else
            left = left + 1;
    }

    static void deleteRight() {
        if (left == -1) {
            System.out.println("Queue Underflow");
            return;
        }
        System.out.println("Element deleted from queue is : " + dequeArr[right]);
        if (left == right) {
            left = -1;
            right = -1;
        } else if (right == 0)
            right = MAX - 1;
        else
            right = right - 1;
    }

    static void displayQueue() {
        int frontPos = left, rearPos = right;
        if (left == -1) {
            System.out.println("Queue is empty");
            return;
        }
        System.out.println("Queue elements :");
        if (frontPos <= rearPos) {
            while (frontPos <= rearPos) {
                System.out.print(dequeArr[frontPos] + " ");
                frontPos++;
            }
        } else {
            while (frontPos <= MAX - 1) {
                System.out.print(dequeArr[frontPos] + " ");
                frontPos++;
            }
            frontPos = 0;
            while (frontPos <= rearPos) {
                System.out.print(dequeArr[frontPos] + " ");
                frontPos++;
            }
        }
        System.out.println();
    }

    static void inputQue() {
        int choice;
        do {
            System.out.println("1.Insert at right");
            System.out.println("2.Insert at left");
            System.out.println("3.Delete from left");
            System.out.println("4.Delete from right");
            System.out.println("5.Display");
            System.out.println("6.Quit");
            System.out.print("Enter your choice : ");
            choice = sc.nextInt();

            switch (choice) {
                case 1 -> insertRight();
                case 2 -> insertLeft();
                case 3 -> deleteLeft();
                case 4 -> deleteRight();
                case 5 -> displayQueue();
                case 6 -> {}
                default -> System.out.println("Wrong choice");
            }
        } while (choice != 6);
    }

    static void outputQue() {
        int choice;
        do {
            System.out.println("1.Insert at right");
            System.out.println("2.Insert at left");
            System.out.println("3.Delete from left");
            System.out.println("4.Delete from right");
            System.out.println("5.Display");
            System.out.println("6.Quit");
            System.out.print("Enter your choice : ");
            choice = sc.nextInt();

            switch (choice) {
                case 1 -> insertRight();
                case 2 -> insertLeft();
                case 3 -> deleteLeft();
                case 4 -> deleteRight();
                case 5 -> displayQueue();
                case 6 -> {}
                default -> System.out.println("Wrong choice");
            }
        } while (choice != 6);
    }

    public static void main(String[] args) {
        int choice;
        System.out.println("1.Input restricted dequeue");
        System.out.println("2.Output restricted dequeue");
        System.out.print("Enter your choice : ");
        choice = sc.nextInt();

        switch (choice) {
            case 1 -> inputQue();
            case 2 -> outputQue();
            default -> System.out.println("Wrong choice");
        }
    }
}