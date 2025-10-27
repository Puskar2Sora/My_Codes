//WAP to print Evil no. from 1 to n
#include<stdio.h>
void main()
{
    int n,r,i,x,s,c;
    printf("Enter the range = ");
    scanf("%d",&r);
    printf("Evil no. from 1 to %d are ...\n",r);
    for(n=1;n<=r;n++)
    {
        for(x=n,i=1,c=0,s=0;x!=0;x/=2,i*=10,s+=(x%2)*i)
        {
            if(x%2==1)
                c++;
        }
        if (c%2==0)
            printf("%d : %d\n",n,s);
    }
}