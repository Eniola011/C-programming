#include <stdio.h>

/**
 * main - gets a character
 *
 */
void main()
{
    int character;

    character = getchar();
    while (character != EOF)
    {
        putchar(character);
        character = getchar();
    }
}
