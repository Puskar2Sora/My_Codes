//17. WAP to take input into an array & store the positive element into another array
#include<stdio.h>
void main()
{
    int i,n,j=0;
    printf("Enter the Range = ");
    scanf("%d",&n);
    int a[n],b[n];
    //input
    for(i=0;i<n;i++)
    {
        printf("Enter the No. = ");
        scanf("%d",&a[i]);//45,-35,78,-89,32
    }
    //print
    for(i=0;i<n;i++)
    {
       printf("%d ",a[i]);
       if(a[i]>0)
       {
        b[j]=a[i];
        j++;        
       }
    }
    //print copy array
    printf("\nPositive List = ");
    for(i=0;i<j;i++)
    {
       printf("%d ",b[i]);
    }
}