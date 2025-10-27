//8. WAP to take input into an array & print the element which are above average
#include<stdio.h>
void main()
{
    int i,n,s=0,avg;
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
   avg=s/n;
   printf("Average = %d\n",avg);
   printf("Above Average List = \n");
   for(i=0;i<n;i++)
   {
   if(a[i]>avg)
     printf("%d ",a[i]);
   }
}