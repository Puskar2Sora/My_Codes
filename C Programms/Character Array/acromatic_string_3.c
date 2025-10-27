/*
    Input > Trishan Kumar Saha
    Output> Saha Trishan Kumar  
*/

#include<stdio.h>
void main()
{
    char a[100],x[5][15];
    int i,j,k;
    printf("Enter the Name : ");
    gets(a);
    for(i=0;a[i]!='\0';i++)
    {
        if(i==0 || a[i-1]==' ')
        {
            if(a[i]>=97 && a[i]<=122)
                a[i]-=32;
        }
        else if(a[i]!=' ' && (a[i]>=65 && a[i]<=90))
            a[i]+=32;
    }
    printf("Before : %s\nAfter : ",a);
    for(i=0,j=0,k=0;a[i]!='\0';i++)
    {
        if(a[i]==' ')
        {
            x[j++][k]='\0';
            k=0;
        }
        else if(a[i+1]=='\0')
        {
            x[j][k]=a[i];
            x[j][k+1]='\0';
        }
        else
            x[j][k++]=a[i];
    }
    for(i=j;i>=0;i--)
    {
        for(k=0;x[i][k]!='\0';k++)
            printf("%c",x[i][k]);
        printf(" ");
    }
}