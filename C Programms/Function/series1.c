//WAP to print the series & sum by using func. 3rd type
//x^2 -x^5 +x^8 -x^11 --n
#include<stdio.h>
#include<math.h>
int series();
void main()
{
    printf(" = %d",series());
}
int series()
{
   int i,n,s=0,p,b,j;
   printf("Enter the Term = ");
   scanf("%d",&n);
   printf("Enter the Base = ");
   scanf("%d",&b);
   for(i=1,j=2;i<=n;i++,j=j+3)
   {
      p=pow(b,j);
      if(i==1)
      {
        s=s+p;
        printf("%d ",p);
      }
      else if(i%2==0)
      {
        s=s-p;
        printf(" - %d",p);
      }
      else
      {
        s=s+p;
        printf(" + %d",p);
      }
   }
   return s;
}