class Prio implements Runnable
{
  Thread t;
  public Prio(String a,int b)
  {
    t = new Thread(this,a);
    t.setPriority(b);
    t.start();
    
  }
  public void run()
  {
   for(int i=0;i<=3;i++)
   {
     String s=t.getName();
     System.out.println("Thread Name = "+s+" Value = "+i+" Priority = "+t.getPriority());
   }
  }
}
class Prio1
{
  public static void main(String as[])
  {
   Prio ob=new Prio("Abhi",4);
   Prio ob2=new Prio("Prity",10);
  }
}











