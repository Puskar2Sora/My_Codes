

//WAP to check the greatest between three no.
#include<stdio.h>
void main()
{
    int a,b,c;
    printf("Enter three no. = ");
    scanf("%d%d%d",&a,&b,&c);
    if (a>b && a>c)
        printf("%d is greatest",a);
    else if (a==b && b==c)
        printf("All Equal");
    else if (a==b && a<c)
        printf("1st and 2nd no. %d are equal and 3rd no. %d is greatest",a,c);
    else if (a==b && a>c)
        printf("1st and 2nd no. %d are equal and 3rd no. %d is smallest",a,c);
    else if (a==c && a<b)
        printf("1st and 3rd no. %d are equal and 2nd no. %d is greatest",a,b);
    else if (a==c && a>b)
        printf("1st and 3rd no. %d are equal and 2nd no. %d is smallest",a,b);
    else if (c==b && a>b)
        printf("2nd and 3rd no. %d are equal and 1st no. %d is greatest",b,a);
    else if (c==b && a<b)
        printf("2nd and 3rd no. %d are equal and 1st no. %d is smallest",b,a);
    else if (b>c)
        printf("%d is greatest",b);
    else
        printf("%d is greatest",c);
}