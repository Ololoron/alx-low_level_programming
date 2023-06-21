#include "main.h"

/**
 * main - prints the string "_putchar" from a character array.
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char c[] = "_putchar";
	int i;

	for (i = 0; i < 9; i++)
	{
		_putchar(c[i]);
	}
	_putchar('\n');
	return (0);
}
