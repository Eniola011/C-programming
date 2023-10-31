#include "main.h"

/**
 * display - elements are displayed in the C stack
 * according to the LIFO rule.
 *
 */
void display()
{
    int item;

    if (top == -1)
    {
        printf("Stack underflow\n"); /* stack is empty */
    }
    else if (top > 0)
    {
        printf("The elements of the stack are:\n");
        for (item = top; item >= 0; item--)
        {
            printf("%d\n", stack[item]);
        }
    }
}
