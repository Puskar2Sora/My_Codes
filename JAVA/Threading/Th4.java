class Print1
{
   void display(String nm)
    {
      System.out.print("Ms.");
   try
   {
     Thread.sleep(2000);
   }
  catch(InterruptedException e)
  {}
  System.out.print(nm);
  try
   {
     Thread.sleep(2000);
   }
  catch(InterruptedException e)
  {}
   System.out.println("Das");
  }
}
class syn implements Runnable
{
  Print1 ob;
  Thread t;
  String s;
  syn(Print1 ob1,String s1)
  {
    ob=ob1;
    s=s1;
    t =new Thread(this,"abc");
    t.start();
  }
  public void run()
  {
    synchronized (ob)
    {
      ob.display(s);
    }
  }
}
class Th4
{
  public static void main(String as[])
  {
    Print1 ob=new Print1();
    new syn(ob,"Prity");
    new syn(ob,"Abhi");
    new syn(ob,"Arpan");
    new syn(ob,"Dip");
  }
}




