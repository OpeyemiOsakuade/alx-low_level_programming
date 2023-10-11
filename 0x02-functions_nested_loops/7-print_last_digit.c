#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: the number to evaluate
 *
 * Description: This function prints and returns the last digit of the provide number
 *
 * Return: the value of the last digit.
 */

int print_last_digit(int n)
{
	int last_digit;

	if (n < 0)
	{
		last_digit = -n % 10;
	}
	else
	{
		last_digit = n % 10;
	}
	_putchar('0' + last_digit);
	return (last_digit);
}
