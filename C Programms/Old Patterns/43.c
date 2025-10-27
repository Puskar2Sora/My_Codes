/*
    1 - - - - - - - - 1
    1 2 - - - - - - 2 1
    1 2 3 - - - - 3 2 1
    1 2 3 4 - - 4 3 2 1
    1 2 3 4 5 5 4 3 2 1
*/
#include<stdio.h>
void main()
{
    int n,i,j,sp;
    printf("Enter the range : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d ",j);
        }
        for(sp=n-1;sp>=i;sp--)
        {
            printf("    ");
        }
        for(j=i;j>=1;j--)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
}