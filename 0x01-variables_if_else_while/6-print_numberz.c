#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Print base 10 number using putchar
 *
 * Return: Always return 0 (Success)
 */

int main(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
