//delete the file
import java.io.*;
import java.util.*;
class File4
{
   public static void main(String[] args) {
    try{
       Scanner sc= new Scanner(System.in);
       System.out.print("Enter the File Name to be deleted = ");
       String x=sc.nextLine();
       //create the file 
       File fs=new File(x);
       //fs.createNewFile();
       if(fs.delete())
        System.out.println("File deleted ");
       else
         System.out.println("File can't be deleted ");
    }
    catch(Exception e)
    {
        System.out.print("Error "+e);
    }
   }
}