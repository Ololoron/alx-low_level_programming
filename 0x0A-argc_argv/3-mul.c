#include <stdio.h>
#include <stdlib.h>

/**
 * main - Multiplies two numbers
 * It prints the result of multiplication, followed by a new line
 * @argv: The argument vector
 * @argc: The argument count
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int index, multiplication;

	multiplication = 1;
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	for (index = 1; index < argc; index++)
	{
		multiplication = multiplication * atoi(argv[index]);
	}
	printf("%d\n", multiplication);
	return (0);
}
