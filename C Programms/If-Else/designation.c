//WAP to check the designation
#include<stdio.h>

int main() 
{
    int b;
    printf("Enter the Basic Salary : ");
    scanf("%d",&b);
    if (b > 300000)
        printf("Designation = 'C.E.O.'");
    else if (b > 150000)
        printf("Designation = 'B.M.'");
    else if (b > 80000)
        printf("Designation = 'Sr. T.L.'");
    else if (b > 40000)
        printf("Designation = 'T.L.'");
    else if (b > 20000)
        printf("Designation = 'Executive'");
    else if (b > 10000)
        printf("Designation = 'Clerk'");
    else  
        printf("Designation = 'Peon'");
    return 0;
}