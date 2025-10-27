class Tnm3 implements Runnable
{
  Thread t;
  Tnm3(String a)
  {
    t = new Thread(this,a);
    t.start();
  }
  public void run()
  {
   for(int i=0;i<=3;i++)
   {
     String s=t.getName();
     System.out.println("Thread Name = "+s+" Value = "+i);
   }
  }
}
class Tnm4
{
  public static void main(String as[])
  {
   Tnm3 ob=new Tnm3("Abhinandan");
   Tnm3 ob2=new Tnm3("Prity");
   Tnm3 ob3=new Tnm3("Antarip");
   for(int i=0;i<=3;i++)
   {
     String s1=Thread.currentThread().getName();
 System.out.println("Main Thread Name = "+s1+" Value = "+i);
   }
  }
}
















