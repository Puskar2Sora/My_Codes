//18. WAP to take input into an array and calc. the standard deviation
#include<stdio.h>
#include<math.h>
void main()
{
    int i,n,s=0,avg,x;
    float std,m;
    printf("Enter the Range = ");
    scanf("%d",&n);
    int a[n];
    //input
    for(i=0;i<n;i++)
    {
        printf("Enter the No. = ");
        scanf("%d",&a[i]);//10,45,34,65,88
        s=s+a[i];//242
    }
    avg=s/n;
    printf("Average = %d\n",avg);
    for(i=0,s=0;i<n;i++)
    {
        x=a[i]-avg;
        s+=x*x;
    }
    m=(float)s/(float)n;
    std=sqrt(m);
    printf("Standard Deviation = %.2f",std);
}