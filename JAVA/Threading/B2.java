class A2  implements Runnable
{
  public void run()
  {
    for(int i=0;i<=10;i++)
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
class B2
{
  public static void main(String as[])
  {
    A2 ob=new A2();
    Thread ob1=new Thread(ob);
    ob1.start();
    for(int i=0;i<=10;i++)
    {
     try
      {
      Thread.sleep(1000);
      }
      catch(InterruptedException e){}
      System.out.println("Main's Value = "+i);
    }
  }
}



