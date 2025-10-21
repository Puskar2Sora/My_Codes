//POSTFIX TO INFIX 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100
char stack[MAX][MAX];
int top = -1;

void push(char item[]) 
{
    if (top >= MAX - 1) 
    {
        printf("Stack Overflow\n");
        exit(1);
    }
    strcpy(stack[++top], item);
}
void pop(char popped[]) 
{
    if (top < 0) 
    {
        printf("Stack Underflow\n");
        exit(1);
    } 
    strcpy(popped, stack[top--]);
}
int isOperator(char symbol) 
{
    if (symbol == '+' || symbol == '-' || symbol == '*' || symbol == '/' || symbol == '%' || symbol == '^') 
        return 1;
    return 0;
}
void postfixToInfix(char postfix[], char infix[]) 
{
    int i = 0, len = strlen(postfix);
    char op1[MAX], op2[MAX], temp[MAX];
    for (i = 0; i < len; i++) 
    {
        if (isOperator(postfix[i])) 
        {
            pop(op2);
            pop(op1);
            sprintf(temp, "(%s%c%s)", op1, postfix[i], op2);
            push(temp);
        } 
        else 
        {
            sprintf(temp, "%c", postfix[i]);
            push(temp);
        }
    }
    strcpy(infix, stack[top]);
}
void main() 
{
    char postfix[MAX], infix[MAX];
    printf("Enter postfix expression: ");
    scanf("%s", postfix);
    postfixToInfix(postfix, infix);
    printf("Infix expression: %s\n", infix);
}