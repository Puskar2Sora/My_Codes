//store vowel & consonant in 2 separate array.
#include<stdio.h>
void main()
{
    char x[20],v[20],c[20];
    int i,vow=0,con=0;
    printf("Enter the String = ");
    gets(x);
    for(i=0;x[i]!='\0';i++)
    {
        switch(x[i])
        {
            case 'a':case 'A':case 'e':case 'E':case 'i':case 'I':case 'o':case 'O':case 'u':case 'U':
                v[vow]=x[i];
                vow++;
                break;
            case ' ':
                break;
            default:
                c[con]=x[i];
                con++;
                break;
        }
    }
    v[vow]='\0';
    c[con]='\0';
    printf("Total Vowel List = %s Total Vowel =%d\n",v,vow);
    printf("Total Consonant List = %s Total Consonant =%d\n",c,con);
}