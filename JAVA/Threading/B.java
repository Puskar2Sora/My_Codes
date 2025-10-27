class A implements Runnable
{
  public void run()
  {
    for(int i=0;i<=10;i++)
    {
      System.out.println("I's Value = "+i);
    }
  }
}
class B
{
  public static void main(String as[])
  {
    A ob=new A();
    Thread ob1=new Thread(ob);
    ob1.start();
    for(int i=0;i<=10;i++)
    {
      System.out.println("Main's Value = "+i);
    }
  }
}









