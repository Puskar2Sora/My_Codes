//WAP to search an element into an array [Linear Search]
#include<stdio.h>
void main()
{
    int n;
    printf("Enter the range = ");
    scanf("%d",&n);
    int a[n],i,x,f=0;
    for(i=0;i<n;i++)
    {
        printf("Enter the no. = ");
        scanf("%d",&a[i]);
    }
    printf("Enter the element to be searched = ");
    scanf("%d",&x);
    for(i=0;i<n;i++)
    {
        if(a[i]==x)
        {
            f=1;
            break;
        }
    }
    (f==1)?printf("%d is found in the array at %d index",x,i):printf("%d is not found in the array",x);
}