//WAP to take input into a string & print the string
#include<stdio.h>
void main()
{
    char x[20];
    printf("Enter the String = ");
    //scanf("%[^\n]s",&x);
    gets(x);
    //printf("String = %s",x);
    //puts(x);
   for(int i=0;x[i]!='\0';i++)
    {
        printf("value = %c Address = %u\n",x[i],&x[i]);
    }
}