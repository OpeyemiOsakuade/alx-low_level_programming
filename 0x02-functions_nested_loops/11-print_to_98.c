#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from n to 98, followed by a new line.
 * @n: starting number
 *
 * Description: This function prints numbers starting from n up to 98.
 *
 * Each number is followed by a coma and a space, except the lat number.
 * It always ends with a newline.
 */

void print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n < 98; n++)
		{
			printf("%d, ", n);
		}
		printf("98\n");
	}
	else
	{
		for (; n > 98; n--)
		{
			printf("%d, ", n);
		}
		printf("98\n");
	}
}
