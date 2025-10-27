//2.WAP to take input into an array & print the reverse array
#include<stdio.h>
void main()
{
    int i,n;
    printf("Enter the Range = ");
    scanf("%d",&n);
    int a[n];
    //input
    for(i=0;i<n;i++)
    {
        printf("Enter the No. = ");
        scanf("%d",&a[i]);
    }
    //print
    printf("Original Array List = \n");
    for(i=0;i<n;i++)
    {
        printf("Value = %d Address = %u\n",a[i],&a[i]);
    }
    printf("Reverse Array List = \n");
    for(i=n-1;i>=0;i--)
    {
        printf("Value = %d Address= %u\n",a[i],&a[i]);
    }
}