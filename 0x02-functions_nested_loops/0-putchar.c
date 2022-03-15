#include <unistd.h>
#include "main.h"
/**
 * main - Entry point
 *
 * Description: Output _putchar to screen
 *
 * return: Always return 0 (Success)
 */

int main(void)
{
	char *c = "_putchar";

	write(1, c, 9);
	return (0);
}
