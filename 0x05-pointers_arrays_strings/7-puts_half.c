#include "main.h"

/**
 * puts_half - prints the second half of a string,
 * if the total number of character is odd,
 * start printing from the mid point.
 * @str: pointer to the string
 */
void puts_half(char *str)
{
	int length = 0;
	int i, start;

	while (str[length])
	{
		length++;
	}

	if (length % 2 == 0)
		start = length / 2;
	else
		start = (length - 1) / 2;

	for (i = start; i < length; i++)
		_putchar(str[i]);

	_putchar('\n');
}

