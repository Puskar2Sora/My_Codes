//WAP to calc. area & perimeter of a Rectangle
#include<stdio.h>

int main()
{
    int l,b;
    printf("Enter the length : ");
    scanf("%d",&l);
    printf("Enter the breadth : ");
    scanf("%d",&b);
    printf("Area = %d",l*b);
    printf("\nPerimeter = %d",2*(l+b));
    return 0;
}