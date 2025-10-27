import java.util.*;
class Ex6
{
    public static void main(String[] args) {
        while(true)
        {
        try
        {
            Scanner ob =new Scanner(System.in);
            System.out.print("Enter the No. = ");
            int x=ob.nextInt();    
        if(x<10)
          throw new NullPointerException();
        else
        {
          System.out.println("Valid Input");
          //break;
        }
        }
        catch(NullPointerException e)
        {
            System.out.println("Invalid Input no. must be greater than equals to 10");
            break;
        }
        ob.close();
    }
      
    }
}





