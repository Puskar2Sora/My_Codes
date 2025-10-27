// WAP to print the middle element of an array
#include<stdio.h>
void main()
{
    int n;
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
        for(m=n/2,i=0;i<n;i++)
        {
            if(i==m)
                printf("Middle element is %d ",a[i]);
        }
    }
}