#include "main.h"
#include <stdio.h>

/**
 * _strncat - concatenates at most n bytes of string src to dest
 * @dest: destination string
 * @src: source string
 * @n: number of bytes to be concatenated
 * Return: pointer to the resulting dest string
 */

char *_strncat(char *dest, char *src, int n)
{
	char *start = dest;
	int i = 0;

	while (*dest)
		dest++;

	while (i < n && *src)
	{
		*dest = *src;
		dest++;
		src++;
		i++;
	}

	if (i < n)
		*dest = '\0';

	return (start);
}
