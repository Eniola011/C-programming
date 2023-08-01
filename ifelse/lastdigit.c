#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - gets the last digit of a random number
 * using the "modulus" operator
 * Return: no value
 */
int main(void)
{
	int num;
	int lastdigit;

	srand(time(0));
	num = rand() - RAND_MAX / 2;
	lastdigit = num % 10;

	if (lastdigit > 5)
	{
		printf("Last digit of %d is %d and is greater than 5", num, lastdigit);
	}
	else if (lastdigit == 0)
	{
		printf("Last digit of %d is %d and is zero", num, lastdigit);
	}
	else if (lastdigit < 6 && lastdigit != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0", num, lastdigit);
	}

	printf("\n");
	return (0);
}
