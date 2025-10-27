import java.util.*;
public class ArrayListDemo {
    public static void main(String[] args) 
    {
        Scanner ob =new Scanner(System.in);
        System.out.print("Enter the String = ");
        String a=ob.nextLine();
        System.out.println("String = "+a);

        // Creating an ArrayList of Strings
        ArrayList<String> names = new ArrayList<String>();
        // Adding elements
        names.add(a);
        names.add("Prity");
        names.add("Abhinandan");
        names.add("Arpan");
        System.out.println("Initial List: " + names);
        // Adding an element at a specific index
        names.add(1, "Asif");
        System.out.println("After adding Asif' at index 1: " + names);
        // Accessing an element
        String x= names.get(2);
        System.out.println("Third Element: " + x);

        // Modifying an element
        names.set(2, "Suvranil");
        System.out.println("After modifying index 2: " + names);
 
        // Removing an element by index
        names.remove(2);
        System.out.println("After removing element at index 2: " + names);

        // Removing an element by value
        names.remove("Asif");
        System.out.println("After removing 'Asif': " + names);
        // Checking if the list contains an element
       boolean y = names.contains("Arpana");
        System.out.println("Contains 'Arpana': " + y);

        // Iterating over elements using a for-each loop
        System.out.println("Iterating using for-each loop:");
        for (String name : names) {
            System.out.println(name);
        }

        // Iterating using a lambda expression
         System.out.println("Iterating using lambda expression:");
        names.forEach(name -> System.out.println(name));

        // Checking the size of the list
         int size = names.size();
        System.out.println("Size of the list: " + size);

        // Clearing the list
        names.clear();
        System.out.println("After clearing the list: " + names);
       // names.add("Sohana");
        //System.out.println("List = "+names);
        // Checking if the list is empty
        boolean isEmpty = names.isEmpty();
        System.out.println("Is the list empty: " + isEmpty);
          
    }
}