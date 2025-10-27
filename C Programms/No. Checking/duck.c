//WAP to check Duck no.
#include<stdio.h>
void main()
{
    char x[5];
    int i,f=0,g=0;
    printf("Enter the no. = ");
    gets(x);
    for(i=0;x[i]!='\0';i++)
    {
        if(x[0]=='0')
        {
            f=1;
            break;
        }
        else if(x[i]=='0')
        {
            g=1;
            break;
        }
    }
    (f==0 && g==1)?printf("%s  is a Duck no.",x):printf("%s is not a Duck no.",x);
}