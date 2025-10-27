//WAP to print Smith no. for 1-n
#include<stdio.h>
void main()
{
    int n,r,i,x,y,s1,s2;
    printf("Enter the range = ");
    scanf("%d",&r);
    printf("Smith No. from 1 to %d are ...\n",r);
    for(n=2;n<=r;n++)
    {
        for(x=n,i=2,s1=0;i<n;)
        {
            if(x%i==0)
            {
                for(y=i;y>0;y/=10)
                    s1+=y%10;
                x/=i;
            }
            else
                i++;
        }
        for(s2=0,x=n;x>0;x/=10)
            s2+=x%10;
        if(s2==s1)
            printf("%d ",n);
    }
}