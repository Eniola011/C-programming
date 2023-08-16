#include <stdio.h>

/**
 * main - counts characters
 *
 */
void main()
{
    long charcount = 0;

    while (getchar() != EOF)
    {
        ++charcount;
    }
    printf("%ld\n", charcount);
}
