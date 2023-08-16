#include <stdio.h>

#define YES 1
#define NO 0

/**
 * main - counts lines, words and characters.
 * a 'word' is a sequence of characters that
 * doesn't contain a 'blank', 'tab' or 'newline'
 * this function is like the UNIX utility 'wc'
 *
 */
void main()
{
    int character, line, wordcount, charcount, inword;

    inword = NO;
    line = wordcount = charcount = 0;
    character = getchar();

    while (character != EOF)
    {
        ++charcount;
        if (character != '\n')
        {
            ++line;
        }
        if (character == ' ' || character == '\t' || character == '\n')
        {
            inword = NO;
        }
        else if (inword == NO)
        {
            inword = YES;
            ++wordcount;
        }
    }
    printf("%d %d %d\n", line, wordcount, charcount);
}
