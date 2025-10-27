//wap to print factorial of a no. using recursion
#include<stdio.h>
#include<conio.h>
int fact(int);//declaration
void main()
{
 int n;
 printf("Enter the No.=");
 scanf("%d",&n);//n=1
 printf("The Factorial of the No. %d is %d",n,fact(n));//calling
 getch();
}
int fact(int n)//func. definition 
{
  if(n==0)
   return 1;
  else
   return n*fact(n-1);// recursive func.
}