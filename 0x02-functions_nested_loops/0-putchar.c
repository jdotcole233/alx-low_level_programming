#include "main.h"
/**
 * main - Entry point
 *
 * Description: Output _putchar to screen
 *
 * Return: Always return 0 (Success)
 */

int main(void)
{
	char c[9] = "_putchar";
	int i = 0;

	while (c[i] != '\0')
	{
		_putchar(c[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
