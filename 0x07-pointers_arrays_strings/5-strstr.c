#include "main.h"
#include <stddef.h>

/**
 * _strstr - locates a substring
 * @haystack: string to be searched
 * @needle: substring to be located
 *
 * Return: pointer to be the beginning of the located substring,
 * or NULL if the substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	char *start_needle = needle;

	if (!*needle)
		return (haystack);

	while (*haystack)
	{
		needle = start_needle;

		if (*haystack == *needle)
		{
			char *possible_start = haystack;

			while (*haystack == *needle && *needle && *haystack)
			{
				haystack++;
				needle++;
			}

			if (!*needle)
			{
				return (possible_start);
			}

			haystack = possible_start + 1;
			continue;
		}

		haystack++;
	}

	return NULL;
}
