#include "main.h"

/**
 * times_table - prints the 9 times table
 *
 * Description: This function prints the 9 times table, starting with 0
 *
 */

void times_table(void)
{
	int num, result;

	for (num = 0; num <= 9; num++)
	{
		result = 9 * num;

		if (num != 0)
		{
			_putchar((result / 10) + '0');
			_putchar((result / 10) + '0');
		}
		else
		{
			_putchar(result + '0');
		}

		if (num != 9)
		{
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');
}
