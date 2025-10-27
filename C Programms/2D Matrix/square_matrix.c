//WAP to check whether a matrix is square or not

#include<stdio.h>
void main()
{
    int i,j,r,c;
    printf("Enter the no. of rows : ");
    scanf("%d",&r);
    printf("Enter the no. of columns : ");
    scanf("%d",&c);
    int a[r][c];
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("Enter the value at (%d,%d) : ");
            scanf("%d",&a[i][j]);
        }
    }
    printf("Matrix : \n\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    (r==c)?printf("Its a Square Matrix"):("Its not a Square matrix : ");
}