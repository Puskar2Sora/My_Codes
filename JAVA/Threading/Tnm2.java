class Tnm implements Runnable
{
  Thread t;
  Tnm()
  {
    t = new Thread(this,"Rupna");
    t.start();
  }
  public void run()
  {
   for(int i=0;i<=10;i++)
   {
     String s=t.getName();
     System.out.println("Thread Name = "+s+" Value = "+i);
   }
  }
}
class Tnm2
{
  public static void main(String as[])
  {
   Tnm ob=new Tnm();
   for(int i=0;i<=10;i++)
   {
     String s1=Thread.currentThread().getName();
 System.out.println("Main Thread Name = "+s1+" Value = "+i);
   }
  }
}










