//1.WAP to take input into an array & print the array
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
    for(i=0;i<n;i++)
    {
        printf("Value = %d Address = %u\n",a[i],&a[i]);
    }
}