import java.io.FileNotFoundException;
import java.util.Scanner;
public class Ex7 {
    public static void show(String x)
    {
    try{
       if(x.length()<8)
         {
              throw new FileNotFoundException();
         }
         else
           System.out.println("Password is Valid "+x);
        }
      catch(FileNotFoundException e)
      {
        System.out.println("Password must be minimum 8 letters "+e);
      }
    }
    public static void main(String[] args) {
        Scanner ob =new Scanner(System.in);
        System.out.print("Enter the String = ");
        String a=ob.nextLine();
        show(a);
    }
}
