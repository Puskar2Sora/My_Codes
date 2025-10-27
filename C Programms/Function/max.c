//WAP to find out max. element within an array by using func. 4th type
#include<stdio.h>
int max(int[],int);//declaration
void main()
{
  int n,i;
  printf("Enter the Range = ");
  scanf("%d",&n);
  int arr[n];
  //input
  for(i=0;i<n;i++)
  {
      printf("Enter the No. = ");
      scanf("%d",&arr[i]);
  }
  printf("Max. Element = %d",max(arr,n));
}
int max(int a[],int n)//definition
{
    int max,i;
    max=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    return max;
}