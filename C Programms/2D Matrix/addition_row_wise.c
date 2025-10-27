//WAp to take input into a matrix & print the matrix & calc. the rowwise addition of a matrix
#include<stdio.h>
void main()
{
    int i,j,r,c,rsum=0,k=1;
    printf("Enter the No. of Row & column = ");
    scanf("%d%d",&r,&c);
    int a[r][c];
    //input
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("Enter the No. for (%d,%d) coordinate = ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    //output
    printf("Matrix = \n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            rsum=rsum+a[i][j];
        }
        printf("%d. Rowwise Sum = %d",k,rsum);
        k++;
        rsum=0;
        printf("\n");
    }

}