//WAP to check Vowel
#include<stdio.h>
void main()
{
    char x;
    printf("Enter the character : ");
    scanf("%c",&x);
    if ((x>=65 && x<=90) || (x>=97 && x<=122))
    {
        switch (x)
        {
        case 'a':case 'A':
        case 'e':case 'E':
        case 'i':case 'I':
        case 'o':case 'O':
        case 'u':case 'U':
            printf("'%c' is a Vowel",x);
            break;
        default:
            printf("'%c' is a consonant",x);
            break;
        }
    }
    else if(x>=48 && x<=57)
        printf("'%c' is a Number",x);
    else
        printf("'%c' is a special character",x);
}
