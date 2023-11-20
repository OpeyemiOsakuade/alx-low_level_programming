#include "main.h"
#include <stddef.h>
#include <stdlib.h>

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
	char *all_str;
	int len_s1;
	int len_s2;
	int full_len;
	int i;
	int j;

	/*Handle null inputs*/
	if (s1 == NULL)
		s1 = "";
	if (s1 == NULL)
		s2 = "";

	len_s1 = _strlen(s1);
	len_s2 = _strlen(s2);

	/* Allocate memory for the new string */
	all_str = malloc(full_len + 1);

	if (all_str == NULL)
		return (NULL);

	/* add contents of s1 */
	for (i = 0; i < len_s1; i++)
	{
		all_str[i] = s1[i];
	}

	/* add contents od s2 */
	for (j = i; j < full_len; j++)
	{
		all_str[j] = s2[j - i];
	}

	/* add null terminator */
	all_str[j] = '\0';

	return (all_str);
}

/**
 * _strlen - returns the length of a string
 * @s: string whose length is to be returned
 *
 * Return: length of the string
 */

int _strlen(char *s)
{
	int len;
	int counter;

	len = 0;
	counter = 0;

	while (*(s + counter) != '\0')
	{
		len++;
		counter++;
	}

	return (len);
}
