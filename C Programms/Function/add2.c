//WAP to add 2 no. by using func. 4th type ( with both return type & parameter passing)
//called function & calling func.
#include<stdio.h>
int add(int,int);//func. declaration
void main()
{
   int x,y;
   printf("Enter 2 No. = ");
   scanf("%d%d",&x,&y);
   int p=add(x,y);//calling
   printf("Addition = %d",p);
}
int add(int a,int b)//func. definition
{
   return a+b;
}