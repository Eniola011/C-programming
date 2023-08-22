#include "main.h"

/**
 * main - illustrates the array implementation of stacks
 *
 */
int main()
{
    int stack[LIMIT]; /* Array implementation of stack */
    int top; /* To insert and delete the data elements in the stack */
    int item; /* To traverse the loop to while displaying the stack */
    int choice; /* To choose either of the 3 stack operations */

    printf("Welcome to DataFlair tutorials!\n\n");

    printf ("ARRAY IMPLEMENTATION USING STACKS\n\n");
    top = -1; /* Initializing top to -1 indicates that it is empty */
    do
    {
        printf("1. Insert\n2. Delete\n3. Display\n4. Exit\n\n");
        printf("Enter your choice:");
        scanf("%d", &choice);
        switch (choice);
        {
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                exit(0);
                break;
            default:
                printf("Sorry, invalid choice!\n");
                break;
        }
    } while (choice != 4);

    return (0);
}
