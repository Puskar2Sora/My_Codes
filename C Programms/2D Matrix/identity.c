//WAP to check identity matrix
#include<stdio.h>
void main()
{
    int i,j,r,c,f=0;
    printf("Enter the row and column : ");
    scanf("%d%d",&r,&c);
    int a[r][c];
    if(r==c)
    {
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                printf("Enter the no. = ");
                scanf("%d",&a[i][j]);
            }
        }
        printf("Matrix = ");
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                printf("%d ",a[i][j]);
                if((i==j && a[i][j]!=1) || (i!=j && a[i][j]!=0))
                    f=1;
            }
            printf("\n");
        }
        (f==0)?printf("Identity matrix"):printf("not Identity matrix");
    }
    else
        printf("As it ids not square, so identity matrix is not possible");
}