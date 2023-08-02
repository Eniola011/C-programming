#include <stdio.h>

/**
 * main - a program that prints all possible different
 * combinations of two digits.
 * Description - Numbers must be separated by ',' followed by a space
 * The two digits must be different
 * 01 and 10 are considered the same combination of the two digits 0 and 1
 * Print only the smallest combination of two digits
 * Numbers should be printed in ascending order, with two digits
 * Return: no value
 */
int main(void)
{
	int digit1 = 48, digit2 = 48;

	while (digit1 < 58)
	{
		digit2 = 48;
		while (digit2 < 58)
		{
			if (digit1 != digit2 && digit1 < digit2)
			{
				putchar(digit1);
				putchar(digit2);
				if (digit2 == 57 && digit1 == 56)
				{
					break;
				}
				putchar(',');
				putchar(' ');
			}
			digit2++;
		}
		digit1++;
	}
	putchar ('\n');
	return (0);
}
