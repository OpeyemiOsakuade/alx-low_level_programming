#include <stdio.h>
#include <stdlib.h>

/**
 * calculate_coins - loop through each coin
 * value and reduce the amount accordingly
 * @cents: the amt of cents you have to give back
 * Return: Number of coins
 */

int calculate_coins(int cents)
{
	int coins[] = {25, 10, 5, 2, 1};
	int num_coins = 0;
	size_t i = 0;

	while (cents > 0 && i < sizeof(coins) / sizeof(coins[0]))
	{
		num_coins += cents / coins[i];
		cents %= coins[i];
		i++;
	}
	return (num_coins);
}

/**
 * main - prints the minimum number of coins
 * to make change for an amount of money
 * @argc: number of command-line arguments
 * @argv: array of command-line arguments
 * Return: 0 on success, 1 on error
 */

int main(int argc, char *argv[])
{
	int cents;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	printf("%d\n", calculate_coins(cents));

	return (0);
}
