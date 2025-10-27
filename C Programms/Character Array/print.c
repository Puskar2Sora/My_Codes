//WAP to take input into a string & print the string
#include<stdio.h>
void main()
{
    char x[20];
    printf("Enter the String = ");
    //scanf("%[^\n]s",&x);
    gets(x);
    printf("Before = %s\nAfter = ",x);
    for(int i=0;x[i]!='\0';i++)
    {
        if(i!=0 && x[i+1]!='\0')
            printf("%c",x[i]);
    }
}