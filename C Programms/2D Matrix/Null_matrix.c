//WAP to check whether a matrix is Null matrix or not

#include<stdio.h>
void main()
{
    int i,j,r,c,f=0;
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
            if(a[i][j]!=0)
                f=1;
        }
        printf("\n");
    }
    (f==0)?printf("Null Matrix"):printf("Not Null Matrix");
}