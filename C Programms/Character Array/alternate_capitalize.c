//WAP to capitalize alternate letters of a string
#include<stdio.h>
void main()
{
    char a[100];
    int i;
    printf("Enter the string : ");
    gets(a);
    printf("Before : %s\nAfter : ",a);
    for(i=0;a[i]!='\0';i++)
    {
        if(i%2==0)
            a[i]=(a[i]>=97 && a[i]<=122)?a[i]-32:a[i];
    }
    printf("%s",a);
}