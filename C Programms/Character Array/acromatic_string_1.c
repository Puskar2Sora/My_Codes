/*
    Input > Trishan Kumar Saha
    Output > T.K.S
*/
#include<stdio.h>
void main()
{
    int i;
    char a[100];
    printf("Enter the string : ");
    gets(a);
    for(i=0;a[i]!='\0';i++)
        (i==0)?printf("%c",(a[i]>=97 && a[i]<=122)?a[i]-32:a[i]):(a[i-1]==' ')?printf(". %c",(a[i]>=97 && a[i]<=122)?a[i]-32:a[i]):printf("");
}