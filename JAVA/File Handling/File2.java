//create the file (write the content) 
import java.io.*;
import java.util.*;
class File2
{
   public static void main(String[] args) {
    try{
       Scanner sc= new Scanner(System.in);
       System.out.print("Enter the File Name = ");
       String x=sc.nextLine();
       //create the file 
       FileWriter wr=new FileWriter(x);
       //store the content within the file
       System.out.print("Enter the content = ");
       String y=sc.nextLine();
       wr.write(y);
       wr.close();
    }
    catch(Exception e)
    {
        System.out.print("Error "+e);
    }
   }
}