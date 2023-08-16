#include "main.h"

/**
 * main - print fahrenheit table
 *
 *
 */
int main()
{
    int fahr;

    for (fahr = LOWER; fahr <= UPPER; fahr + STEP)
    {
        printf("%4d %6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32));
    }
}
