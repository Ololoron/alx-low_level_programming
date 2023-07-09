#include <stdio.h>

/**
 * main - prints its name,followed by a new line.
 * If you name the program, it will take the new name.
 * Don't remove the path before the name of the program.
 *
 * @argc: The number of characters.
 * @argv: Prints a string
 * Return: 0 Always
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	(void)argc;
	return (0);
}

