//RADIX SORT
#include <stdio.h>
void radixSort(int arr[], int n) 
{
    int i,max = arr[0];
    for ( i = 1; i < n; ++i)
        if (arr[i] > max)
            max = arr[i];
    for (int exp = 1; max / exp > 0; exp *= 10) 
    {
        int ri,j,index,ra[10][n], c[10] = {0};
        for (i = 0; i < n; ++i) 
        {
            ri = (arr[i] / exp) % 10;
            ra[ri][c[ri]++] = arr[i];
        }
        for (i = 0,index = 0; i < 10; ++i) 
            for (j = 0; j < c[i]; ++j)
                arr[index++] = ra[i][j];
    }
}
void print(int a[], int n)
{
    for (int i = 0; i < n; i++)
        printf("%d%c ", a[i], i == n - 1 ? '\n' : ' ');
}
void main() 
{
    int n;
    printf("Enter the range: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter %d numbers: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("Original array: ");
    print(a, n);
    radixSort(a, n);
    printf("Sorted array: ");
    print(a, n);
}