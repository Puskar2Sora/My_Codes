import java.util.*;
class Buffer
{
    public static void main(String[] kalo)
    {
      String s;
      Scanner ob=new Scanner(System.in);
      System.out.print("Enter the String=");
      s=ob.nextLine();
      StringBuffer sb=new StringBuffer(s);
      System.out.print(" "+sb);
      System.out.print(" "+sb.capacity());
      System.out.print("Enter the String to Appened=");
      String y=ob.nextLine();
      sb.append(""+y);
      System.out.print(" "+sb);
    }
}