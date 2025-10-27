//x^2 -x^5 +x^8 -x^11 --n & sum func. 4th type 
#include<stdio.h>
#include<math.h>
int series(int,int);
void main()
{
   int base,n;
   printf("Enter the Base & Range = ");
   scanf("%d%d",&base,&n);
   printf(" = %d ",series(base,n));//calling
}
int series(int b,int n)
{
   int i,p,s=0,j;
   for(i=1,j=2;i<=n;i++,j+=3)
    {
       p=pow(b,j);
       if(i==1)
        {
            printf(" %d ",p);
            s=s+p;
        }
        else if(i%2==0)
        {
          printf(" - %d ",p);
          s=s-p;            
        }
        else
        {
            printf(" + %d ",p);
            s=s+p;
        }
    }
    return s;
}