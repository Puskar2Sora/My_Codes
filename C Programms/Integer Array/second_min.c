//21. WAP to take input into an array & find out the 2nd min element
#include<stdio.h>
void main()
{
    int i,n,j,min,s_min;
    printf("Enter the Range = ");
    scanf("%d",&n);
    int a[n];
    //input
    for(i=0;i<n;i++)
    {
        printf("Enter the No. = ");
        scanf("%d",&a[i]);
        }
    min=a[0];
    j=0;
    for(i=0;i<n;i++)
    {
        if(a[i]<min)
            {
                min=a[i];
                j=i;
            }
    }
    printf("Max Element = %d Index = %d Position = %d",min,j,j+1);
    s_min=a[0];
    j=0;
    for(i=0;i<n;i++)
    {
        if(a[i]<s_min && a[i]>min)
        {
            s_min=a[i];
            j=i;
        }
    }
    printf("\n2nd Min Element = %d Index = %d Position = %d",s_min,j,j+1);
}