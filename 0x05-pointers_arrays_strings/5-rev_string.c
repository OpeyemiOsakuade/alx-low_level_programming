#include "main.h"

/**
 * rev-string - reverses a string in-place.
 * @s: pointer to the string to be reversed
 */

void rev_string(char *s)
{
	int length = 0, i;
	char temp;

	while (s[length])
	{
		length++;
	}

	for (i = 0; i < length / 2; i++)
	{
		temp = s[i];
		s[i] = s[length - 1 - i];
		s[length - 1 - i] = temp;
	}
}
