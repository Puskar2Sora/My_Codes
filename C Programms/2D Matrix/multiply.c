// WAP to Multiply 2 Matrix
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j,r1,c1,r2,c2,k,s=0,r;
	printf("Enter the NO. of Rows and the NO. of Coloums{(r1,c1),(r2,c2)} : ");
	scanf("%d%d%d%d",&r1,&c1,&r2,&c2);
	int ar[r1][c1],br[r2][c2],cr[r1][c2];
	if(c1==r2)
	{
	//input
	for(i=0;i<r1;i=i+1)
	{
		for(j=0;j<c1;j=j+1)
		{
			printf("Enter the No. for 1st Matrix: ");
			scanf("%d",&ar[i][j]);
		}
	}
	for(i=0;i<r2;i=i+1)
	{
		for(j=0;j<c2;j=j+1)
		{
			printf("Enter the No. for 2nd Matrix: ");
			scanf("%d",&br[i][j]);
		}
	}
	printf("1st Matrix \n");
	for(i=0;i<r1;i=i+1)
	{
		for(j=0;j<c1;j=j+1)
		{
			printf("%d  ",ar[i][j]);
		}
		printf("\n");
	}
	printf("2nd Matrix \n");
	for(i=0;i<r2;i=i+1)
	{
		for(j=0;j<c2;j=j+1)
		{
			printf("%d  ",br[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<r1;i=i+1)
	{
		for(k=0;k<r1;k=k+1)
		{
			for(j=0;j<r2;j=j+1)
			{
				if(k==0 && i==0)
				{r=ar[i][j]*br[j][i];}
				else
				{r=ar[i][j]*br[j][k];}
				
				s=s+r;
			}
			cr[i][k]=s;
			s=0;
		}
	}
	printf("Multiplication of the Two Matrix \n");
	for(i=0;i<r1;i=i+1)
	{
		for(j=0;j<c2;j=j+1)
		{
			printf("%d  ",cr[i][j]);
		}
		printf("\n");
	}
	}
  	else
	printf("Wrong Input");
    getch();
}   `