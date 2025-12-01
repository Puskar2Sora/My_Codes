import java.util.*;
public class Count {
   static void countSort(int arr[], int n) {

    // 1) Find max value to know size of count array
    int max = arr[0];
    for(int i=1;i<n;i++)
        if(arr[i] > max) max = arr[i];

    // 2) Create count array & initialize all to 0
    int count[] = new int[max+1];

    // 3) Count frequency of each element
    for(int i=0;i<n;i++)
        count[arr[i]]++;

    // 4) Convert count[] to cumulative frequency
    for(int i=1;i<=max;i++)
        count[i] += count[i-1];

    // 5) Output array for sorted result
    int output[] = new int[n];

    // 6) Build sorted array (right-to-left to maintain stability)
    for(int i=n-1;i>=0;i--){
        output[count[arr[i]] - 1] = arr[i];
        count[arr[i]]--;
    }

    // 7) Copy back into original array
    for(int i=0;i<n;i++)
        arr[i] = output[i];
}

  public static void main(String[] args) {
        Scanner kb = new Scanner(System.in);

        System.out.print("Enter the Length of the array: ");
        int n = kb.nextInt();
        int a[] = new int[n];

        for(int i=0;i<n;i++){
            System.out.print("a["+i+"] = ");
            a[i] = kb.nextInt();
        }

        System.out.println("\nBefore Sorting:");
        for(int x : a) System.out.print(x+" ");

        countSort(a,n);  

        System.out.println("\n\nAfter Counting Sort:");
        for(int x : a) System.out.print(x+" ");
    }
}
