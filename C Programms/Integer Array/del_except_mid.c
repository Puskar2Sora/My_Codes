// WAP to print the middle element of an array
#include<stdio.h>
void main()
{
    int n,x;
    printf("Ener the range = ");
    scanf("%d",&n);
    int a[n],i,m;
    if(n%2==0)
        printf("No middle point found :(");
    else
    {
        for(i=0;i<n;i++)
        {
            printf("Enter the no. = ");
            scanf("%d",&a[i]);
        }
        for(m=n/2,x=n,i=0;i<x;i++)
        {
            if(i==m)
            {    
                a[0]=a[m];
                n=1;
            }
            else
                printf("Deleted element is %d\n",a[i]);
        }
        printf("After deletion the array is : ");
        for(i=0;i<n;i++)
            printf("%d ",a[i]);
    }
}