//WAP to check Prime-Palindrome No.
#include <stdio.h>
void main()
{
  int n,i,s=0,x,f=0;
  printf("Enter the no. : ");
  scanf("%d",&n);
  for (i=2;i<n;i++)
  {
    if(n%i==0)
    {
      f=1;
      break;
    }
  }
  for(x=n;n!=0;n/=10)
    s=s*10+n%10;
  (f==0 && s==x)?printf("%d is a Prime-Palindrome No.",x):printf("%d is not a Prime-Palindrome No.",x);    
}