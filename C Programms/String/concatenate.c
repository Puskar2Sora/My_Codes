//WAP to concatenate a string from another string by using system defined function or library function or inbuilt func.
#include<stdio.h>
#include<string.h>
void main()
{
    char x[15],y[15];
    printf("Enter the 1st String = ");
    gets(x);
    printf("Enter the 2nd String = ");
    gets(y);
    printf("Before concatenate 1st String = %s\n",x);
    printf("Before concatenate 2nd String = %s\n",y);
    strcat(x,y);
    printf("After concatenate 1st String = %s\n",x);
    printf("After concatenate 2nd String = %s\n",y);
}