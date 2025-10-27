class A1 implements Runnable
{
  public void run()
  {
    for(int i=0;i<=10;i++)
    {
      try
      {
      Thread.sleep(2000);

      }
      catch(InterruptedException e){}
      System.out.println("I's Value = "+i);
    }
  }
}
class B1
{
  public static void main(String as[])
  {
    A1 ob=new A1();
    Thread ob1=new Thread(ob);
    ob1.start();
    for(int i=0;i<=10;i++)
    {
      System.out.println("Main's Value = "+i);
    }
  }
}





