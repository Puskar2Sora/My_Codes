import java.util.*;
public class Insertion {
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
        for(int i=1;i<n;i++)
        {
         int j=i;
         while(j>0 && a[j-1]>a[j])
         {
           int temp=a[j-1];
           a[j-1]=a[j];
           a[j]=temp;
           j--;
         }
        }
        for(int i:a) System.out.print(i+" ");
    }
}
