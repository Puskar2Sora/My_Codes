import java.util.*;
class Bubble
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
        System.out.println("Your Sorted Array :: \n");
           for(int i=0; i<n-1; i++) 
            {            
            for(int j=0; j<n-i-1; j++) 
                {      
                if(a[j] < a[j+1])
                {
                    int temp = a[j];
                    a[j] = a[j+1];
                    a[j+1] = temp;
                }
            }
        }
        for(int i:a) System.out.print(i+" ");
        System.out.println(""+(a[0]+a[1]));
    }
}