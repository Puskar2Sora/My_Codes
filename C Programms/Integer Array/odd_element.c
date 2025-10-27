//5. WAP to take input into an array & print the Odd element array
#include<stdio.h>
void main()
{
    int i,n;
    printf("Enter the Range = ");
    scanf("%d",&n);
    int a[n];
    //input
    for(i=0;i<n;i++)
    {
        printf("Enter the No. = ");
        scanf("%d",&a[i]);
    }
    //print
    printf("Even element List = ");
    for(i=0;i<n;i++)
    {
        if(a[i]%2==1)
          printf("\nValue = %d Index = %d Position = %d",a[i],i,i+1);
    }

}