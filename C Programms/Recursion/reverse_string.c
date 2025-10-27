//WAP to reverse a string using Recursion
#include<stdio.h>
char* rev(char[]);
void main()
{
    char str1[100],*r;
    printf("Enter the string : ");
    scanf("%s",str1);
    r = rev(str1);//call the function rev
    printf("The reversed string is : %s\n",r);
}
char* rev(char str1[])
{
    static int i=0;
    static char r[100];
    if(*str1)//Checks if the pointer is pointing the '\0' or not
    {
        rev(str1+1);
        r[i++] = *str1;
    }
    return r;
}