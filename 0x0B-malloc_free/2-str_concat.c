#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * _strlen - Calculate the length of a string
 * @str: The string to be measured
 *
 * Return: The length of the string
 */

static int _strlen(char *str)
{
	int len;
	len = 0;
	
	while (str && str[len])
		len++;
	
	return (len);
}

/**
 * str_concat - function that concatenates two strings
 * @s1: The string whose contents will be the first
 * @s2: String whose content will be added to s1
 *
 * Return: Pointer to newly allocated space im memory,
 * and NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	char *new_str;
	int i, j, len_s1, len_s2;
	
	len_s1 =_strlen(s1);
	len_s2 =_strlen(s2);

	/* Allocate memory for the new string */
	new_str = malloc(sizeof(char) * (len_s1 + len_s2 + 1));
	
	/*Handle null inputs*/
        if (new_str == NULL)
        {
                return (NULL);
        }

	/* add contents of s1 */
	for (i = 0; i < len_s1; i++)
	{
		new_str[i] = s1[i];
	}

	/* add contents od s2 */
	for (j = 0; j < len_s2; j++)
	{
		new_str[i + j] = s2[j];
	}

	/* add null terminator */
	new_str[i + j] = '\0';

	return (new_str);
}
