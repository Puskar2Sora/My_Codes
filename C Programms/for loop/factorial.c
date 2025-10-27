//WAP to check the factorial of a no.
#include<stdio.h>
void main()
{
    int n,i,f=1;
    printf("Enter the no. = ");
    scanf("%d",&n);
    if (n>=0)
    {
        printf("Factorial of %d = ",n);
        for(i=1;i<n;i++)
        {
            f*=i;
            printf("%d x ",i);
        }
        (n!=0)?printf("%d = %d",i,f*i):printf("%d",f);
    }
    else
        printf("Factorial of Negative no. is not possible..!!");
}