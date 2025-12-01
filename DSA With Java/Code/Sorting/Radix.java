import java.util.*;

public class Radix {
    public static void main(String[] args) {
        Scanner kb = new Scanner(System.in);

        System.out.print("Enter the Length of The array: ");
        int n = kb.nextInt();
        int a[] = new int[n];

        for(int i=0;i<n;i++){
            System.out.print("a["+i+"] = ");
            a[i] = kb.nextInt();
        }

        radixx(a,n);

        System.out.print("\nAfter sorting the Array:\n");
        for(int i:a) System.out.print(i+" ");
    }

    static void radixx(int a[], int n){
        int max = a[0];

        // Get maximum element
        for(int i=1;i<n;i++)
            if(a[i] > max) 
                max = a[i];
        // Apply counting sort for every digit (LSD Radix Sort)
        for(int exp=1; max/exp > 0; exp*=10)
            countSort(a,n,exp);
    }

    // Counting Sort used inside Radix
    static void countSort(int a[], int n, int exp){
        int output[] = new int[n];
        int count[] = new int[10]; // digits 0-9

        // Count occurrences
        for(int i=0;i<n;i++)
            count[(a[i]/exp)%10]++;

        // Cumulative count
        for(int i=1;i<10;i++)
            count[i] += count[i-1];

        // Build output array (reverse for stability)
        for(int i=n-1;i>=0;i--){
            int digit = (a[i]/exp)%10;
            output[count[digit]-1] = a[i];
            count[digit]--;
        }

        // Copy back
        for(int i=0;i<n;i++)
            a[i] = output[i];
    }
}
