//WAP tp check Circular Prime
#include<stdio.h>
void main() 
{
    int n, x, i, f = 0, c = 0, power = 1;
    printf("Enter the number = ");
    scanf("%d", &n);
    for (x = n; x != 0; x /= 10,c++) // Count power
        power *= 10;
    for (i = 1,power/=10 ; i <= c; i++,n=(n%power)*10 + n/power)// Check circular prime 
    {
        int isPrime = 1;// Check prime
        for (int j = 2; j * j <= n; j++) {
            if (n % j == 0) {
                isPrime = 0;
                break;
            }
        }
        if (isPrime!=1) {
            f = 1;
            break;
        }   
    }
    (f == 0) ? printf("%d is a Circular Prime number.", x) : printf("%d is not a Circular Prime number.", x);
}