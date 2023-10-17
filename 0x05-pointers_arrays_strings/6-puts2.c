#include "main.h"

/**
 * puts2 - prints every other character of a string, starting with the first character,
 * follwed by a new line
 * @str: pointer to the string
 */

void put2(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (i%2==0)
			_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
			
