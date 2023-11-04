#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a new
 * string a duplicate of the str
 * @str: string to duplicate
 *
 * Return: pointer to the copied string
 */

char *_strdup(char *str)
{
	if (str == NULL)
		return (NULL);

	unsigned int length = 0;

	while (str[length] != '\0')
	{
		length++;
	}
	
	char *duplicate = (char *)malloc((length + 1) * sizeof(char));
	if (duplicate == NULL)
		return (NULL);

	for (unsigned int = 0; i < length; i++)
	{
		duplicate[i] = str[i];
	}
	duplicate[length] = '\0';

	return (duplicate);
}
