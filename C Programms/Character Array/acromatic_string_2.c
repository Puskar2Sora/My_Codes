//input --> meeraj kumar sarkar   output--> M.K.SARKAR
#include<stdio.h>
void main()
{
    char x[25];
    int i,j;
    printf("Enter the String = ");
    gets(x);
    for(i=0;x[i]!='\0';i++)
    {
        if(x[i]>=97 && x[i]<=122)
           x[i]=x[i]-32;
    }
    printf("String = %s\n",x);
    printf("%c",x[0]);
    for(i=1;x[i]!='\0';i++)
    {
        if(x[i]==' ')
        {
            printf(".%c",x[i+1]);
            j=i;
        }
    }
    for(i=j+2;x[i]!='\0';i++)
      printf("%c",x[i]);
}