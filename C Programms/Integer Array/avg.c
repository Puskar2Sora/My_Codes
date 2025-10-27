//3. WAP to take input into an array & print the sum and avg of the elements
#include<stdio.h>
void main()
{
    int i,n,s=0;
    float avg;
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
   printf("Sum = %d\n",s);
   avg=(float)s/(float)n;
   printf("Average = %.2f\n",avg);
}