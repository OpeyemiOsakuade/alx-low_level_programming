#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: value to be raised
 * @y: the power to raise x
 *
 * Return: the value of x raiseed to power y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return(1);
	return (x * _pow_recusion(x, y - 1));
}
