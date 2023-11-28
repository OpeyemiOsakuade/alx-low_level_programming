#include "main.h"

/**
 * print_binary - prints the binary representation of an unsigned
 * long integer without using arrays, dynamic memory
 * allocation, or the % and / operators
 * @n: the number to be printed in binary
 */

void print_binary(unsigned long int n)
{
	unsigned long int mask;
	unsigned int bit_size = sizeof(unsigned long int) * 8;
	unsigned int i;

	int leading_zero = 1;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	mask = 1UL << (bit_size - 1);
	for (i = 0; i < bit_size; i++)
	{
		if (n & mask)
		{
			_putchar('1');
			leading_zero = 0;
		}
		else if (!leading_zero)
		{
			_putchar('0');
		}
		mask >>= 1;
	}
}
