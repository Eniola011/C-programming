#include <stdio.h>

/**
 * main - counts line characters
 *
 */
void main()
{
    int character, line = 0;

    while ((character = getchar()) != EOF)
    {
        if (character == '\n')
        {
            ++line;
        }
    }
    printf("%d\n", line);
}
