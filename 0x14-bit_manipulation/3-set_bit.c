#include "main.h"
/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: the unsigned long int
 * @index: starting from 0 of the bit you want to set
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	/*Check if the index is within the valid*/
	 /* range of bits in an unsigned long int.*/
	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}

	/* set d bit at a specified index to 1 using OR operation */

	*n |= (1ULL << index);

	return (1);
}
