#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>

/**
 * isValidNumber - checks for negative nubers or invalid charaters
 * @str: the input to be checked
 * Return: True if valid, else False
 */

bool isValidNumber(const char *str)
{
	int i;
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == '-' || !isdigit(str[i]))
		{
			return (false);
		}
	}
	return (true);

}



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
		if (isValidNumber(argv[i]))
		{
			num = atoi(argv[i]);
			sum += num;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}

	printf("%d\n", sum);

	return (0);
}
