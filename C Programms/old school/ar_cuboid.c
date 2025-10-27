//WAP to calc. Area & Volume of a Cuboid
#include<stdio.h>

int main()
{
    int l,b,h;
    printf("Enter the length : ");
    scanf("%d",&l);
    printf("Emter the breadth : ");
    scanf("%d",&b);
    printf("Enter the height : ");
    scanf("%d",&h);
    printf("Area = %d",2*(l*b+b*h+h*l));
    printf("\nVolume = %d",l*b*h);
    return 0;
}