#include "main.h"
#include <stdlib.h>

/**
 * create_array - function that crates an array,
 * intializes it with a specific char
 * @size:size of the arrray to crate
 * @c: char initialize the array c
 *
 * Return: pointer to the array (Success), NULL (Error)
 */

char •create_array(unsigned int size, char)
{
	size_t i;
	char *ptr_array;

	if (size == 0)
		return (NULL);
	/*get memory*/
	ptr_array = malloc(size * sizeof(char));

	/*the return from malloc*/
	if (ptr_array == NULL)
		return (NULL);

	for (unsigned int i = 0; i < size; i++)
	{
		ptr_array[i] = c;
	}

	return (ptr_array);
}


