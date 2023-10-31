#include "main.h"

/**
 * pop - remove element from a C stack
 */
void pop()
{
    int element;

    if(top == -1)
    {
        printf("Stack underflow\n"); /* stack is empty */
    }
    else
    {
        element = stack[top];
        printf("The deleted item is %d\n", stack[top]);
        top--; /* The element below the topmost element is deleted */
    }
}
