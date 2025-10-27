//WAP to reverse string & print length of the string
#include<stdio.h>
#include<string.h>
int rev(char[]);//func. declaration
void main()
{
   char x[20];
   printf("Enter the String = ");
   scanf("%[^\n]s",&x);
   printf("\nLength of the string = %d",rev(x));
}
int rev(char a[])//func. definition
{
   int i;
   printf("String = %s\n",a);
   for(i=strlen(a)-1;i>=0;i--)
     {
        printf("%c",a[i]);
     }
     return strlen(a);
}