//WAP to count the length of a string by using system defined function or library function or inbuilt func.
#include<stdio.h>
#include<string.h>
void main()
{
    char x[20];
    int len;
    printf("Enter the String = ");
    gets(x);
    len=strlen(x);
    printf("Length of %s is = %d",x,len);
}