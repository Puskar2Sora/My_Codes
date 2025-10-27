//WAP to check vowel or consonant ,no. or special character
#include<stdio.h>
void main()
{
    char x;
    printf("Enter the character : ");
    scanf("%c",&x);
    if ((x>=65 && x<=90) || (x>=97 && x<=122))
    {
        if (x=='a' || x=='A' || x=='e' || x=='E' || x=='i' || x=='I' || x=='o' || x=='O' || x=='u' || x=='U' )
            printf("%c is a Vowel",x);
        else
            printf("%c is a consonant",x);
    }
    else if (x>=48 && x<=57)
        printf("%c is a Number",x);
    else
        printf("%c is a Special Character",x);
}