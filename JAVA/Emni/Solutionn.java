import java.util.Scanner;
class Solutionn {
    public static void  main(int[] arr) {
        
        Scanner ob=new Scanner(System.in);
        // code here
        int arr;
         int n=ob.nextInt();
        for(int i=0;i<=n;i++)
           arr[i]=ob.nextInt();
        for(int j=0;j<=n;j++)
        {
           if(arr[j]>arr[j+1])
           {
              int k=arr[j];
              arr[j]=arr[j+1];
              arr[j+1]=k;  
           }
        }
        for(int i=0;i<=n;i++)
            System.out.print(" "+arr[i]);
          
    } 
}