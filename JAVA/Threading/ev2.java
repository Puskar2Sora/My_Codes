class ev1  implements Runnable
{
  public void run()
  {
    for(int i=0;i<=3;i++)
    {
      try
      {
      Thread.sleep(1000);
      }
      catch(InterruptedException e){}
      System.out.println("I's Value = "+i);
    }
  }
}
class ev2
{
  public static void main(String as[])
  {
    ev1 ob=new ev1();
    Thread ob1=new Thread(ob);
    ob1.start();
    for(int i=0;i<=3;i++)
    {
     try
      {
      Thread.sleep(1000);
      }
      catch(InterruptedException e){}
      if(i%2==0)
      System.out.println("Main's Even Value = "+i);
      else
      System.out.println("Main's odd Value = "+i);
    }
  }
}





