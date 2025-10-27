//WAP to compare 2 string by using system defined function or library function or inbuilt func.
#include<stdio.h>
#include<string.h>
void main()
{
    char x[20],y[20];
    printf("Enter the 1st String = ");
    gets(x);
    printf("Enter the 2nd String = ");
    gets(y);
    int i;
    i=strcmp(x,y);
    (i==0)?printf("String Matched "):printf("String MisMatched ");
}