//input --> meeraj kumar sarkar   output--> SARKAR KUMAR MEERAJ
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
    for(i=0;x[i]!='\0';i++)
    {
         if(x[i]==' ')
           j=i; 
    }        
    for(i=j+1;x[i]!='\0';i++)
      printf("%c",x[i]);
    for(i=0;x[i]!=' ';i++)
      {

      } 
    for(int k=i;k<=j;k++)
      printf("%c",x[k]); 
    for(int k=0;k<i;k++)
     printf("%c",x[k]); 
}