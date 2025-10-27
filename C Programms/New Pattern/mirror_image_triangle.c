/*
    * * * * * 
     * * * *
      * * *
       * * 
        * 
       * *
      * * *
     * * * *
    * * * * * 
*/

#include<stdio.h>
void main()
{
    int n,i,j,sp;
    printf("Enter the range = ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(sp=1;sp<i;sp++)
            printf(" ");
        for(j=i;j<=n;j++)
            printf("%d ",j);
        printf("\n");
    }
    for(i=n-1;i>=1;i--)
    {
        for(sp=1;sp<i;sp++)
            printf(" ");
        for(j=n;j>=i;j--)
            printf("%d ",j);
        printf("\n");
    }
}