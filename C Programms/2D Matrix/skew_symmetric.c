//WAp to take input into a matrix & print the matrix & find out the Transpose of a Matrix
#include<stdio.h>
void main()
{
    int i,j,r,c,f=1;
    printf("Enter the No. of Row & column = ");
    scanf("%d%d",&r,&c);
    int a[r][c],t[r][c];
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
        //transpose
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
            t[i][j]=a[j][i];
            }
        }
        printf("\nTranspose = \n");
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                printf("%d ",t[i][j]);
                if(t[i][j]==-a[i][j])
                    f=0;
            }
            printf("\n");
        }
        (f==0)?printf("Skew Symmetric Matrix"):printf("Not a Skew Symmetric Matrix");
    }
   else
     printf("As the Matrix is Not SQuare so Transpose can't be formed");
}