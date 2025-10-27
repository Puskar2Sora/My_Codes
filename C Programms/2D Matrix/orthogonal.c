//Orthogonal 3x3 Matrix checking
#include<stdio.h>
#include<math.h>
main()
{
    int i,j,row,col,det=0, add, prc, f=0;
    int first=1, last=1;
//Input of matrix
    printf("Determinant Value Calculation.\n\n");
    printf("Matrix should be square matrix.\n[Limitation : This is a prototype of 3x3 Matrix's determinant calculation.]\n\nEnter the Row & Column : ");
    scanf("%d",&row);
    col = row;
    int m[row][col],trans[row][col],id[row][col];

    printf("\nEnter matrix's Eelements : \n");
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            printf(" (%d,%d) : ",i,j);
            scanf("%d",&m[i][j]);
            trans[j][i]=m[i][j];
        }
    }
//Printing of this matrix & calculation of determinant & adjoint.
    printf("\nThe Multiplication result Matrix :\n");
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
            printf(" %d",m[i][j]);
        printf("\t");
        for(j=0; j<col; j++)
        {
            for(add=prc=0; prc<row; prc++)
                add+=(m[i][prc]*trans[prc][j]);
            id[i][j]=add;
            if((i==j && id[i][j]!=1) || id[i][j]!=0)
                f=1;
            printf(" %d ",id[i][j]);
        }
        printf("\n");
    }

    (f==0)?printf("It's an Orthogonal Matrix."):printf("It's not an Orthogonal Matrix.");
}