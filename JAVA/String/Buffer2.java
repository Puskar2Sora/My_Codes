import java.util.*;
class Buffer2
{
  public static void main(String as[])
  {
     Scanner ob=new Scanner(System.in);
     System.out.print("Enter the String=");
     String x;
     x=ob.nextLine();
     StringBuffer sb=new StringBuffer(x);
     System.out.println("The Given String = "+sb);
     System.out.println("capacity = "+sb.capacity());
System.out.println("Substring = "+sb.substring(5,10));
System.out.println("Substring = "+sb.substring(5));
System.out.println("Reverse = "+sb.reverse());
System.out.println("Length = "+sb.length());
System.out.println("Length = "+x.length());
System.out.println("Length = "+sb.charAt(5));
  }
}