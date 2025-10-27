//WAP to create a menu driven calculator using option

#include<stdio.h>

void main()
{
    printf("Press : \n1 for Addition\n2 for Subtraction\n3 for Multiplication\n4 for division\n");
    int a,b,c;
    printf("Enter the choice : ");
    scanf("%d",&c);
    if (c>0 && c<5)
    {
        printf("Enter the 1st no. = ");
        scanf("%d",&a);
        printf("Enter the 2nd no. = ");
        scanf("%d",&b);
    }
    switch(c)
    {
        case 1:
            printf("Addition = %d",a+b);
            break;
        case 2:
            printf("Subtraction = %d",a-b);
            break;
        case 3:
            printf("Multiplication = %d",a*b);
            break;
        case 4:
            printf("division = %.2f",(float)a/(float)b);
            break;
        default:
            printf("Wrong Choice !!!!");
    }
}