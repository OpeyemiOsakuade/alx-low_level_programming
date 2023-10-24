#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix of integers.
 * @a: pointer to the matrix (treated as 1D array)
 * @size: size of the matrix (it's a square matrix so rows = columns = size)
 */

void print_diagsums(int *a, int size)
{
	int i;
	int main_diag_sum = 0;
	int sec_dig_sum = 0;

	for (i = 0; i < size; i++)
	{
		main_diag_sum += a[i * size + i];
		sec_diag_sum += a[i * size + (size - 1 -i)];
	}

	printf("%d, %d\n", main_diag_sum, sec_diag_sum);
}
