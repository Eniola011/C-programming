#include "main.h"

/**
 * push - insert new element in a C stack
 *
 */
void push()
{
    int element;

    if (top == LIMIT - 1) /* limit is 11, so 0-10 is 11 elements */
    {
        printf("Stack Overflow\n");
    }
    else
    {
        printf("Enter the element to be inserted:");
        scanf("%d", &element);
        top++;
        stack[top] = element;
    }
}
