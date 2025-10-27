//concatenate 2 string
#include<stdio.h>
void main()
{
    char x[20],y[20],z[20];
    printf("Enter the 1st String = ");
    gets(x);
    //scanf("%[^\n]s",x);
    printf("Enter the 2nd String = ");
    gets(y);
    int i,j;
    for(i=0;x[i]!='\0';i++)
    {
        z[i]=x[i];        
    }
    z[i]=' ';
    for(i+=1,j=0;y[j]!='\0';j++,i++)
    {
        z[i]=y[j];
    }    
    z[i]='\0';
    printf("String = %s",z);
}