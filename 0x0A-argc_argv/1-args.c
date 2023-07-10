#include <stdio.h>

/**
 * main - Prints the number of arguments passed to it.
 * The program should print a number followed by a newline
 * @argc: Prints the no of arguments passes to it.
 * @argv: Prints strings
 * Return: Always Zero
 */
int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	 (void)argv;
	 return 0;
}

