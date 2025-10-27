//wap to print fibonacci series of a no. using recursion
//1,2,3,5,8,13,21
#include<stdio.h>
#include<conio.h>
//int fibo(int);//func. declaration
void main()
{
 int n,x;
 printf("Enter the Range=");
 scanf("%d",&n);//n=5
 x=fibo(n);//calling n=5 x=5
 printf("%d ",x); 
 getch();
}
int fibo(int n)//func. definition n=-1
{
  if(n==0)//2==0
    return 0;
  else if(n==1)//2==1
   return 1;
  else
   return fibo(n-1)+fibo(n-2);//calling recursion 5+fibo(1-2)
}