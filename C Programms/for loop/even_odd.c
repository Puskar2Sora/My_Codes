//WAP to print even & odd List
#include<stdio.h>
void main()
{
    int n,i;
    printf("Enter the range = ");
    scanf("%d",&n);
    printf("------------\nOdd\tEven\n------------\n");
    for (i=1;i<=n;i++)
    {
        (i%2==1)?printf("%d",i):printf("\t%d\n",i);
    }
}