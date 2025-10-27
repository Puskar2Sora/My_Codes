//WAP to convert lower case to upper case 
#include<stdio.h>
void main()
{
    char a[50];
    int i;
    printf("Enter the String : ");
    gets(a);
    printf("Before : %s\n",a);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]>=65 && a[i]<=90)
            a[i]+=32;
    }
    printf("After : %s",a);
}