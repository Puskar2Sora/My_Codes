// 2/3 4/5 8/7   ... n 
#include<stdio.h>
void main()
{
    int n,i,x,y;
    float s=0.0;
    printf("Enter the range = ");
    scanf("%d",&n);
    for(i=1,x=2,y=3;i<n;i++,x*=2,y+=2)
    {
        printf("%d/%d + ",x,y);
        s+=(float)x/(float)y;
    }
    printf("%d/%d = %.2f",x,y,s+((float)x/(float)y));
}