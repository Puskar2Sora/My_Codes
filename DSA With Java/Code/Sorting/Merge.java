import java.util.*;
public class Merge
{
     public static void main(String[] args)
    {
        Scanner kb=new Scanner(System.in);
        int n;
        System.out.println("Enter the Length of The array :");
        n=kb.nextInt();
        int a[]=new int[n];
        for(int i=0;i<n;i++)
        {
            System.out.print("a["+i+"] = ");
            a[i]=kb.nextInt();
        }
        merges(a,0,n-1);
        System.out.print("\n Your Sorted Array is :\n");
        for(int i:a) System.out.print(i+" ");
    }
    static void merges(int a[], int l, int r)
    {
       if(l<r)
       {
        int m=l+(r-l)/2;
        merges(a,l,m);
        merges(a,m+1,r);
        me(a,m,l,r);
       }
    }
    static void me(int a[], int m, int l, int r)
    {
        int i,j,k;
        int n1=m-l+1;
        int n2=r-m;
        int L[]=new int[n1], R[]=new int[n2];
    for (i = 0; i < n1; i++)
        L[i] = a[l + i];
    for (j = 0; j < n2; j++)
        R[j] = a[m + 1 + j];
    i = 0; // Initial index of first subarray
    j = 0; // Initial index of second subarray
    k = l; // Initial index of merged subarray
    while (i < n1 && j < n2) 
        {
        if (L[i] <= R[j])
        {
            a[k] = L[i];
            i++;
        }
        else
        {
            a[k] = R[j];
            j++;
        }
        k++;
    }
  /* Copy the remaining elements of L[], if there are any */
    while (i < n1) 
    {
        a[k] = L[i];
        i++;
        k++;
    }
  /* Copy the remaining elements of R[], if there are any */
    while (j < n2) 
    {
        a[k] = R[j];
        j++;
        k++;
    }
  }
}

