//bubble sort
#include<stdio.h>
void main()
{
    int i,j,n,temp,k=1;
    printf("Enter the Range = ");
    scanf("%d",&n);
    int a[n];
    printf("Enter %d No. = ",n);
    for(i=0;i<n;i++)//input
        scanf("%d",&a[i]);
    printf("\nAfter Sorting = ");//bubble sort
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
        printf("\nIteration %d = \n",k++);
        for(j=0;j<n;j++)
            printf("%d%c ",a[j],(j==n-1)?'\n':' ');
    }
}