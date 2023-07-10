#include <stdio.h>
#include <stdlib.h>

/**
 * minimumCoins - calculates the number of coins required
 * to make change for that amount
 * @cents: coins value
 * Return: number of coins
 */
int minimumCoins(int cents)
{
	if (cents < 0)
	{
		return (0);
	}

	int coins[] = {25, 10, 5, 2, 1};
	int numCoins = 0;
	int i;

	for (i = 0; i < sizeof(coins) / sizeof(coins[0]); i++)
	{
		numCoins += cents / coins[i];
		cents %= coins[i];
	}

	return (numCoins);
}

/**
 * main - prints the minimun number of coins to mske change
 * for an amount of money
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	int cents = atoi(argv[1]);
	int result = minimumCoins(cents);

	printf("%d\n", result);

	return (0);

}
