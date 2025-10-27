//WAP to print vowel within a string
#include<stdio.h>
void main()
{
    char a[100];
    int i;
    printf("Enter the string : ");
    gets(a);
    printf("Vowels : ");
    for(i=0;a[i]!='\0';i++)
    {
        switch (a[i])
        {
        case 'a':case 'e':case 'i':case 'o':case 'u':
        case 'A':case 'E':case 'I':case 'O':case 'U':
            printf("%c ",a[i]);
            break;
        
        default:
            break;
        }
    }
}