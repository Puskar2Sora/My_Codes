import java.io.*;
class Io3
{
   public String merge(String x,String y)
   {
       return x+" "+y;
   }
   public static void main(String[] as)  throws IOException
    {
       BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
       System.out.print("Enter the 1st String = ");
       String x=br.readLine();
       System.out.print("Enter the 2nd String = ");
       String y=br.readLine();
       Io3 ob =new Io3();
       System.out.println("String = "+ob.merge(x,y));
    }
}
