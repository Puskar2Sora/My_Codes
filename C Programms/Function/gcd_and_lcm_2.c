#include<stdio.h>
#include<conio.h>
void main()
{
    int num1, num2, gcd, lcm, rem, nume, denom;
    printf("Enter two numbers\n");
    scanf("%d %d", &num1, &num2);// num1=27 num2=3  lcm=27   gcd=3 
    if (num1 > num2)//27>3
    {
        nume = num1;//nume=27
        denom = num2;//denom=3
    }
    else
    {
        nume = num2;//
        denom = num1;//

    }
    rem = nume % denom;//27%3=0
    while (rem != 0)//0!=0
    {
        nume   = denom;//nume=15
        denom = rem;//denom=5
        rem   = nume % denom;//rem=15%5=0
    }
    gcd = denom;//gcd=3
    lcm = num1 * num2 / gcd;//lcm=81/3=27
    printf("GCD of %d and %d = %d\n", num1, num2, gcd);
    printf("LCM of %d and %d = %d\n", num1, num2, lcm);
    getch();
}