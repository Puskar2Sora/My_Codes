//WAP to reverse a string by using system defined function or library function or inbuilt func.
#include<stdio.h>
#include<string.h>
void main()
{
   char x[20];
   printf("Enter the String = ");
   gets(x);
   printf("String = %s",x);
   strrev(x);
   printf("\nReverse String = %s",x);
}