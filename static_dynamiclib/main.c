#include "main.h"

/* main - Entry point. 
 * Return: 0 - success.
 */
int main(void)
{
    char string1[] = "dlrow olleH";
    char string2 [] = "zyxwvutsrqponmlkjihgfedcba";

    rev_string(string1);
    rev_string(string2);

    printf("Size of string 1: %d\n",_strlen(string1));
    printf("Size of string 2: %d\n",_strlen(string2));

    return (0);
}
