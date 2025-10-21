#include<stdio.h>
void main()
{
   int i ,j,f=0,n;
   printf("Enter the no.=");
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
      for(j=2;j<=i;j++)
      {
         if(i%j==0)
          f++;
      }
      if(f==1)
         printf("%d  ",i);
   }
}