#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: pointer to a character array
 *
 * Return: Length of a string
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s)
	{
		length++;
		s++;
	}

	return (length);

}
