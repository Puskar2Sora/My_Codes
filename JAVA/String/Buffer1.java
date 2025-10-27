import java.util.*;
class Buffer1
{
  public static void main(String as[])
  {
    Scanner ob=new Scanner(System.in);
    System.out.print("Enter the String=");
    String x=ob.nextLine();
    StringBuffer sb=new StringBuffer(x);
    System.out.println(""+sb);    
    System.out.println(""+sb.capacity());
    System.out.print("Enter the String to append=");
    String y=ob.nextLine();
    sb.append(" "+y);
    System.out.println(sb);
    sb.append(" Banerjee");
    System.out.println(""+sb);
   sb.insert(1,'T');
   System.out.println(""+sb);
   sb.replace(1,4,"Tan");
   System.out.println(""+sb);
   sb.replace(4,8,"isha");
   System.out.println(""+sb);
   sb.delete(9,12);
   System.out.println(""+sb);
   System.out.println(""+sb.capacity());
  }
}