//count the length of a string (with space)
#include<stdio.h>
void main()
{
    char x[20];
    printf("Enter the String = ");
    gets(x);
    int i;
    for(i=0;x[i]!='\0';i++)
    {
        printf("%c",x[i]);
    }
    printf("\nLength = %d",i);
}