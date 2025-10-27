//WAP to print the pattern by using func. 2nd type
/*
   *
  * *
 * * *
* * * * 
*/
#include<stdio.h>
void pattern(int);
void main()
{
    int n;
    printf("Enter the Range = ");
    scanf("%d",&n);
    pattern(n);//calling
}
void pattern(int n)
{
    int i,j,sp;
    for(i=1;i<=n;i++)
    {
        for(sp=n-1;sp>=i;sp--)
        {
          printf(" ");
        }
        for(j=1;j<=i;j++)
        {
           printf("* ");
        }
        printf("\n");
    }
}