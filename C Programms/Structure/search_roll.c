/*
    WAP to create a student structure which consists of following information...
    roll,name,4 subjects marks,total,average,grade and print the list 
*/
#include<stdio.h>
struct student
{
    int r,s1,s2,s3,s4,t;
    float avg;
    char nm[20],grade;
};
void main()
{
    int n,i,j,a,x,f;
    printf("Enter the no. of students : ");
    scanf("%d",&n);
    struct student s[n];
    for(i=0;i<n;i++)
    {
        s[i].t=0;
        printf("Enter the Roll no. = ");
        scanf("%d",&s[i].r);
        printf("Enter the Name : ");
        scanf("%s",&s[i].nm);
        printf("Enter the marks of subject 1 : ");
        scanf("%d",&s[i].s1);
        printf("Enter the marks of subject 2 : ");
        scanf("%d",&s[i].s2);
        printf("Enter the marks of subject 3 : ");
        scanf("%d",&s[i].s3);
        printf("Enter the marks of subject 4 : ");
        scanf("%d",&s[i].s4);
        s[i].t=s[i].s1+s[i].s2+s[i].s3+s[i].s4;
        s[i].avg=(float)s[i].t/(float)4;
        a=s[i].t/4;
        if(a>=90)
            s[i].grade='O';
        else if(a>=80)
            s[i].grade='A';
        else if(a>=70)
            s[i].grade='B';
        else if(a>=60)
            s[i].grade='C';
        else if(a>=50)
            s[i].grade='D';
        else
        s[i].grade='F';        
    }
    printf("---------------------------------------------------------------------------------------\nRoll no.\tName\t\tMarks\t\tTotal\t\tAverage\t\tGrade\n---------------------------------------------------------------------------------------\n");
    for(i=0;i<n;i++)
    {
        printf("    %d\t\t%s\t\t%d %d %d %d\t%d\t\t%.2f\t\t%c\n",s[i].r,s[i].nm,s[i].s1,s[i].s2,s[i].s3,s[i].s4,s[i].t,s[i].avg,s[i].grade);
    }
    printf("Enter the roll to search the data : ");
    scanf("%d",&x);
    for(i=0,f=0;i<n;i++)
    {
        if(s[i].r==x)
            f=i;
    }
    (f==0)?printf("Roll no. doesn't match...!!!"):printf("---------------------------------------------------------------------------------------\nRoll no.\tName\t\tMarks\t\tTotal\t\tAverage\t\tGrade\n---------------------------------------------------------------------------------------\n    %d\t\t%s\t\t%d %d %d %d\t%d\t\t%.2f\t\t%c\n",s[f].r,s[f].nm,s[f].s1,s[f].s2,s[f].s3,s[f].s4,s[f].t,s[f].avg,s[f].grade);
}