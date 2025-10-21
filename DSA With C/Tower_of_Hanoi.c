#include <stdio.h>
void towerOfHanoi(int *step_count, int n, char source, char auxiliary, char target) // Recursive function to solve Tower of Hanoi
{
    if (n > 0) 
    {
        towerOfHanoi(step_count, n - 1, source, target, auxiliary);// Move n-1 disks from source to auxiliary using target
        printf("Step %2d : Move disk %d from %c to %c\n", ++(*step_count), n, source, target);// Move the nth disk from source to target
        towerOfHanoi(step_count, n - 1, auxiliary, source, target);// Move n-1 disks from auxiliary to target using source
    }
}
int main() 
{
    int n, step_no = 0;  // directly initialized to 0
    printf("Enter the number of disks : ");
    scanf("%d", &n);
    printf("\nSequence of moves to solve Tower of Hanoi : \n\n");
    towerOfHanoi(&step_no, n, 'S', 'A', 'T');    // Solve Tower of Hanoi
    printf("\nTotal steps taken : %d\n", step_no);   
    return 0;
}