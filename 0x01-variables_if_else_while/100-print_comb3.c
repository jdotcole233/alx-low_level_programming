#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Differenct combinations of two digits
 *
 * Return: Always return 0 (Success)
 */

int main(void)
{
	int i;
	int j;

	for (i = 48; i <= 57; i++)
	{
		for (j = 49; j <= 57; j++)
		{
			if (!(i == j) && j > i)
			{
				putchar(i);
				putchar(j);
				if (i < 56 || j != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}

	}
	putchar('\n');
	return (0);
}
