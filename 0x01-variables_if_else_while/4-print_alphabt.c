#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Print lowercase alpha but q and e
 *
 * Return: Always return 0 (Success)
 */

int main(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		if (i != 101 && i != 113)
		{
			putchar(i);
		}
	}
	putchar('\n');
	return (0);
}
