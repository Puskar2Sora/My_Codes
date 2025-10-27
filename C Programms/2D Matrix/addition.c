//WAP to add two matrix
#include<stdio.h>
void main()
{
    int i,j,r,c;
    printf("Enter the Row : ");
    scanf("%d",&r);
    printf("Enter the Column : ");
    scanf("%d",&c);
    int a[r][c],b[r][c],s[r][c];
    //input
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("Enter the no. of 1st matrix at (%d,%d) : ",i,j);
            scanf("%d",&a[i][j]);
            printf("Enter the no. of 2nd matrix at (%d,%d) : ",i,j);
            scanf("%d",&b[i][j]);
        }
    }
    printf("Matrix Addition : \n\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
            printf("%d ",a[i][j]); 
        (i==r/2)?printf("\t  +\t"):printf("\t   \t");
        for(j=0;j<c;s[i][j]=a[i][j]+b[i][j],j++)
            printf("%d ",b[i][j]);
        (i==r/2)?printf("\t  =\t"):printf("\t   \t");
        for(j=0;j<c;j++)
            printf("%d ",s[i][j]);
        printf("\n");
    }
}
