//substring within a string by using system defined function or library function or inbuilt func.
#include<stdio.h>
#include<string.h>
void main()
{
   char x[20],y[20],*t;
   printf("Enter the Main String = ");
   gets(x);
   printf("Enter the SubString = ");
   gets(y);
   t=strstr(x,y);
   (t!=NULL)?printf("(%s) Found",y):printf("(%s) NOT Found",y);
}