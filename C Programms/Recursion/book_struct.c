/* 
    Create a structure named Book to store book details like title,author,and price.
    WAP to input details for three books, find the most expensive and lowest priced books and display their info.
*/

#include<stdio.h>
#define M 100
struct book
{
    char t[M],au[M];
    int pr;
};

void main()
{
    int n,i,max,min,j,k;
    printf("Enter the no. of books : ");
    scanf("%d",&n);
    struct book b[n];
    for(i=0;i<n;i++)
    {
        printf("Enter the Title : ");
        scanf("%s",b[i].t);
        printf("Enter the Author's Name : ");
        scanf("%s",b[i].au);
        printf("Enter the Price of %s : ",b[i].t);
        scanf("%d",&b[i].pr);
    }
    printf("\nTitle\t\tAuthor\t\tPrice\n");
    for(i=0,min=max=b[i].pr;i<n;i++)
    {
        printf("%s\t\t%s\t\t%d /-\n",b[i].t,b[i].au,b[i].pr);
        if(b[i].pr>max)
        {
            max=b[i].pr;
            j=i;
        }
            
        if(b[i].pr<min)
        {
            min=b[i].pr;
            k=i;
        }
    }
    for(i=0;i<n;i++)
    {
        if(b[i].pr==max)
            printf("\nMost expensive Book Details : \n\nTitle\t\tAuthor\t\tPrice\n%s\t\t%s\t\t%d /-\n",b[i].t,b[i].au,b[i].pr);
        if(b[i].pr==min)
            printf("\nLeast expensive Book Details : \n\nTitle\t\tAuthor\t\tPrice\n%s\t\t%s\t\t%d /-\n",b[i].t,b[i].au,b[i].pr);
    }
}
