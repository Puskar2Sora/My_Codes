// Heap Sort
#include <stdio.h>
void swap(int* a, int* b)                           //*a=&arr[4]   *b=&arr[5]
{ 
    int t = *a;                                     //t=10
    *a = *b;                                        //*a=9
    *b = t;                                         //*b=10
}
void heapify(int a[], int i, int n)
{
    for (int j = 2*i+1; j<n; j=2*i+1)
    {
        int bci = j;
        if (j + 1 < n)
            if (a[j] < a[j + 1])
                bci = j + 1;
        if (a[i] < a[bci])
            swap(&a[i],&a[bci]);
        else
            break;
        i = bci;
    }
}
void BuildMaxHeap(int a[], int n)
{
    for (int i = n / 2; i >= 0; i--)
        heapify(a, i, n);
}
void sort(int a[], int n)
{
    BuildMaxHeap(a, n);
    for (int i = n-1; i >0; i--)
    {
        swap(&a[0],&a[i]);
        heapify(a, 0, i);
    }
}
void main()
{
    int n, i;
    printf("Enter the Range : ");
    scanf("%d", &n);
    int a[n];
    printf("\nEnter %d number = ",n);
    for (i = 0; i < n; i++)
        scanf("%d",&a[i]);
    sort(a, n);
    printf("\nHeap Sort list : ");
    for (i = 0; i < n; i++)
        printf("%d  ", a[i]);
}