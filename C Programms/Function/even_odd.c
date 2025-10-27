//WAP to check whether a No. is even or odd by using func. 2nd type(no return type but parameter passing)
#include<stdio.h>
void check(int);//func. declaration
void main()
{
   int x;
   printf("Enter the No. = ");
   scanf("%d",&x);
   check(x);//calling
}
void check(int n)//func. definition
{
   if(n==0)
     printf("%d is Neutral No. ",n);
   else if(n%2==0)
     printf("%d is Even No. ",n);
   else
     printf("%d is Odd No. ",n);
}