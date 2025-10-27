/* 
 * C Program to Find the Frequency of  Every Word in a 
 * given String
 */
#include <stdio.h>
#include <string.h>
 
void main()
{
    int count = 0, c = 0, i, j, k, sp = 0;
    char str[100], p[50][100], str1[20], ptr1[50][100], *ptr; 
    printf("Enter the string\n");
    scanf(" %[^\n]s", str);
    printf("string length is %d\n", strlen(str));
    for (i = 0;i<strlen(str);i++)
    {
        if ((str[i] == ' ') || (str[i] == ',') || (str[i] == '.'))
            sp++;
    }
    for (i = 0, j = 0, k = 0;j < strlen(str);j++)
    {
        if ((str[j] == ' ')||(str[j] == 44)||(str[j] == 46))  
        {    
            p[i++][k] = '\0';
            k = 0;
        }        
        else
            p[i][k++] = str[j];
    }
    for (k = 0,i = 0;i <= sp;i++)
    {
        for (j = 0;j <= sp;j++)
        {
            if (i == j)
            {
                strcpy(ptr1[k], p[i]);
                k++;
                count++;
                break;
            }
            else
                if (strcmp(ptr1[j], p[i]) == 0)
                    break;
        }
    }
    for (i = 0;i < count;i++,c = 0) 
    {
        for (j = 0;j <= sp;j++)
        {
            if (strcmp(ptr1[i], p[j]) == 0)
                c++;
        }
        printf("%s -> %d times\n", ptr1[i], c);
    }
}