#include "main.h"
#include <stddef.h>
/**
 * _strchr - locates the first occurence of character c in a string
 * @s: the string to be searched
 * @c: the character to search for
 *
 * Return: pointer to the first occurence of the character c
 * in the string or NULL if the character is not found.
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
	{
		return (s);
	}

	return (NULL);
}
