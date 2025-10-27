//WAP to check greater between 2 No. by using func. 2nd type(no return type but parameter passing)
#include<stdio.h>
void check(int,int);//func. declaration
void main()
{
   int x,y;
   printf("Enter 2 No. = ");
   scanf("%d%d",&x,&y);
   check(x,y);//calling
}
void check(int x,int y)//func. definition
{
   if(x==y)
     printf("Both are Equal");
   else if(x>y)
     printf("1st No. %d is Greater ",x);
   else
     printf("2nd No. %d is Greater ",y);
}