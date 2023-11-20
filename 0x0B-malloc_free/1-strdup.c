#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * whivh contains a duplicate of the str given a parameter.
 * @str: string to duplicate
 * Description: Returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 *
 * Return: pointer to the copied string
 */

char *_strdup(char *str)
{
	unsigned int i;
	unsigned int length;
	char *ptr_duplicate;

	if (str == NULL)
		return (NULL);

	length = _strlen(str);
	ptr_duplicate = malloc((length + 1) * sizeof(char));

	if (ptr_duplicate == NULL)
		return (NULL);

	for (i = 0; i < length; i++)
	{
		ptr_duplicate[i] = str[i];
	}

	return (ptr_duplicate);
}

/**
 * _strlen - Returns the length of a string.
 * @s: The string whose length is to be returne
 * DDescription: Returns the length of a string.
 * Return: The length of the string, s.
 */

int _strlen(char *s)
{
	int len;
	int counter;

	counter = 0;
	len = 0;
	while (*(s + counter) != '\0')
	{
		len++;
		counter++;
	}
	return (len);
}
