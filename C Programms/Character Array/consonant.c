//WAP to print vowel within a string
#include<stdio.h>
void main()
{
    char a[100];
    int i;
    printf("Enter the string : ");
    gets(a);
    printf("Consonants : ");
    for(i=0;a[i]!='\0';i++)
    {
        switch (((a[i]>=65 && a[i]<=90) || (a[i]>=97 && a[i]<=122))?1:0)
        {
            case 1:
                switch(a[i])
                {
                    case 'a':case 'e':case 'i':case 'o':case 'u':
                    case 'A':case 'E':case 'I':case 'O':case 'U':
                        break;
                    default :
                        printf("%c ",a[i]);
                        break;
                }
                break;
            case 0:
                break;
            default :
                break;
        }
    }
}