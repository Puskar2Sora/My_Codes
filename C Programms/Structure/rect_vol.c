//Structure 6
#include<stdio.h>
struct Rect
{
  int len,br,h,vol;
}; 
void main()
{
  int i,n,maxvol;
  printf("Enter the Range = ");
  scanf("%d",&n);
  struct Rect r[n];
  //input
  for(i=0;i<n;i++)
  {
    printf("Enter the Length = ");
    scanf("%d",&r[i].len);
    printf("Enter the Breadth = ");
    scanf("%d",&r[i].br);
    printf("Enter the Height = ");
    scanf("%d",&r[i].h);
    r[i].vol=r[i].len*r[i].br*r[i].h;
  }
  //output
  maxvol=r[0].vol;
  printf("---------------------------------------------------\nLength\tBreadth\tHeight\tVolume\n---------------------------------------------------\n");
  for(i=0;i<n;i++)
  {
    printf("%d\t%d\t%d\t%d\n",r[i].len,r[i].br,r[i].h,r[i].vol);
    if(r[i].vol>maxvol)
      maxvol=r[i].vol;
  }
  printf("\nMax Volume = %d",maxvol);
  getch();
}