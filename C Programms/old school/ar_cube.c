//WAP to calc. Area & Volume of a Cube
#include<stdio.h>

int main()
{
    int s;
    printf("Enter the side length : ");
    scanf("%d",&s);
    printf("Area = %d",6*s*s);
    printf("\nVolume = %d",s*s*s);
    return 0;
}