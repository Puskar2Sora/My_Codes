//19. WAP to take input into an array & find out the max element
#include<stdio.h>
void main()
{
    int i,n,j,max;
    printf("Enter the Range = ");
    scanf("%d",&n);
    int a[n];
    //input
    for(i=0;i<n;i++)
    {
        printf("Enter the No. = ");
        scanf("%d",&a[i]);
    }
   max=a[0];
   j=0;
   for(i=0;i<n;i++)
   {
       if(a[i]>max)
         {
            max=a[i];
            j=i;
         }
   }
   printf("Max Element = %d Index = %d Position = %d",max,j,j+1);
}