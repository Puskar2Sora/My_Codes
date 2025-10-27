//WAP to check Evil No.
#include<stdio.h>
void main()
{
    int n,s[5],x,i=0,j,c=0;
    printf("Enter the no. = ");
    scanf("%d",&n);
    for(x=n;n!=0;n/=2,i++)
    {
        s[i]=n%2;
        if((n%2)==1)
            c++;
    }
    printf("Binary of %d = ",x);
    for(j=i-1;j>=0;j--)
        printf("%d",s[j]);
    (c%2==0)?printf("\n%d is an Evil no.",x):printf("\n%d is not an Evil no.",n);
}