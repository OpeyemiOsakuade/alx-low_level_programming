#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 * @s: initial segment string
 * @accept: bytes to be accepted
 *
 * Return: number of bytes in the initial segment of s which
 * consist only of bytes from accept.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	char *start_accept = accept;

	while (*s)
	{
		accept = start_accept;

		while (*accept)
		{
			if (*s == *accept)
			{
				break;
			}
			accept++;
		}

		if (!*accept)
		{
			break;
		}
		count++;
		s++;
	}

	return (count);
}
