#include "main.h"

/**
 * _memset - fills the first n bytes of the memory area
 * pointed to by s with the constant byte b.
 * @s: pointer to memory area
 * @b: constant byte
 * @n: number of bytes of the memory area to be filled
 *
 * Return: pointer ti the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
