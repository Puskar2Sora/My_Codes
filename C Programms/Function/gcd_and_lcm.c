// C program to find GCD & LCM of two numbers  
#include <stdio.h>   
#include <conio.h>   
void main()  
{  
    int a,b;
    printf("Enter 2 No.=:");
    scanf("%d%d",&a,&b);  //15 20
    printf("GCD of %d and %d is %d ", a, b, gcd(a, b));  //gcd(15,20) 5
    printf("\nLCM of %d and %d is %d ", a, b, lcm(a, b)); //lcm(15,20) 60
    getch();  
}  
int x;
int gcd(int a, int b)  //a=0 b=5
{  
    if (a == 0) //0==0
    {
        x=b;//x=5
        return b;//5
    }
    else  
     return gcd(b % a, a); //recusion gcd(0,5) 
}  
int lcm(int a, int b)  //a=15 b=20
{  
    return (a*b)/x; //without recursion (15*20)/5  60
}