//WAP to check Co-Prime no.
#include<stdio.h>
void main()
{
    int a,b,f=0;
    printf("Enter Two No. : ");
    scanf("%d%d",&a,&b);
    for(int i=2;i<a || i<b;i++)
    {
        if(a%i==0 && b%i==0)
        {  
            f=1;
            break;
        }
    }
    (f==0)?printf("%d and %d are co-prime no.",a,b):printf("%d and %d are not co-prime no.",a,b);
}