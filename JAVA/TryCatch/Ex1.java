class Ex1
{
  public static void main(String as[])
  {
   for(int i=0;i<=10;i++)
   {
   try
   {
       Thread.sleep(1000);
   }
   catch(InterruptedException e)
   {}
   System.out.println(" "+i);
  }
  }
}





