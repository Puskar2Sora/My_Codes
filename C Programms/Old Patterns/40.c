/*
1
2 3 4
5 6 7 8 9
*/
#include<stdio.h>
void main()
{
    int i,j,k=1,n;
    printf("Enter the range = ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=2*i-1;j++,k++)
        {
            printf("%d ",k);
        }
        printf("\n");
    }
}