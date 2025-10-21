#include <stdio.h>

int main() {
    int a , b;
    printf("Enter the two numbers=");
    scanf("%d %d",&a,&b);    
    char k;
    printf("Enter the sign =");
    scanf("%c",&k);
    switch(k) {
        case '+': 
         printf("%d", a + b); 
         break;
        case '-':
         printf("%d", a - b); 
         break;
        case '*':
         printf("%d", a * b); 
         break;
        case '/': 
         printf("%d", a / b);
         break;
    }
    return 0;
}