//WAp to take input into a matrix & print the matrix & Check whether a Matrix is Sparse or Not
#include<stdio.h>
void main()
{
    int i,j,r,c,count=0;
    printf("Enter the No. of Row & column = ");
    scanf("%d%d",&r,&c);
    int a[r][c],t[r][c];
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
            if(a[i][j]==0 || a[i][j]==1)
              count++;
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    //sparse Matrix
    if(count>(r*c)/2)
      printf("Sparse Matrix");
    else
      printf("NOT Sparse Matrix");
}