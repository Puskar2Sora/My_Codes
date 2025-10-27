//read the content
import java.io.*;
import java.util.*;
class File3
{
   public static void main(String[] args) {
    try{
       Scanner sc= new Scanner(System.in);
       System.out.print("Enter the File Name = ");
       String x=sc.nextLine();
       //create the file 
       File fs=new File(x);
       Scanner obj=new Scanner(fs);
       while(obj.hasNextLine())
       {
           System.out.println(""+obj.nextLine());
       }
       obj.close();
    }
    catch(Exception e)
    {
        System.out.print("Error "+e);
    }
   }
}