#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * 1 is the file descriptor for stdout
 * Return 0(success)
 */
int _putchar(char c)
{
	return (write(1,&c, 1));
}
