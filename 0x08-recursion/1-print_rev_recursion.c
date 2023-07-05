#include "main.h"

/**
 * _print_rev_recursion - prints strings in reverse
 * @s: string to be reversed
 * Return: Nothing
 */
void _print_rev_recursion(char *s)
{
	if (!*s)
		return;
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
