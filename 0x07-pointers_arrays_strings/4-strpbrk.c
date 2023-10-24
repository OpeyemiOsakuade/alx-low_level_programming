#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: string to be searched
 * @accept: bytes to be accepted
 *
 * Return: pointer to the byte in s that matches one of
 * the bytes in accept or NULL if no such byte is found.
 */

char *_strpbrk(char *s, char *accept)
{
	char *start_accept = accept;

	while (*s)
	{
		accept = start_accept;

		while (*accept)
		{
			if (*s == *accept)
			{
				return (s);
			}
			accept++;
		}
		s++;
	}

	return (NULL);
}
