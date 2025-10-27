//WAP convert upper case to lower case and vice versa
#include<stdio.h>

int main()
{
    char x;
    printf("Enter the character : ");
    scanf("%c",&x);
    if ((x>=65 && x<=90) || (x>=97 && x<=122))
    {
        if (x<=90)
            printf("Lower case of %c is %c",x,x+32);
        else
            printf("Upper case of %c is %c",x,x-32);
    }
    else if (x>=48 && x<=57)
        printf("%c is a Number",x);
    else
        printf("%c is a Special Character",x);
    return 0;
}