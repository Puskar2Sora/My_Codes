//count the length of a string (without space)
#include<stdio.h>
void main()
{
    char x[20];
    printf("Enter the String = ");
    gets(x);
    int i,len=0;
    for(i=0;x[i]!='\0';i++)
    {
    printf("%c",x[i]);
    if(x[i]!=' ')
        len++;
    }
    printf("\nLength = %d",len);
}