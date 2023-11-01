#include <stdio.h>
#include <stdlib.h>

/**
 * main - add positive numbers
 * @argc: number of command-line arguments
 * @argv: array of command-line arguments
 * Return: 0 on success, 1 on error
 */

int main(int argc, char *argv[])
{
	int i;
	int sum;
	int num;

	for (i = 1; i < argc; i++)
	{
		num = atoi(argv[i]);
		if (num > 0)
		{
			sum += num;
		}
		if (num == 0)
		{
			printf("Error\n");
			return (1);
		}
	}

	printf("%d\n", sum);

	return (0);
}
