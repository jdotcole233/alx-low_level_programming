#include <unistd.h>

int _putchar(char *c, int len)
{
	return(write(1, c, len));
}
