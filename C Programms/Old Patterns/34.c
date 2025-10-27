/*
    * * * * * * *
    - * * * * *
    - - * * *
    - - - *
*/
#include<stdio.h>
void main()
{
    int i,j,sp,n;
    printf("Enter the range = ");
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        for(sp=n;sp>i;sp--)
        {
            printf("  ");
        }
        for(j=2*i-1;j>=1;j--)
            printf("* ");
        printf("\n");
    }

}