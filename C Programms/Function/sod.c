// Recursive C program to find sum of digits  
// of a number 
#include <stdio.h> 
#include <conio.h>   
// Function to check sum of digit using recursion
int sum_of_digit(int);
void main() 
{ 
    int num,result;
    printf("Enter the No.=");
    scanf("%d",&num); //num=123
    result = sum_of_digit(num); //calling num=123 result=6
    printf("Sum of digits in %d is %d\n", num, result); 
    getch();
}
int sum_of_digit(int n) //n=0
{ 
    if (n == 0) 
       return 0; 
    else
    return (n % 10 + sum_of_digit(n / 10)); //6 +sum_of_digit(0)
}