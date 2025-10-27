//WAp to take input into a matrix & print the matrix & print the diagonal elements of A matrix
#include<stdio.h>
void main()
{
    int i,j,r,c;
    printf("Enter the No. of Row & column = ");
    scanf("%d%d",&r,&c);
    int a[r][c];
    //input
    if(r==c)
    {
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
    printf("\nDiagonal Elements = \n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
           if(i==j)
             printf("%d ",a[i][j]);
           else
             printf("  ");
        }
        printf("\n");
    }
  }
  else
    printf("As the Matrix is not Square so Diagonal elements not found");
}