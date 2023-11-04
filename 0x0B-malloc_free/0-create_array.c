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
	if (size == 0)
		return (NULL);
	char *array = (char *)malloc(size *sizeof(char));

	if (array == NULL)
		return (NULL);

	for (unsigned int i = 0; i < size; i++)
	{
		array[i] = c;
	}

	return (array);
}


