#include<stdio.h>
int bi(int n)
{
    int k;
    int a[20];
    int i=0;
    int t=n;
    while(n!=0)
    {
      a[i]=n%2;
       n=n/2;
       i++;
    }
    int s=0,c=0;
    for(int j = i-1; j >= 0; j--)
    {
        printf("%d ", a[j]);
        if(a[j]==1)
           c++;       
    }
    printf("\n");
     printf("\n Sum = %d\n",c);
    s=s+c;
     printf(" main %d   ",s);
    return s;
}
void main()
{int g,l,s=0;
    printf("Enter the number =");
    scanf("%d",&g);
    for(int i=1;i<=g;i++)
    {
      l=bi(i);
      s=s+l;
    }
    printf("%d ",s);
}