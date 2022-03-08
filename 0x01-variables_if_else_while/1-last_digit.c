#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Description: Output last digit of generated integers
 *
 * Return: Always return 0 (Success)
 *
 */

int main(void)
{
	int n, lastdig;

	srand(time(NULL));
	n = rand() - RAND_MAX / 2;
	lastdig = n % 10;
	if (lastdig > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lastdig);
	}
	else if (lastdig == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, lastdig);
	}
	else if (lastdig < 6 && lastdig != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastdig);
	}
	return (0);
}
