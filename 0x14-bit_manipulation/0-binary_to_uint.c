#include "main.h"

/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 * @b:pointer to the string of 0 and 1 chas
 *
 * Return: the converted number or 0 if one
 * or more chars in str b is not 0 or 1 or if b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;

	if (!b)
		return (0);

	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);
		/* Multiply num by 2 (shifting left in binary) */
		 /* and add the current binary digit.*/
		/* The expression (*b - '0') converts the character '0' or '1' to */
		 /* the integer 0 or 1, respectively.*/
		num = num * 2 + (*b - '0');
		b++;
	}

	return (num);
}
