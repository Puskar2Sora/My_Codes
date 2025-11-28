import java.util.*;
class B
{ Scanner kb=new Scanner(System.in);
  int f=-1,r=-1,n=5,queue[]=new int[n];
  
  public void enqueue()
  {
   if(r==n-1)
   {
     System.out.println("Queue is full !!");
     return;
   }
   if(f==-1)
     f=0;
   System.out.println("Enter your Element = ");
   int a=kb.nextInt();
   System.out.println("Insertion success");
   queue[++r]=a;
   peek();
  }
  
  public void dequeue()
  {
   if(f==-1 || f>r)
   {
    System.out.println("Queue is MT :( ");
    return;
   }
   System.out.println("Deleted  "+queue[f++]);
   peek();
  }
  public void peek()
  {
    if(f==-1 || f>r)
    {
        System.out.println("Q is MT :(");
        return;
    }
    for(int i=f;i<=r;i++)
    {
      System.out.print(" "+queue[i]);
    }
  }
}

class Queue
{
    public static void main(String[] args )
    {   B cv =new B();
        int ch;
        while(true)
        {
            Scanner ob = new Scanner(System.in);
            System.out.print("\n1. For Enqueue \n2. For Dequeue \n3. For exit");
            System.out.println("\nEnter your choice = ");
            ch=ob.nextInt();
            switch(ch)
            {   
                case 1:
                    cv.enqueue();
                    break;
                case 2:
                    cv.dequeue();
                    break;
                case 3:
                     System.exit(0);
                default:
                     System.out.println("Areeeeee vaii vul choiceee");
            }
        }
    }
}