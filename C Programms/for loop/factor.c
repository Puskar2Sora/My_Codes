//WAP to check the factor of a no.
#include<stdio.h>
void main()
{
    int n,i;
    printf("Enter the no. = ");
    scanf("%d",&n);
    if (n>0)
    {
        printf("Factor of %d = ",n);
        for (i=1;i<=n;i++)
        {
            if (n%i==0)
                printf("%d ",i);
        }
    }
    else
        printf("Invalid Input!!");
}