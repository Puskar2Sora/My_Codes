//WAP to print the sum of elements of an arrayn using pointer
#include<stdio.h>

void main()
{
    int n;
    printf("Enter the no.  of elements : ");
    scanf("%d",&n);
    int a[n],i,s=0,*p;
    for(i=0;i<n;i++)
    {
        printf("Enter the no. = ");
        scanf("%d",&a[i]);
    }
    printf("Array = ");
    for(i=0,p=&a[0];i<n;i++,p++)
    {
        printf("%d ",a[i]);
        s+=*p;
    }
    printf("\nSum = %d",s);
}