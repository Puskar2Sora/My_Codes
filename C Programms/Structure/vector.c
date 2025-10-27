//9
#include<stdio.h>
#include<conio.h>
struct  vector
{
	int v1[3],v2[3],v3[3];
};
void main()
{
  int	i,n;
  printf("Enter the range =");
  scanf("%d",&n);
  struct vector v[n];
  for(i=0;i<n;i++)
  {
    printf("Enter the x,y,z components of A vector of %d no. index of structure 'vector'\n",i+1);
    scanf("%d%d%d",&v[i].v1[0],&v[i].v1[1],&v[i].v1[2]);
    printf("Enter the x,y,z components of B vector of %d no. index of structure 'vector'\n",i+1);
    scanf("%d%d%d",&v[i].v2[0],&v[i].v2[1],&v[i].v2[2]);
    v[i].v3[0]=(v[i].v1[1]*v[i].v2[2])-(v[i].v1[2]*v[i].v2[1]);
    v[i].v3[1]=(v[i].v1[2]*v[i].v2[0])-(v[i].v1[0]*v[i].v2[2]);	
    v[i].v3[2]=(v[i].v1[0]*v[i].v2[1])-(v[i].v2[0]*v[i].v1[1]);
  }
  for(i=0;i<n;i++)
  {
    if(v[i].v3[0]==0 && v[i].v3[1]==0 && v[i].v3[2]==0)
      printf("your %d no. two vectors are parallel\n",i+1);	
    else
    {
      if(v[i].v3[0]<0)
      printf("%d no. AxB = %di^+%dj^+%dk^\n",i+1,v[i].v3[0],v[i].v3[1],v[i].v3[2]);	
      else if(v[i].v3[1]<0)
      printf("%d no. AxB = %di^%dj^+%dk^\n",i+1,v[i].v3[0],v[i].v3[1],v[i].v3[2]);	             	        
      else if(v[i].v3[2]<0)
      printf("%d no. AxB = %di^+%dj^-%dk^\n",i+1,v[i].v3[0],v[i].v3[1],v[i].v3[2]);	             	        
    }   
  }
  getch();  
}