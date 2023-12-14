#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: the unsigned long integer
 * @index: index starts from 0 (the least significant bit
 * Return: the value of the bit at index index
 * or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	/* check if index is greater than no of bits in unsigned long int */
	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}

	/* Shift the bit to the LSB and isolate it*/
	return ((n >> index) & 1);
}
