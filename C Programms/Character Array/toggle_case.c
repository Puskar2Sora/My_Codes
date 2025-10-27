//WAP to convert uppercase to lowercase and vice versa [Toggle Case]
#include<stdio.h>
void main()
{
    char a[100];
    int i;
    printf("Enter the string : ");
    gets(a);
    printf("Before : %s \nAfter : ",a);
    for(i=0;a[i]!='\0';i++)
        ((a[i]>=65 && a[i]<=90) || (a[i]>=97 && a[i]<=122))?(a[i]>90)?printf("%c",a[i]-32):printf("%c",a[i]+32):printf("%c",a[i]);
}