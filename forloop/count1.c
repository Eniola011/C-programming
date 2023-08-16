#include <stdio.h>

/**
 * main - counts characters using a for loop
 *
 */
void main()
{
    double charcount;

    for (charcount = 0; getchar() != EOF; ++charcount)
        ;
    printf("%.0f\n", charcount);
}
