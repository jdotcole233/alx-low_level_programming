#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Combination of two two-digit numbers
 *
 * Return: Always return 0 (Success)
 */

int main(void)
{
	int i, j, t;

	for (i = 48; i <= 57; i++)
	{
		t = i;
		for (j = 49; j <= 57; j++)
		{
			putchar(i);
			putchar(t);
			putchar(' ');
			putchar(i);
			putchar(j);
			putchar(',');
		}
	}
	putchar('\n');
	return (0);
}
