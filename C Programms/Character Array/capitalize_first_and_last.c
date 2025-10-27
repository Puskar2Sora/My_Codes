// input : satyam mondal  Output : SatyaM MondaL
//WAP to convert lower case to upper case 
#include<stdio.h>
char convert(char n)
{
    return (n>=97 && n<=122)?n-=32:n;
}
void main()
{
    char a[50];
    int i;
    printf("Enter the String : ");
    gets(a);
    printf("Before : %s\n",a);
    for(i=0;a[i]!='\0';i++)
    {
        if(i==0 || a[i+1]=='\0')
            a[i]=convert(a[i]);
        else if(a[i]==' ')
        {
           a[i+1]=convert(a[i+1]);
           a[i-1]=convert(a[i-1]); 
        }
    }
    printf("After : %s",a);
}