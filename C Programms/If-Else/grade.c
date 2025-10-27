//WAP to calc. the grade
#include<stdio.h>

void main()
{
    int n,t,avg;
    printf("Enter the total no. of subjects : ");
    scanf("%d",&n);
    printf("Enter the Total Marks out of %d : ",n*100);
    scanf("%d",&t);
    avg=t/n;
    printf("Average = %d\n",avg);
    if (avg > 90)
        printf("Grade = 'AA'");
    else if (avg > 80)
        printf("Grade = 'A'");
    else if (avg > 60)
        printf("Grade = 'B'");
    else if (avg > 40)
        printf("Grade = 'C'");
    else
        printf("Grade = 'D'");
}