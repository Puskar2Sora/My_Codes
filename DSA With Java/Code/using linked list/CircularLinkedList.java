import java.util.Scanner;
class Node {
    int data;
    Node next;

    Node(int data) {
        this.data = data;
        this.next = null;
    }
}
public class CircularLinkedList {
    private Node head = null;
    private Node tail = null;

    public void createList() {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter number of nodes: ");
        int n = sc.nextInt();

        for (int i = 1; i <= n; i++) {
            System.out.print("Enter data for node " + i + ": ");
            int data = sc.nextInt();
            insertAtEnd(data);
        }
        System.out.println("Circular linked list created successfully!");
        sc.close();
    }
    public void traverseList() {
        if (head == null) {
            System.out.println("List is empty.");
            return;
        }
        Node current = head;
        System.out.print("Circular Linked List: ");
     do {
            System.out.print(current.data + " ");
            current = current.next;
        } while (current != head);
        System.out.println();
    }
    public void insertAtBeginning(int data) {
        Node newNode = new Node(data);
        if (head == null) {
            head = newNode;
            tail = newNode;
            tail.next = head;
        } else {
            newNode.next = head;
            head = newNode;
            tail.next = head;
        }
    }
    public void insertAtEnd(int data) {
        Node newNode = new Node(data);
        if (head == null) {
            head = newNode;
            tail = newNode;
            tail.next = head;
        } else {
            tail.next = newNode;
            tail = newNode;
            tail.next = head;
        }
    }
    public void insertAtSpecific(int pos, int data) {
        if (pos <= 0) {
            System.out.println("Invalid position!");
            return;
        }

        Node newNode = new Node(data);

        if (pos == 1) {
            insertAtBeginning(data);
            return;
        }

        Node temp = head;
        int count = 1;
        while (count < pos - 1 && temp.next != head) {
            temp = temp.next;
            count++;
        }
        newNode.next = temp.next;
        temp.next = newNode;
        if (temp == tail) {
            tail = newNode;
        }
    }
    public void deleteAtBeginning() {
        if (head == null) {
            System.out.println("List is empty. Nothing to delete.");
            return;
        }

        if (head == tail) {
            head = tail = null;
        } else {
            head = head.next;
            tail.next = head;
        }
        System.out.println("Node deleted from beginning.");
    }
    public void deleteAtEnd() {
        if (head == null) {
            System.out.println("List is empty. Nothing to delete.");
            return;
        }

        if (head == tail) {
            head = tail = null;
        } else {
            Node temp = head;
            while (temp.next != tail) {
                temp = temp.next;
            }
            temp.next = head;
            tail = temp;
        }
        System.out.println("Node deleted from end.");
    }
    public void deleteAtSpecific(int pos) {
        if (head == null) {
            System.out.println("List is empty. Nothing to delete.");
            return;
        }

        if (pos <= 0) {
            System.out.println("Invalid position!");
            return;
        }

        if (pos == 1) {
            deleteAtBeginning();
            return;
        }

        Node temp = head;
        Node prev = null;
        int count = 1;

        while (count < pos && temp.next != head) {
            prev = temp;
            temp = temp.next;
            count++;
        }

        if (count != pos) {
            System.out.println("Position out of range!");
            return;
        }

        prev.next = temp.next;

        if (temp == tail) {
            tail = prev;
        }

        System.out.println("Node deleted from position " + pos + ".");
    }
    public void search(int key) {
        if (head == null) {
            System.out.println("List is empty.");
            return;
        }

        Node temp = head;
        int pos = 1;
        do {
            if (temp.data == key) {
                System.out.println("Element " + key + " found at position " + pos + ".");
                return;
            }
            temp = temp.next;
            pos++;
        } while (temp != head);

        System.out.println("Element " + key + " not found in the list.");
    }
    public static void main(String[] args) {
        CircularLinkedList list = new CircularLinkedList();
        Scanner sc = new Scanner(System.in);
        int choice, data, pos;

        do {
            System.out.println("\n====== Circular Linked List Menu ======");
            System.out.println("\t1. Create List");
            System.out.println("\t2. Traverse List");
            System.out.println("\t3. Insert at Beginning");
            System.out.println("\t4. Insert at End");
            System.out.println("\t5. Insert at Specific Position");
            System.out.println("\t6. Delete at Beginning");
            System.out.println("\t7. Delete at End");
            System.out.println("\t8. Delete at Specific Position");
            System.out.println("\t9. Search an Element");
            System.out.println("\t10. Exit");
            System.out.print("\tEnter your choice: ");
            choice = sc.nextInt();

            switch (choice) {
                case 1:
                    list.createList();
                    break;
                case 2:
                    list.traverseList();
                    break;
                case 3:
                    System.out.print("Enter data: ");
                    data = sc.nextInt();
                    list.insertAtBeginning(data);
                    break;
                case 4:
                    System.out.print("Enter data: ");
                    data = sc.nextInt();
                    list.insertAtEnd(data);
                    break;
                case 5:
                    System.out.print("Enter position: ");
                    pos = sc.nextInt();
                    System.out.print("Enter data: ");
                    data = sc.nextInt();
                    list.insertAtSpecific(pos, data);
                    break;
                case 6:
                    list.deleteAtBeginning();
                    break;
                case 7:
                    list.deleteAtEnd();
                    break;
                case 8:
                    System.out.print("Enter position: ");
                    pos = sc.nextInt();
                    list.deleteAtSpecific(pos);
                    break;
                case 9:
                    System.out.print("Enter element to search: ");
                    data = sc.nextInt();
                    list.search(data);
                    break;
                case 10:
                    System.out.println("Exiting program...");
                    break;
                default:
                    System.out.println("Invalid choice! Please try again.");
            }
        } while (choice != 10);
        sc.close();
    }
}