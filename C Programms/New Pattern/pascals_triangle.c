/*
       1 
      1 1
     1 2 1
    1 3 3 1
*/
#include <stdio.h>
int fact(int n) 
{
    int f = 1;
    for (int i = 1; i <= n; i++) 
        f*=i;
    return f;
}
int value(int n, int r) 
{
    return fact(n) / (fact(r) * fact(n - r));
}
void main() 
{
    int i,j,sp,n;
    printf("Enter Rows:");
    scanf("%d",&n);
    for (i = 0; i<n; i++) 
    {
        for (sp=0; sp<n-i-1; sp++) 
            printf(" ");      
        for (j = 0; j <= i; j++) 
            printf("%d ", value(i, j));
        printf("\n");
    }
}