/*
    WAP to create a student structure of n No. student which consists of following info...
    1. input roll,name,4 sub. marks calc. total,avg,grade & sort the record in respect of total in descending order
*/
#include<stdio.h>
struct student
{
    int roll,be,phy,math,chem,total,avg;
    char nm[15],grd;
}; 
struct student st;
void main()
{
  int i,n,j;
  printf("Enter the No. of Student = ");
  scanf("%d",&n);
  struct student s[n];
  //input
  for(i=0;i<n;i++)
  {
    printf("Enter the Roll No. =");
    scanf("%d",&s[i].roll);
    printf("Enter the Name =");
    scanf("%s",&s[i].nm);
    printf("Enter the Marks of BE =");
    scanf("%d",&s[i].be);
    printf("Enter the Marks of Phy =");
    scanf("%d",&s[i].phy);
    printf("Enter the Marks of Chem =");
    scanf("%d",&s[i].chem);
    printf("Enter the Marks of Math =");
    scanf("%d",&s[i].math);
    s[i].total=s[i].math+s[i].be+s[i].phy+s[i].chem;
    s[i].avg=s[i].total/4;
    if(s[i].avg>=0 && s[i].avg<=40)
      s[i].grd='D';
    else if(s[i].avg>40 && s[i].avg<=60)
      s[i].grd='C';
    else if(s[i].avg>60 && s[i].avg<=80)
      s[i].grd='B';
    else if(s[i].avg>80 && s[i].avg<=90)
      s[i].grd='A';
    else
      s[i].grd='E';
  }
  //print
  printf("----------------------------------------------------------------------------------------------------------\nRoll\tName\tBE\tPhy\tChem\tMath\tTotal\tAvg\tGrade\n----------------------------------------------------------------------------------------------------------\n");
  for(i=0;i<n;i++)
    printf("%d\t%s\t%d\t%d\t%d\t%d\t%d\t%d\t%c\n",s[i].roll,s[i].nm,s[i].be,s[i].phy,s[i].chem,s[i].math,s[i].total,s[i].avg,s[i].grd);
  //sorting
  for(i=0;i<n;i++)
  {
    for(j=0;j<n-1;j++)
    {
      if(s[j].total<s[j+1].total)
      {
        st=s[j];
        s[j]=s[j+1];
        s[j+1]=st;
      }
    }
  }
    //after sorting list
  printf("----------------------------------------------------------------------------------------------------------\nRoll\tName\tBE\tPhy\tChem\tMath\tTotal\tAvg\tGrade\n----------------------------------------------------------------------------------------------------------\n");
  for(i=0;i<n;i++)
    printf("%d\t%s\t%d\t%d\t%d\t%d\t%d\t%d\t%c\n",s[i].roll,s[i].nm,s[i].be,s[i].phy,s[i].chem,s[i].math,s[i].total,s[i].avg,s[i].grd);
}
