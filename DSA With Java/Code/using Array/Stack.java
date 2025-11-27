import java.util.*;
class A{
     public int top=-1,n=5,stack[]=new int[n];
     public void push(int a)
     {
        if(top==n-1)
        {
            System.out.println("Stack Overflow!!!!!!!");
            return;
        }
        stack[++top]=a;
        System.out.println("Insertion Success ");
        dis();
     }
     public void pop()
     {
        if(top==-1)
        {
            System.out.println("Stack Underflow!!!!!!!!");
            return;
        }
        System.out.println("Deleted Element = "+stack[top--]);
        dis();
     }
     public void dis()
     {
        for(int i=0;i<=top;i++)
        {
            System.out.println(" " +stack[i]);
        }
     }
}
class Stack{
    public static void main(String[] args) {
        A kb=new A();
        int ch,a;
        Scanner ob=new Scanner(System.in);
        while(true){
        System.out.println("1. For Push \n 2. For Pop \n 3. For Exit ");
        System.out.println("Enter your Choice = ");
        ch=ob.nextInt();
        switch(ch)
        {
            case 1:
                System.out.println("Enter the Element = ");
                a=ob.nextInt();
                kb.push(a);
                break;
            case 2:
                kb.pop();
                break;
            case 3:
                System.exit(0);
            default:
                System.out.println("Vul Val Choice Dish Na vauu!!!");
        }
      }
    }
}