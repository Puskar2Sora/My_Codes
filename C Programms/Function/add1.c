//WAP to add 2 No. by using func. 1st Type no return type no parameter passing
#include<stdio.h>
void input();
void add();//func. declaration
void sub();
void multi();
void divi();
int a,b;//global variable
void main()
{
    input();//calling
    add();//calling
    divi();
    sub();
    multi();
}
void input()//func. definition
{
    printf("Enter 2 No. = ");
    scanf("%d%d",&a,&b);
}
void add()//func. definition
{
    int c;
    c=a+b;
    printf("Addition = %d\n",c);
}
void sub()//func. definition
{
    int s;
    s=a-b;
    printf("Subtraction = %d\n",s);
}
void multi()//func. definition
{
    int m;
    m=a*b;
    printf("Multiplication = %d\n",m);
}
void divi()//func. definition
{
    int d;
    d=a/b;
    printf("Division = %d\n",d);
}