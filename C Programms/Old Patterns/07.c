/*
    1 3 5 7 9
    1 3 5 7
    1 3 5
    1 3
    1
*/
#include<stdio.h>
void main()
{
    int n,i,j;
    printf("Enetr the range : ");
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        for(j=1;j<=(2*i)-1;j++)
        {
            if(j%2==1)
                printf("%d ",j);
        }
        printf("\n");
    }
}