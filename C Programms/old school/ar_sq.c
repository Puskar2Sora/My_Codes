//WAP to calc. area & perimeter of a square
#include<stdio.h>

int main()
{
    int s;
    printf("Enter the side length : ");
    scanf("%d",&s);
    printf("Area = %d",s*s);
    printf("\nPerimeter = %d",s*4);
    return 0;
}