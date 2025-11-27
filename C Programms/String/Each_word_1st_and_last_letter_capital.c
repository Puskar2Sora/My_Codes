#include <stdio.h>
#include <string.h>

int main() {
    int n;
    printf("Enter the length of the string: ");
    scanf("%d", &n);
    getchar();   
    char str[n];
    printf("Enter a string: ");
    gets(str);
    int len = strlen(str);
    for(int i = 0; i < len; i++) {
        if ((i == 0 && str[i] != ' ') || (str[i] != ' ' && str[i-1] == ' ')) {
            if (str[i] >= 'a' && str[i] <= 'z')
                str[i] -= 32;
        }
        if (str[i] != ' ' && (str[i+1] == ' ' || str[i+1] == '\0' || str[i+1] == '\n')) {
            if (str[i] >= 'a' && str[i] <= 'z')
                str[i] -= 32;
        }
    }

    printf("\nOutput: %s\n", str);
    return 0;
}
