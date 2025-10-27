//WAP to check whether a no. is palindrome or not by using 3rd type(return type but no parameter passing)
#include<stdio.h>
int palindrome();//declaration
int n,x;//global variable
void main()
{
   if(x==palindrome())//calling
     printf("%d is Palindrome No. ",x);
   else
     printf("%d is NOT Palindrome No. ",x);
}
int palindrome()
{
    int rem,s=0;
    printf("Enter the No. = ");
    scanf("%d",&n);
    for(x=n;n>0;n=n/10)
    {
        rem=n%10;
        s=s*10+rem;
    }   
    return s;
}