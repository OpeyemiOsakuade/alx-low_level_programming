#include "main.h"
#include <stdio.h>
/**
 * print_array - prints number of elements of an array of integers
 * followed by a new line, seperated by a comma
 * @a - the pointer to the array of integers
 */

void print_arrray(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i < n - 1)
			printf(", ");
	}

	printf("\n");
}
