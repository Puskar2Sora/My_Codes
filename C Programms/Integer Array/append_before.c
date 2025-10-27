/* 11
      input --> 14 35  48  65  75
      output--> 14 -1 35 48 -1 65 -1 75
*/
#include<stdio.h>
void main()
{
    int x,i,n;
    printf("Enter the Range = ");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        printf("Enter the No. = ");
        scanf("%d",&x);
        if(x%5==0)
        {
            a[i]=-1;
            a[i+1]=x;
            i++;
            n++;
        }       
        else
          a[i]=x; 
    }   
    //print
    for(i=0;i<n;i++)
      printf("%d ",a[i]);
}