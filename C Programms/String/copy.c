//WAP to copy a string from another string by using system defined function or library function or inbuilt func.
#include<stdio.h>
#include<string.h>
void main()
{
    char x[15],y[15];
    printf("Enter the String = ");
    gets(x);
    printf("Before copy 1st String = %s\n",x);
    printf("Before copy 2nd String = %s\n",y);
    strcpy(y,x);
    printf("After copy 1st String = %s\n",x);
    printf("After copy 2nd String = %s\n",y);
}