//WAP to count the number of 0 present within a matrix

#include<stdio.h>
void main()
{
    int i,j,r,c,co=0;
    printf("Enter the no. of rows and columns : ");
    scanf("%d%d",&r,&c);
    int a[r][c];
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("Enter the value at (%d,%d) : ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("Matrix : \n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d ",a[i][j]);
            if(a[i][j]==0)
                co++;
        }
        printf("\n");
    }
    printf("No. of '0' present on the matrix is : %d",co);
}