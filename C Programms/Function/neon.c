//Neon no. by using recursion
#include<stdio.h>
#include<conio.h>
int n,rem;
int neon(int);
void main()
{
   printf("Enter the No. = ");
   scanf("%d",&n);
   if(neon(n*n)==n)
     printf("%d is Neon No. ",n);
   else
     printf("%d is NOT Neon No. ",n);
   getch();
}
int neon(int x)
{
   if(x!=0)
   {
      return x%10+neon(x/10);
    }
   else
     return 0;
}