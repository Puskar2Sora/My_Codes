//WAP to Check Unique NO.
#include<stdio.h>
void main()
{
    int x,n,y,f=0,c=0;
    printf("Enter the no. = ");
    scanf("%d",&n);
    for(x=n;n!=0;n/=10,x=y,c++)
    {
        for(y=x;x!=0;x/=10)
        {
            if (n%10==x%10)
                f+=1; 
        }
    }
    (f!=c)?printf("%d is Not a Unique No.",y):printf("%d is an Unique No.",y);       
}
