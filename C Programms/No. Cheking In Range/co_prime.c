//WAP to check Co-Prime no.
#include<stdio.h>
void main()
{
    int a,b,f,r;
    printf("Enter The range : ");
    scanf("%d",&r);
    printf("Co-Prime no. in range of 1 - %d are ...\n",r);
    for(a=2;a<=r;a++)
    {
        for(b=2;b<=r;b++)
        {
            for(int i=1,f=1;i<=b;i++)
            {
                if(a%i==0 && b%i==0)
                    f=i;
            }
            if(f==1)
                printf("%d and %d \n",a,b);
        }
    }
}