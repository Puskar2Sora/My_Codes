import java.util.*;
class Heap
{
    public static void main(String[] args)
    {
        Scanner ob=new Scanner(System.in);
        System.out.print("Enter the Range of the Array :");
        int n=ob.nextInt();
        int a[]=new int[n];
        for(int i =0;i<n;i++)
        {
            System.out.print("a["+i+"] : ");
            a[i]=ob.nextInt();
        }
        sorttt(a,n);
        for(int i:a) System.out.print(i+" ");   
    }
    public static void sorttt(int a[] , int n)
    {
        Maxheap(a,n);
        for(int i=1;i<n;i++)
        {
           int  temp=a[0];
           a[0]=a[n-i];
           a[n-i]=temp;
           heapify(a,0,n-i);
        }
    }
    public static void Maxheap(int a[], int n)
    {
      for (int i= n/2;i>=0;i--)
           heapify(a, i, n);
    }
    public static  void heapify(int a[],int i,int n)
    {
      for(int j=2*i+1;j<n;j=2*i+1)
      {
       int temp,bc=j;
       if(j+1<n)
        {
            if(a[j]<a[j+1])
               bc=j+1;
        } 
        if(a[i]<a[bc])
        {
            temp=a[i];
            a[i]=a[bc];
            a[bc]=temp;
        }
        else
           break;
        i=bc;
      }
    }
}