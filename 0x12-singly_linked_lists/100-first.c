#include <stdio.h>

void first(void) __attribute__ ((constructor));

/**
 * first - prints a statement before the main function is executed
 *
 * Return: Nothing.
 */
void first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon y back!\n");
}
