//WAP to print spiral matrix

#include<stdio.h>
void main()
{
    int i,j,r,c,k;
    printf("Enter the row & column : ");
    scanf("%d%d",&r,&c);
    int a[r][c];
    if(r==c)
    {
        for(i=0,j=0;j<c;j++)
        {
            printf("Enter the value at (%d,%d) : ",i,j);
            scanf("%d",&a[i][j]);
        }
        for(i=i+1,j=c-1;i<=j;i++)
        {
            printf("Enter the value at (%d,%d) : ",i,j);
            scanf("%d",&a[i][j]);
        }
        for(i=j,j=i-1;j>=0;j--)
        {
            printf("Enter the value at (%d,%d) : ",i,j);
            scanf("%d",&a[i][j]);
        }
        for(i=i-1,j=0;i>0;i--)
        {
            printf("Enter the value at (%d,%d) : ",i,j);
            scanf("%d",&a[i][j]);
        }
        for(i=j+1,j=i;j<r-1;j++)
        {
            printf("Enter the value at (%d,%d) : ",i,j);
            scanf("%d",&a[i][j]);
        }
        for(i=j-1,j=i-1;j>0;j--)
        {
            printf("Enter the value at (%d,%d) : ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    else
        printf("As the matrix is not square, so spiral matrix is not possible.");
}