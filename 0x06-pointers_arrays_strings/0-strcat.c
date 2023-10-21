#include "main.h"

/**
 * _strcat - concatenates two strings.
 * @dest: destination string
 * @src: source string
 * Return: pointer to the resulting dest string
 */

char *_strcat(char *dest, char *src)
{
	char *start = dest;

	while (*dest)
		dest++;

	while (*src)
	{
		*dest =*src;
		dest++;
		src++;
	}

	*dest = '\0';

	return start;
}
