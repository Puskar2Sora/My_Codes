//WAP to print the max element of an array using recursion
#include<stdio.h>
int n;
int max(int a[]);
void main()
{
    printf("Enter the no. of elements = ");
    scanf("%d",&n);
    int a[n],i,m;
    for(i=0;i<n;i++)
    {
        printf("Enter the no. = ");
        scanf("%d",&a[i]);
    }
    m=max(a);
    printf("Max = %d ",m);
}
int max(int a[])
{
    static int i=0,m=-1000;
    if (i<n)
    {
        if(m<a[i])
            m=a[i];
        i++;
        max(a);
    }
    return m;
}