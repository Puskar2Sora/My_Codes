import java.util.Scanner;
class Binary
{
    public static void Modulas(int j)
    {int p;
        for( ;j!=0;j=j/2)
        {
          p=j%2;
          System.out.print(""+p);
        }
    }
    public static void main(String s[])
    {
        int n,l;
        Scanner k=new Scanner(System.in);
        System.out.print("Enter the no.=");
        n=k.nextInt();
        Modulas(n);
    }
}