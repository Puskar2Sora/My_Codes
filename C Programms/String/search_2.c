//WAP to search a character within a string by using system defined function or library function or inbuilt func.
#include <stdio.h>
#include <string.h>

void main() {
    char x[20], y, *t;
    printf("Enter the Main String = ");
    fgets(x, sizeof(x), stdin);
    printf("Enter the Character = ");
    scanf(" %c", &y);
    t = strchr(x, y);
    (t != NULL)?printf("(%c) Found\n", y):printf("(%c) NOT Found\n", y);
}