// WAP to print the middle element of an array
#include<stdio.h>
void main()
{
    int n;
    printf("Ener the range = ");
    scanf("%d",&n);
    int a[n],i,x;
    for(i=0;i<n;i++)
    {
        printf("Enter the no. = ");
        scanf("%d",&a[i]);
    }
    for(i=0,x=n;i<x;i++)
    {
        if(a[i]%2==0)
        {
            printf("Deleted element is %d\n",a[i]);
            for(int j=i;j<n-1;j++)
                a[j]=a[j+1];
            n--;
        }
    }
    printf("After deletion the array is : ");
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
}