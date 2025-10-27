//WAP to compare two strings
#include<stdio.h>
void main()
{
    char a[10],b[10];
    int f=0;
    printf("Enter the 1st string : ");
    gets(a);
    printf("Enter the 2nd string : ");
    gets(b);
    for(int i=0;a[i]!='\0' && b[i]!='\0';i++)
    {
        if(a[i]!=b[i])
        {
            f=1;
            break;
        }   
    }
    (f==0)?printf("Both strings are same..."):printf("Both strings are not same...");
}