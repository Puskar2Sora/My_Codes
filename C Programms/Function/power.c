//power of a no. using recursion
#include <stdio.h>
#include <conio.h>
int power(int,int);
int main() 
{
    int base, a, result;
    printf("Enter base number: ");
    scanf("%d", &base);//base=2
    printf("Enter power number(positive integer): ");
    scanf("%d", &a);//a=0
    result = power(base, a);//calling power(2,0) result=1
    printf("%d^%d = %d", base, a, result);//1
    getch();
    return 0;
}

int power(int base, int a)//base=2 a=0
{
    if (a != 0)//0!=0
        return (base * power(base, a - 1));//64*power(4,1-1)
    else
        return 1;
}