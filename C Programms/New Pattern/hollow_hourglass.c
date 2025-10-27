/*
    * * * * * 
     *     *
      *   *
       * * 
        * 
       * *
      *   *
     *     *
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
            (i==1 || i==n)?printf("* "):(j==i || j==n)?printf("* "):printf("  ");
        printf("\n");
    }
    for(i=2;i<=n;i++)
    {
        for(sp=n-1;sp>=i;sp--)
            printf(" ");
        for(j=1;j<=i;j++)
            (i==1 || i==n)?printf("* "):(j==i || j==1)?printf("* "):printf("  ");
        printf("\n");
    }
}