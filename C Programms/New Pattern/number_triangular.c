/*
    - - - 1
    - - 2 - 2
    - 3 - 3 - 3
    4 - 4 - 4 - 4
*/
#include<stdio.h>
void main()
{
    int i,j,n,sp;
    printf("Enter the range = ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(sp=n-1;sp>=i;sp--)
            printf(" ");
        for(j=1;j<=i;j++)
            printf("%d ",i);
        printf("\n");
    }
}