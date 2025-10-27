//WAP to Disarium No. by using func. 2nd type
#include<stdio.h>
#include<math.h>
// 89 ,135   --> 135   -->5^3 +3^2 +1^1=135
void check(int);//func. declaration
void main()
{
   int n;
   printf("Enter the No. = ");
   scanf("%d",&n);
   check(n);//calling
}
void check(int n)
{
   int x,c=0,s=0,rem;
   for(x=n;n>0;n=n/10)
   {
      c++;
   }
   for(n=x;n>0;n=n/10)
   {
      rem=n%10;
      s=s+pow(rem,c--);
  }
   if(s==x)
     printf("%d is Disarium No. ",x);
   else
     printf("%d is NOT Disarium No. ",x);
}