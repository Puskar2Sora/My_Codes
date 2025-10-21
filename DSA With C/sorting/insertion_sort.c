//insertion sort
#include<stdio.h>
void main()
{
    int n,i,j,temp,k,ite=1;
    printf("Enter the Range = ");
    scanf("%d",&n);
    int a[n];
    printf("Enter %d No. = ",n);
    for(i=0;i<n;i++)//input
        scanf("%d",&a[i]);
    for(i=1;i<n;i++,ite++)//insertion sorting
    {
        for(j=i;j>0 && a[j-1]>a[j];j--)
        {
            temp=a[j-1];
            a[j-1]=a[j];
            a[j]=temp;
        }
        printf("Iteration %d = ",ite);//printing
        for(k=0;k<n;k++)
            printf("%d%c ",a[k],(k==n-1)?'\n':' ');
    }
}