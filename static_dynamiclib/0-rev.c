#include "main.h"

/**
 * rev_string - reverses a string.
 * @s: input string.
 * Return: no return.
 */
void rev_string(char *s)
{
    int i, j, count = 0;
    char temp;

    for (i = 0; *(s + count) != '\0'; i++)
    {
      for (j = i + 1; j > 0; j--)
      {
        temp = *(s + j);
        *(s + j) = *(s + (j - 1));
        *(s + (j - 1)) = temp;
      }
    }
}
