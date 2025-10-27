//WAP to check max and min element of an array
#include<stdio.h>
void main()
{
    int n;
    printf("Enter the no. of elements : ");
    scanf("%d",&n);
    int a[n],i,max,min;
    for(i=0;i<n;i++)
    {
        printf("Enter the no. = ");
        scanf("%d",&a[i]);
    }
    printf("Array : ");
    for(i=0,max=min=a[0];i<n;i++)
    {
        printf("%d ",a[i]);
        if(a[i]>max)
            max=a[i];
        if(a[i]<min)
            min=a[i];
    }
    printf("\nMax element = %d\nMin element = %d\n",max,min);
}