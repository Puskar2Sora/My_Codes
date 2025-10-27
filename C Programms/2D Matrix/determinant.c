//WAP to print the determinant of a matrix
#include<stdio.h>
#include<stdlib.h>
void main()
{
    int i,j,r,c,k,s=0;
    printf("Enter the No. of Row & column = ");
    scanf("%d%d",&r,&c);
    int a[r][c],x[(r-1)*(r-1)],q;
    if(r!=c)
    {
        printf("Tomar ta square naa tai korbo na..:)");
        exit(0);
    }
    printf("Enter the No. using ' ' = ");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
            scanf("%d",&a[i][j]);
    }
    printf("Matrix = \n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
            printf("%d ",a[i][j]);
        printf("\n");
    }
    if(r==2)
    {
        printf("Solve = %d",a[0][0]*a[1][1]-a[1][0]*a[0][1]);
        exit(0);
    }
    for(k=0;k<r;k++)
    {
        for(i=0,q=0;i<r;i++)
        {
            if(k!=i)
            {
                for(j=0;j<c;j++)
                {
                    if(j!=0)
                        x[q++]=a[i][j];
                }
            }
        }
        if(k==1)
            s-=a[k][0]*(x[0]*x[3]-x[1]*x[2]);
        else
            s+=a[k][0]*(x[0]*x[3]-x[1]*x[2]);
    }
    printf("\n\nSolve = %d",s);
}