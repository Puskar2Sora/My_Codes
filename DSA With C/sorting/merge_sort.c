#include <stdio.h>
#include <stdlib.h>  // for malloc and free
void merge(int arr[], int l, int m, int r)// Function to merge two sorted subarrays 
{
    int i, j, k, n1 = m - l + 1, n2 = r - m,*L = (int *)malloc(n1 * sizeof(int)), *R = (int *)malloc(n2 * sizeof(int));// Dynamically allocate memory for temporary subarrays
    for (i = 0; i < n1; i++)// Copy data into temporary arrays L[] and R[]
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];
    for (i = j = 0, k = l;i < n1 && j < n2;) // Merge the temporary arrays back into arr[l..r]
        if (L[i] <= R[j])
            arr[k++] = L[i++];
        else
            arr[k++] = R[j++];
    while (i < n1)// Copy remaining elements of L[], if any
        arr[k++] = L[i++];
    while (j < n2)// Copy remaining elements of R[], if any
        arr[k++] = R[j++];
    free(L);// Free allocated memory
    free(R);
}
void mergeSort(int arr[], int l, int r) // Recursive merge sort function
{
    if (l < r) 
    {
        int m = l + (r - l) / 2;  // Calculate middle index
        mergeSort(arr, l, m);// Recursively sort first and second halves
        mergeSort(arr, m + 1, r);
        merge(arr, l, m, r);// Merge sorted halves
    }
}
void printArray(int ar[], int n)// Function to print the array 
{
    for (int i = 0; i < n; i++)
        printf("%d%c", ar[i], i == n - 1 ? '\n' : ' ');
}
void main() 
{
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the %d elements:\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("\n* Given array is: *\n");
    printArray(arr, n);
    mergeSort(arr, 0, n - 1);
    printf("\n* Sorted array is: *\n");
    printArray(arr, n);
}