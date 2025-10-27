//Reverse a string
#include<stdio.h>
void main()
{
    char x[50];
    int i;
    printf("Enter the String = ");
    gets(x);
    for(i=0;x[i]!='\0';i++)
    {
        printf("%c",x[i]);
    }
    printf("\nReverse String = ");
    for(i=i-1;i>=0;i--)
        printf("%c",x[i]);
}