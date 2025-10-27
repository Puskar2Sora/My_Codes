//WAP to check designation 
#include<stdio.h>
void main()
{
    int n;
    printf("Enter the Net salary : ");
    scanf("%d",&n);
    printf("Designation = ");
    switch ((n>300000)?1:(n>150000)?2:(n>80000)?3:(n>40000)?4:(n>20000)?5:(n>10000)?6:7)
    {
    case 1:
        printf("'C.E.O.'");
        break;
    case 2:
        printf("'.M.'");
        break;   
    case 3:
        printf("'Sr. T.L.'");
        break;
    case 4:
        printf("'T.L.'");
        break; 
    case 5:
        printf("'Executive'");
        break;
    case 6:
        printf("'Clerk'");
        break;
    case 7:
        printf("'Peon'");
        break;
    default:
        break;
    }
}