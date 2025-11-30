import java.util.*;
class Selection {
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
         for (int i=0; i<(n - 1); i++)
        {
         int pos = i;
         for (int j= i+1;j<n;j++)
        {
         if (a[pos] > a[j])
          pos = j;
        }
        int swap = a[i];
        a[i] = a[pos];
        a[pos] = swap;
        }
    for(int i:a) System.out.print(i+" ");
    }
}
