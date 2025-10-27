class Prio2 implements Runnable
{
  Thread t;
  Prio2(String a,int b)
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
     try
     {
     Thread.sleep(2000);
     }
     catch(InterruptedException e)
     {}
     System.out.println("Thread Name = "+s+" Value = "+i+" Priority = "+t.getPriority());
   }
  }
}
class Prio3
{
  public static void main(String as[])
  {
   Prio2 ob=new Prio2("Arpan",3);
   Prio2 ob2=new Prio2("Antarip",10);
  }
}






