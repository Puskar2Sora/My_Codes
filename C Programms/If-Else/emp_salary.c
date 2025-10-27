//WAP to check the designation
#include<stdio.h>

int main() 
{
    int b,da,ta,hra,gs,pf,ns;
    printf("Enter the Basic Salary : ");
    scanf("%d",&b);
    da=b*5/100;
    ta=b*10/100;
    hra=b*15/100;
    pf=b*20/100;
    ns=b-pf;
    gs=b+da+ta+hra;
    printf("Basic Salary = %d\nDA = %d\nTA = %d\nHRA = %d\nGross Salary = %d\nPF = %d\nNet Salary = %d\n",b,da,ta,hra,gs,pf,ns);
    //Designation
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