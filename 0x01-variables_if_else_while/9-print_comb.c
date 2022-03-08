#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: combinations of single numbers separated by ,
 *
 * Return: Always return 0 (Success)
 *
 */

int main(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
