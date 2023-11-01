#include <stdio.h>
#include "main.h"

/**
 * main - print thw number of arguments passed into it
 * @argc: number of command-line arguments
 * @argv: array of command line arguments
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);

	return (0);
}
