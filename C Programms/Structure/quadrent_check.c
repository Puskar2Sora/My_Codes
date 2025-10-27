//book vii
#include<stdio.h>
struct point
{
  int x,y;
};
void main()
{
  int i,n,f=0;
  printf("Enter the Range = ");
  scanf("%d",&n);
  struct point p[n];
  //input
  for(i=0;i<n;i++)
  {
    printf("Enter the X & Y co-ordinate Value = ");
    scanf("%d%d",&p[i].x,&p[i].y);
  }
  //output
  printf("--------------------\nX\t\tY\n--------------------\n");
  for(i=0;i<n;i++)
    printf("%d\t\t%d\n",p[i].x,p[i].y);
  //print 2nd quadrant
  for(i=0;i<n;i++)
  {
    if(p[i].x<0 && p[i].y>0)
    {
      printf("(%d,%d) present within 2nd Quadrant\n",p[i].x,p[i].y);
      f=1;
    }
  }
  if(f==0)
    printf("No element present within 2nd Quadrant");
  getch(); 
}