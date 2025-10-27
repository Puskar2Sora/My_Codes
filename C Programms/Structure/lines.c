//8
#include<stdio.h>
#include<conio.h>
struct line
{
	int l1[2],l2[2],in[2];
};
void main()
{
	int	i,n,f=0;
	printf("Enter the range =");
	scanf("%d",&n);
	struct line l[n];
	for(i=0;i<n;i++)
	{
		printf("Enter the co-ordinate of 1st line of %d no. index of structure 'line'\n",i+1);
		scanf("%d%d",&l[i].l1[0],&l[i].l1[1]);
		printf("Enter the co-ordinate of 2nd line of %d no. index of structure 'line'\n",i+1);
		scanf("%d%d",&l[i].l2[0],&l[i].l2[1]);
		if(l[i].l2[0]!=l[i].l1[0]&&l[i].l2[1]!=l[i].l1[1])
		{
			l[i].in[0]= (l[i].l1[1]-l[i].l2[1])/(l[i].l2[0]-l[i].l1[0]);
			l[i].in[1]=	l[i].l1[1]-l[i].l1[0]*l[i].in[0];
			f=1;
		}
		else
			f=0;
	}
	for(i=0;i<n;i++)
		(f==0)?printf("your %d no. two lines are parallel\n",i+1):printf("your %d no. two lines have intersected on %d,%d point\n",i+1,l[i].in[0],l[i].in[1]);	  
	getch();   
}