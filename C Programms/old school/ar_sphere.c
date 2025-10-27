//WAP to calc. Area & Volume of a sphere
#include<stdio.h>

int main()
{
    int r;
    printf("Enter the radius : ");
    scanf("%d",&r);
    printf("Area = %.2f",4*3.14*r*r);
    printf("\nVolume = %.2f",(4*3.14*r*r*r)/3);
    return 0;
}