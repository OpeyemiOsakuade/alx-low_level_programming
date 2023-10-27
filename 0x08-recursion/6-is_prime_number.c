#include "main.h"

/**
 * is_prime_number - function returns 1 if input is a prime number
 *
 * @n: input integer
 *
 * Return: 1 if input is prime number, else 0
 */

int is_prime_number(int n)
{
	int limit;

	if (n < 2)
		return (0);

	limit = _sqrt_recursion(n, 1);
	if (limit == -1)
		return (1);

	if (is_divisible(n, limit))
		return (0);
	return (1);
}

/**
 * is_divisible - checks if number is divisible
 * @num: the number to check
 * @div: the divisor
 *
 * Return: 1 if divisible, 0 otherwise
 */
int is_divisible(int num, int div)
{
	if (div <= 1)
		return (0);
	if (num % div == 0)
		return (1);
	return (is_divisible(num, div - 1));
}


/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number to check
 * @i: the current number to divide by
 *
 * Return: the square root or -1 if there is none
 */

int _sqrt_recursion(int n, int i)
{
	if (i * i == n)
		return (i);
	else if (i * i > n)
		return (-1);
	return (_sqrt_recursion(n, i + 1));
}
