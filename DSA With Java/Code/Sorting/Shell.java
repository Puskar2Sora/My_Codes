import java.util.*;
class Shell
{
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
        sh(a,n);  
        System.out.println("\n\nAfter Counting Sort:");
        for(int x : a) System.out.print(x+" ");
    }

    static Void sh(int a[] ,int n)
    {
        for (int gap = n/2; gap>0; gap/=2)
          for (int i=gap; i<n; i++)
          {
            int temp = a[i], j;
            for (j=i; j>=gap && a[j-gap]>temp; j-=gap) a[j]=a[j - gap];
            a[j] = temp;
          }
        return null;
    }
}