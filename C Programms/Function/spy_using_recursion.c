//spy no. by using recursion
#include<stdio.h>
#include<conio.h>
int spy(int);
int rem,s=0,p=1;
void main()
{
   int n,x;
   printf("Enter the No.= ");
   scanf("%d",&n);
   x=spy(n);
   if(x==p)//calling
     printf("%d is Spy No. ",n);
   else
     printf("%d is NOT Spy No. ",n);
   getch();
}
int spy(int n)
{
   if(n!=0)
   {
   rem=n%10;
   s=s+rem;
   p=p*rem;
   spy(n/10);//recursion
   return s;
  }
   else
   {
     return 0;    
   }
}