import java.io.*;
import java.util.*;
class File1
{
   public static void main(String[] args) {
    try{
       Scanner sc= new Scanner(System.in);
       System.out.print("Enter the File Name = ");
       String x=sc.nextLine();
       File ob=new File(x);
       if(ob.createNewFile())
          System.out.print(ob.getName()+" File Created Successfully !!!");
       else
          System.out.print(" File Created Unsuccessful !!!");
    }
    catch(Exception e)
    {
        System.out.print("Error "+e);
    }
   }
}
