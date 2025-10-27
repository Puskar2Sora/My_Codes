import java.io.*;
class Io
{
   public static void main(String[] as)  throws IOException {
      InputStreamReader isr = new InputStreamReader(System.in);
      BufferedReader br=new BufferedReader(isr);
      System.out.print("Enter the No. = ");
      int x=Integer.parseInt(br.readLine());
      System.out.println("Sq. = "+(x*x));
   }
}