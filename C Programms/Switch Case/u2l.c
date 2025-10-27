//WAP to convert upper case to lower case & vice versa
#include<stdio.h>
void main()
{
    char c;
    printf("Enter the Character : ");
    scanf("%c",&c);
    switch (((c>=65 && c<=90) || (c>=97 && c<=122))?1:0)
    {
    case 1:
        if (c<90)
            printf("Lower Case of '%c' is : '%c'",c,c+32);
        else
            printf("Upper Case of '%c' is : '%c'",c,c-32);
        break;
    case 0:
        if (c>=48 && c<=57)
            printf("'%c' is a number",c);
        else
            printf("'%c' is a special Character",c);
        break;
    default:
        break;
    }
}