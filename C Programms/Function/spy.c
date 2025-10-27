//WAP to check whether a no. is spy or not by using 3rd type(return type but no parameter passing)
#include<stdio.h>
int spy();//declaration
int n,x;//global variable
void main()
{
   int a= spy();//calling
   if(a==1)
      printf("%d is Spy No.",x);
   else
      printf("%d is NOT Spy No.",x);
}
int spy()
{
    int rem,s=0,p=1;
    printf("Enter the No. = ");
    scanf("%d",&n);
    for(x=n;n>0;n=n/10)
    {
        rem=n%10;
        s=s+rem;
        p=p*rem;
    }
    if(s==p)
      return 1;
    else
      return 0;   
}