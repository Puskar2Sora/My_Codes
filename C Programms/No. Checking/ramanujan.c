//WAP to check Hardy-Ramanujan No.
#include<stdio.h>
#include<math.h>
void main()
{
    int n,i,j,f=0;
    printf("Enter the no. = ");
    scanf("%d",&n);
    for (i = 1; i <= cbrt(n); i++)
    {
        for(j=i+1;j<=cbrt(n);j++)
        {
            if ((i*i*i+j*j*j)==n)
                f+=1;
        }
    }
    (f==2)?printf("%d is a Hardy Ramanujan no.",n):printf("%d is not a Hardy Ramanujan no.",n);     
}