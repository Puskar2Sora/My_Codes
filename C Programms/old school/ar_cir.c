//WAP to calc. area & perimeter of a circle
#include<stdio.h>

int main()
{
    int r;
    printf("Enter the radius : ");
    scanf("%d",&r);
    printf("Area = %.2f",3.14*r*r);
    printf("\nPerimeter = %.2f",2*3.14*r);
    return 0;
}