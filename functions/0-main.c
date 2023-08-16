#include "main.h"

/**
 * main - tests the power function
 *
 */
void main()
{
    int idx;

    for (idx = 0; idx < 10; ++idx)
    {
        printf("%d %d %d\n", idx, power(2, idx), power(-3, idx));
    }
}
