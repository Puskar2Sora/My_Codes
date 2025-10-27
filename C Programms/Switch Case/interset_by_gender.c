//WAP to cal. interest by gender

#include<stdio.h>
void main()
{
    int b;
    float i;
    char g;
    printf("\n'M' or 'm' for Male\n'F' or 'f' for Female\n'O' or 'o' for Other\n");
    printf("Enter Your Gender : ");
    scanf("%c",&g);
    switch((g=='M' || g=='m' || g=='F' || g=='f' || g=='O' || g=='o')?1:0)
    {
        case 1:
            printf("Enter the Basic Amount : ");
            scanf("%d",&b);
            printf("Interest = ");

            if ((g=='M' || g=='m') && b>=5000)
            {
                i=b*2/100;
                printf("%.2f /-",i);
            }
            else if ((g=='F' || g=='f') && (b>=2000 && b<=5000))
            {
                i=b*5/100;
                printf("%.2f /-",i);
            }    
            else if ((g=='O' || g=='o') && b>=2000)    
            {
                i=b*8/100;
                printf("%.2f /-",i);   
            }
            else
                printf("%.2f /-",i=0);
            break;
        case 0:
            printf("Wrong Input!!!");
            break;
        default:
            break;
    }    
    
}