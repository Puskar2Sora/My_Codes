import java.util.Scanner;
class Magic
{
    public static int Jog(int a)
    {
      int r=0,l,s=0;
      for(;a!=0;a=a/10)
      {
        l=a%10;
        s+=l;
        r=r*10+l;
      }
      return s;
    }
    public static int Ulto(int j)
    {
      int r=0;
      for(;j!=0;j=j/10)
      {
        r=(r*10)+(j%10);
      }
      return r;
    }
     public static int goon(int k)
    {
        int  i,s;
        i=Jog(k);
        s=Jog(k) * Ulto(i);
        return s;
    }
    public static void main(String as[])
    {
        int m;
        Scanner ob=new Scanner(System.in);
        System.out.print("Enter the no.=");
        m=ob.nextInt();
        System.out.print( (int)m==(int)goon(m) ? "Magic":"Not");
    }
}