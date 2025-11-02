#include <stdio.h>
void shellSort(int arr[], int n){
    for (int gap = n / 2; gap > 0; gap /= 2)
        for (int i = gap; i < n; i++){
                 int temp = arr[i], j;
            for (j = i; j >= gap && arr[j - gap] > temp; j -= gap) 
                 arr[j] = arr[j - gap];
            arr[j] = temp;
     }
}
void main(){
    int arr[10], n;
    printf("Enter the Range = "); 
    scanf("%d", &n);
    printf("Enter the Elements = ");
    for (int i = 0; i < n; i++) 
         scanf("%d", &arr[i]);
    printf("Original array: ");
    for (int i = 0; i < n; i++) 
    printf("%d ", arr[i]); 
    printf("\n");
    shellSort(arr, n);
    printf("Sorted array: ");
    for (int i = 0; i < n; i++)
     printf("%d ", arr[i]); 
     printf("\n");
}