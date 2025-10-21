//prefix to infix & postfix to infix
#include<stdio.h>
#include<string.h>
# define MAX 20
char stack[MAX];
int top=-1;
void push(char c)//c='/'
{
    stack[++top]=c;//TOP=0
}
char pop()
{
    return stack[top--];//top=-2
}
void pre_in()
{
    int i;
    char a,op,str[MAX];
    printf("Enter the prefix expression : ");
    fflush(stdin);
    gets(str);
    printf("Infix expression is : \t");
    for(i=0;str[i]!='\0';i++)//i=0  8<8  i++
    {
        if(str[i]=='+'||str[i]=='-'||str[i]=='*'||str[i]=='/')
            push(str[i]);//calling  -
        else
        {
            op=pop();//op='+'
            a=str[i];//a='D'
            printf("%c%c",a,op);//A*B/C-D+
        }
    }
    printf("%c\n",str[top--]);
}
void main()
{  
    int ch;
    do
    {  
        pre_in();
        printf("Enter 1 to continue, 0 to exit\n");
        scanf("%d",&ch);//1
    }while(ch!=0);
}