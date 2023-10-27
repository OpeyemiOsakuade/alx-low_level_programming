#include "main.h"
/**
 * sqrt_helper - recures to find the natural square of the number
 * @n: number to be calculated
 * @i: iterator
 *
 * Return: the resulting square root
 */

int sqrt_helper(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (sqrt_helper(n, i + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number whose square root to be calculated
 *
 * Return: the resulting square root
 */

int _sqrt_recursion(int n)
{
	if (n <= 0)
		return (-1);
	return (sqrt_helper(n, 1));
}
