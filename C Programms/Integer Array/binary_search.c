//Binary Search
#include <stdio.h>
#include <conio.h>
void main()
{
    int i, f, l, m, n, x, a[10];
    printf("Enter number of elements\n");
    scanf("%d", &n);
    printf("Enter %d integers\n", n);
    //input
    for (i = 0; i < n; i++)
    {
        printf("Enter the No.=");
        scanf("%d", &a[i]);
    }
    printf("Enter value to find\n");
    scanf("%d", &x);
    f = 0;//f=0
    l = n - 1;
    m = (f+l)/2;
    for(;f <= l;m = (f + l)/2) 
    {
        if (a[m] < x)
            f = m + 1;
        else if (a[m] == x) 
        {
            printf("%d found at %d index %d location.\n", x,m, m+1);
            break;
        }
        else 
            l = m - 1;
    }
    if (f > l)
        printf("Not found! %d isn't present in the list.\n", x);
}