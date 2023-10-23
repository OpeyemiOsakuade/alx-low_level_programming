#include "main.h"

/**
 * _memcpy - copies n bytes from memory area src to memory area dest.
 * @dest: destination memory area
 * @src: source memory area
 * @n: number of bytes to copy
 *
 * Return: pointer to the destination memory area dest.
 */
char *_memset(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
