//count the vowel & consonant within a string
#include<stdio.h>
void main()
{
    char x[50];
    printf("Enter the String = ");
    gets(x);
    int i,v=0,c=0,sp=0;
    for(i=0;x[i]!='\0';i++)
    {
        switch(x[i])
        {
            case 'A':case 'a':case 'E':case 'e':case 'I':case 'i':case 'O':case 'o':case 'U':case 'u':
                v++;
                break;
            case ' ':
                sp++;
                break;
            default:
                c++;
        }
    }
    printf("Vowel = %d\nConsonant = %d\nSpace = %d",v,c,sp);
}