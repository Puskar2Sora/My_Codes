//selection sort
#include<stdio.h>
void main()
{
    int n, i, j, pos, swap,k=1;
    printf("Enter number of elements\n");
    scanf("%d", &n);//n=5
    int a[n];
    printf("Enter %d integers\n", n);
    for (i = 0; i < n; i++)//input loop
        scanf("%d", &a[i]);
    for (i = 0; i < n-1; i++,k++)//selection
    {
        for (pos = i,j= i + 1; j < n; j++)
            if (a[pos] > a[j])
                pos = j;
        swap = a[i];
        a[i] = a[pos];
        a[pos] = swap;
        printf("After  Iteration = %d :\n",k);
        for (j = 0; j < n; j++)
            printf("%d%c ", a[j],(j==n-1)?'\n':' ');
    }
}