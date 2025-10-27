class th1
{
  public static void main(String as[])
  {
    Thread t=new Thread();
    System.out.println(t.currentThread());
    t.setName("Tuhina");
    System.out.println(t);
    t.setPriority(10);
    System.out.println(t);
    int x=t.getPriority();
    System.out.println(x);
    String s=t.getName();
    System.out.println(s);
  }
}





