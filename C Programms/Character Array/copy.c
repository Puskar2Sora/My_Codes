//WAP to copy a string into another string
#include<stdio.h>
void main()
{
    char a[50],b[50];
    int i;
    printf("Enter the string : ");
    gets(a);
    printf("Original String = %s\n",a);
    for(i=0;a[i]!='\0';i++)
        b[i]=a[i];
    b[i]='\0';
    printf("Copy string : ");
    for(i=0;b[i]!='\0';i++)
        printf("%c",b[i]);
}