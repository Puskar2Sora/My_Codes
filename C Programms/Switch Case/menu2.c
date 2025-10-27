//WAP to create a menu driven calculator using option

#include<stdio.h>

void main()
{
    printf("Press : \n'+' for Addition\n'-' for Subtraction\n'*' for Multiplication\n'/' for division\n");
    int a,b;
    char c;
    printf("Enter the choice : ");
    scanf("%c",&c);
    if (c=='+' || c=='-' || c=='*' || c=='/')
    {
        printf("Enter the 1st no. = ");
        scanf("%d",&a);
        printf("Enter the 2nd no. = ");
        scanf("%d",&b);
    }
    switch(c)
    {
        case '+':
            printf("Addition = %d",a+b);
            break;
        case '-':
            printf("Subtraction = %d",a-b);
            break;
        case '*':
            printf("Multiplication = %d",a*b);
            break;
        case '/':
            printf("division = %d",a/b);
            break;
        default:
            printf("Wrong Choice !!!!");
    }
}