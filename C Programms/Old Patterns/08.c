/*
    1
    3 1
    5 3 1
    7 5 3 1
    9 7 5 3 1
*/
#include<stdio.h>
void main()
{
    int n,i,j;
    printf("Enetr the range : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=(2*i)-1;j>=1;j--)
        {
            if(j%2==1)
                printf("%d ",j);
        }
        printf("\n");
    }
}