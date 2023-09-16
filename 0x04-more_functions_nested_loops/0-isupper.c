#include "main.h"
#include <stdio.h>
/**
 * _isupper - prints c if it is uppercase
 *@c: int number
 *  Return: 1 if c is uppercase, 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	} else
		return (0);
}
