//WAP to print the elements of an array using recursion
#include<stdio.h>
void array(int a[],int i,int n);
void main()
{
    int n;
    printf("Enter the no. of elements = ");
    scanf("%d",&n);
    int a[n],i;
    for(i=0;i<n;i++)
    {
        printf("Enter the no. = ");
        scanf("%d",&a[i]);
    }
    printf("Array : ");
    array(a,0,n);
}
void array(int a[],int i,int n)
{
    if(i>=n)
        return ;
    printf("%d ",a[i]);
    array(a,i+1,n);
}