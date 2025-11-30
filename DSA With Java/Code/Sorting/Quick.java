import java.util.*;
public class Quick {
    public static void main(String[] args) {
        Scanner kb = new Scanner(System.in);

        System.out.print("Enter the Length of The array: ");
        int n = kb.nextInt();
        int a[] = new int[n];

        for(int i=0;i<n;i++){
            System.out.print("a["+i+"] = ");
            a[i]=kb.nextInt();
        }

        quick(a,0,n-1);

        System.out.println("\nSorted Array :: ");
        for(int i:a) System.out.print(i+" ");
    }

    static void quick(int a[],int low,int high){
        if(low < high){
            int p = part(a,low,high);
            quick(a,low,p-1);
            quick(a,p+1,high);
        }
    }

    static int part(int a[],int low,int high){
        int pivot = a[high];
        int i = low-1;

        for(int j=low;j<high;j++){
            if(a[j] < pivot){
                i++;
                swap(a,i,j);
            }
        }
        swap(a,i+1,high);
        return i+1;
    }

    static void swap(int a[],int i,int j){
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;
    }
}
