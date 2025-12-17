import java.util.Scanner;
class Node {
    int data;
    Node next;

    Node(int data) {
        this.data = data;
        this.next = null;
    }
}
class SinglyLinkedList {
    Node head;
    public void createList(int data) {
        head = new Node(data);
        System.out.println("List created with first node: " + data);
    }
    public void traverseList() {
        if (head == null) {
            System.out.println("List is empty.");
            return;
        }
        Node temp = head;
        System.out.print("List elements: ");
        while (temp != null) {
            System.out.print(temp.data + " -> ");
            temp = temp.next;
        }
        System.out.println("NULL");
    }
    public void insertAtBeginning(int data) {
        Node newNode = new Node(data);
        newNode.next = head;
        head = newNode;
    }
    public void insertAtEnd(int data) {
        Node newNode = new Node(data);
        if (head == null) {
            head = newNode;
            return;
        }
        Node temp = head;
        while (temp.next != null) {
            temp = temp.next;
        }
        temp.next = newNode;
    }
    public void insertAtSpecific(int data, int pos) {
        if (pos <= 0) {
            System.out.println("Invalid position.");
            return;
        }
        Node newNode = new Node(data);
        if (pos == 1) {
            newNode.next = head;
            head = newNode;
            return;
        }
        Node temp = head;
        for (int i=1 ; temp!=null && i<pos-1 ; i++) {
            temp = temp.next;
        }
        if (temp == null) {
            System.out.println("Position out of range.");
            return;
        }
        newNode.next = temp.next;
        temp.next = newNode;
    }
    public void deleteAtBeginning() {
        if (head == null) {
            System.out.println("List is empty.");
            return;
        }
        System.out.println("Deleted: " + head.data);
        head = head.next;
    }
    public void deleteAtEnd() {
        if (head == null) {
            System.out.println("List is empty.");
            return;
        }
        if (head.next == null) {
            System.out.println("Deleted: " + head.data);
            head = null;
            return;
        }
        Node temp = head;
        while (temp.next.next != null) {
            temp = temp.next;
        }
        System.out.println("Deleted: " + temp.next.data);
        temp.next = null;
    }
    public void deleteAtSpecific(int pos) {
        if (head == null || pos <= 0) {
            System.out.println("Invalid operation.");
            return;
        }
        if (pos == 1) {
            System.out.println("Deleted: " + head.data);
            head = head.next;
            return;
        }
        Node temp = head;
        for (int i = 1; temp != null && i < pos - 1; i++) {
            temp = temp.next;
        }
        if (temp == null || temp.next == null) {
            System.out.println("Position out of range.");
            return;
        }
        System.out.println("Deleted: " + temp.next.data);
        temp.next = temp.next.next;
    }
}

public class Single_linked_list{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        SinglyLinkedList list = new SinglyLinkedList();
        int choice, data, pos;

        while (true) {
            System.out.println("\n--- Singly Linked List Operations ---");
            System.out.println("1. Create List");
            System.out.println("2. Traverse List");
            System.out.println("3. Insert at Beginning");
            System.out.println("4. Insert at End");
            System.out.println("5. Insert at Specific Position");
            System.out.println("6. Delete at Beginning");
            System.out.println("7. Delete at End");
            System.out.println("8. Delete at Specific Position");
            System.out.println("9. Exit");
            System.out.print("Enter your choice: ");
            choice = sc.nextInt();

            switch (choice) {
                case 1:
                    System.out.print("Enter first element: ");
                    data = sc.nextInt();
                    list.createList(data);
                    break;
                case 2:
                    list.traverseList();
                    break;
                case 3:
                    System.out.print("Enter element to insert: ");
                    data = sc.nextInt();
                    list.insertAtBeginning(data);
                    break;
                case 4:
                    System.out.print("Enter element to insert: ");
                    data = sc.nextInt();
                    list.insertAtEnd(data);
                    break;
                case 5:
                    System.out.print("Enter element to insert: ");
                    data = sc.nextInt();
                    System.out.print("Enter position: ");
                    pos = sc.nextInt();
                    list.insertAtSpecific(data, pos);
                    break;
                case 6:
                    list.deleteAtBeginning();
                    break;
                case 7:
                    list.deleteAtEnd();
                    break;
                case 8:
                    System.out.print("Enter position to delete: ");
                    pos = sc.nextInt();
                    list.deleteAtSpecific(pos);
                    break;
                case 9:
                    System.out.println("Exiting...");
                    sc.close();
                    return;
                default:
                    System.out.println("Invalid choice!");
            }
        }
    }
}