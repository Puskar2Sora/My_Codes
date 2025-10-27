/*
    - - - - 1
    - - - 2 1
    - - 3 2 1
    - 4 3 2 1
    5 4 3 2 1 
*/
#include<stdio.h>
void main()
{
    int n,i,j,sp;
    printf("Enetr the range : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(sp=n-1;sp>=i;sp--)
        {
            printf("  ");
        }
        for(j=i;j>=1;j--)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
}