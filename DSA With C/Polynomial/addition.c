//POLYNOMIAL ADDITION(PERFECT CODE, SORTED) Renewed
#include <stdio.h>
#include <stdlib.h>
typedef struct link 
{
    int coeff, pow;
    struct link *next;
} p;

void my_create_poly(p **node);
void my_show_poly(p *node);
void my_add_poly(p **result, p *poly1, p *poly2);
void my_poly_add_ordered_term(p **poly, int coeff, int pow);



void my_poly_add_ordered_term(p **poly, int coeff, int pow) 
{
    p *current = *poly, *prev = NULL, *new_term = NULL;

    while (current != NULL && current->pow > pow) 
    {
        prev = current;
        current = current->next;
    }

    if (current != NULL && current->pow == pow) 
        current->coeff += coeff;
    else 
    {
        new_term = (p *)malloc(sizeof(p));
        new_term->coeff = coeff;
        new_term->pow = pow;
        new_term->next = current;

        if (prev == NULL) 
        {
            new_term->next = *poly;
            *poly = new_term;
        } 
        else 
            prev->next = new_term;
    }
}

void my_show_poly(p * node)
{
    printf("\nThe polynomial expression is:\n");
    for(;node != NULL;node = node->next) 
        printf("%dx^%d %c", node->coeff, node->pow,(node != NULL)?'+':' ');
}
void my_add_poly(p ** result, p * poly1, p * poly2) 
{

    p *temp = (p *) malloc(sizeof(p));
    temp->next = NULL;
    *result = temp;
    while(poly1 && poly2) 
    {
        if (poly1->pow > poly2->pow) 
        {
        temp->pow = poly1->pow;
        temp->coeff = poly1->coeff;
        poly1 = poly1->next;     
        }
        else if (poly1->pow < poly2->pow)
        {
            temp->pow = poly2->pow;
            temp->coeff = poly2->coeff;
            poly2 = poly2->next;    
        }
        else 
        {
            temp->pow = poly1->pow;
            temp->coeff = poly1->coeff + poly2->coeff;
            poly1 = poly1->next;
            poly2 = poly2->next;        
        }
        if(poly1 && poly2) 
        {
            temp->next = (p *) malloc(sizeof(p));
            temp = temp->next;
            temp->next = NULL;        
        }    
     }
    while(poly1 || poly2) 
    {
        temp->next = (p *) malloc(sizeof(p));
        temp = temp->next;
        temp->next = NULL;
        if(poly1)
        {
            temp->pow = poly1->pow;
            temp->coeff = poly1->coeff;
            poly1 = poly1->next;        
        }
        if(poly2) 
        {
            temp->pow = poly2->pow;
            temp->coeff = poly2->coeff;
            poly2 = poly2->next;        
        }  
    }
    printf("\nAddition Complete");
}
void my_create_poly(p **node) 
{
    int flag, coeff, pow;
    do 
    {
        printf("\nEnter Coeff:");
        scanf("%d", &coeff);
        printf("\nEnter Pow:");
        scanf("%d", &pow);
        my_poly_add_ordered_term(node, coeff, pow);
        printf("\nContinue adding more terms to the polynomial list?(Y = 1/N = 0): ");
        scanf("%d", &flag);
    }while (flag);
}
int main() 
{
    int ch; 
    p *poly1 = NULL, *poly2 = NULL, *poly3 = NULL;
    do 
    {
        while (poly1 != NULL) 
        {
            p* temp = poly1;
            poly1 = poly1->next;
            free(temp);
        }
        while (poly2 != NULL) 
        {
            p* temp = poly2;
            poly2 = poly2->next;
            free(temp);
        }
        while (poly3 != NULL) 
        {
            p* temp = poly3;
            poly3 = poly3->next;
            free(temp);
        }  
        poly1 = poly2 = poly3 = NULL;

        printf("\nCreate 1st expression\n");
        my_create_poly(&poly1);
        printf("\nStored the 1st expression\n");
        my_show_poly(poly1);

        printf("\n\nCreate 2nd expression\n");
        my_create_poly(&poly2);
        printf("\nStored the 2nd expression\n");
        my_show_poly(poly2);

        my_add_poly(&poly3, poly1, poly2);
        printf("\nResultant expression after addition\n");
        my_show_poly(poly3);

        printf("\nAdd two more expressions? (Y = 1/N = 0): ");
        scanf("%d", &ch);
    } while (ch);

    while (poly1 != NULL) 
    {
        p* temp = poly1;
        poly1 = poly1->next;
        free(temp);
    }
    while (poly2 != NULL) 
    {
        p* temp = poly2;
        poly2 = poly2->next;
        free(temp);
    }
    while (poly3 != NULL) 
    {
        p* temp = poly3;
        poly3 = poly3->next;
        free(temp);
    }
}