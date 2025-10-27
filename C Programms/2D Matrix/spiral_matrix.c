#include <stdio.h>
void main() 
{
    int r,c,i,j;
    printf("Enter Rows & Columns:");
    scanf("%d%d",&r,&c);
    int a[r][c];
    int rst=0,cst=0,rnd=r-1,cnd=c-1;   
    while (rst<=rnd && cst<=cnd) 
    {
      for(j=cst;j<=cnd;j++) 
      {
        printf("Enter No. for (%d,%d):",rst,j);
        scanf("%d",&a[rst][j]);
      }
      rst++;
      for (i=rst;i<=rnd; i++) 
      {
        printf("Enter No. for (%d,%d):",i,cnd);
        scanf("%d",&a[i][cnd]);
      }
      cnd--;
      if (rst<=rnd) 
      {
        for(j=cnd;j>=cst; j--) 
        {
          printf("Enter No. for (%d,%d):",rnd,j);
          scanf("%d",&a[rnd][j]);
        }
        rnd--;
      }
      if (cst<=cnd) 
      {
        for (i=rnd;i>=rst;i--) 
        {
          printf("Enter No. for (%d,%d):",i,cst);
          scanf("%d",&a[i][cst]);
        }
        cst++;
      }
    }    
    for(i=0;i<r;i++) 
    {
     for(j=0;j<c;j++) 
     {
        printf("%d ",a[i][j]);
     }
     printf("\n");
    }
}