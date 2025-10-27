//append the content
import java.io.*;
import java.util.*;
class File5
{
   public static void main(String[] args) throws IOException {
    try{
       Scanner sc= new Scanner(System.in);
       System.out.print("Enter the File Name = ");
       String x=sc.nextLine();
       //read the file 
       File fs=new File(x);
       Scanner obj=new Scanner(fs);//read mode e open ache
       while(obj.hasNextLine())
       {
           System.out.println(""+obj.nextLine());
       }
       FileWriter fw =new FileWriter(x,true);
       Scanner ob2=new Scanner(System.in);
       System.out.print("Enter the New Content = ");
       String a=ob2.nextLine();
       fw.write(a);
       fw.close();
       obj.close();
       System.out.println("After new content = ");
       Scanner ob3=new Scanner(fs);
       while(ob3.hasNextLine())
       {
           System.out.println(""+ob3.nextLine());
       }
       obj.close();
    }
    catch(Exception e)
    {
        System.out.print("Error "+e);
    }
   }
}