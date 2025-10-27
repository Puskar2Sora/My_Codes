//palindrome string
#include<stdio.h>
#include<string.h>
void main()
{
    char x[20];
    printf("Enter the String = ");
    gets(x);
    int i,j,f=0;
    for(i=0;x[i]!='\0';i++)
    {
        if(x[i]>=97 && x[i]<=122)
          x[i]=x[i]-32;
    }
    for(i=0,j=strlen(x)-1;i<=j;i++,j--)
    {
        if(x[i]!=x[j])
        {
            f=1;
            break;
        }
    }
    if(f==1)
      printf("%s is NOT Palindrome String ",x);
    else
      printf("%s is Palindrome String ",x);
}