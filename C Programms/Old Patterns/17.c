
/*
    * * * *
    * * *
    * *
    *  
*/
#include<stdio.h>
void main()
{
    int n,i,j;
    printf("Enetr the range : ");
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        for(j=i;j>=1;j--)
        {
            printf("* ");
        }
        printf("\n");
    }
}