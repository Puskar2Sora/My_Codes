/*
    * -
    - *
    * - *
    - *
    * -
*/
#include<stdio.h>
void main()
{
    int i,j,n;
    printf("Enter the no. : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=i;j>=1;j--)
            (j%2==1)?printf("* "):printf("  ");
        printf("\n");
    }
    for(i=1;i<=n-1;i++)
    {
        for(j=i;j<=n-1;j++)
        {
            if(n%2==0)
                (j%2==1)?printf("* "):printf("  ");
            else
                (j%2==0)?printf("* "):printf("  ");
        } 
        printf("\n");
    }
}