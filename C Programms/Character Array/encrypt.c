// Encrypt any word by adding key value
/*
    Input  : zebra 
    Output : afcsb
    key value = 1
*/

#include<stdio.h>
void main()
{
    char a[100];
    int i,k;
    printf("Enter the string : ");
    gets(a);
    printf("Enter the key value : ");
    scanf("%d",&k);
    printf("Encrypted Word : ");
    for(i=0;a[i]!='\0';i++)
        ((a[i]>=65 && a[i]<=90) || (a[i]>=97 && a[i]<=122))?(a[i]==90)?printf("%c",64+k):(a[i]==122)?printf("%c",96+k):printf("%c",a[i]+k):printf("%c",a[i]);

}