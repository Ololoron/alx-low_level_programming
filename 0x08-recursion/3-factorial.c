#include "main.h"

/**
 * factorial - Returns the factorial of a given number
 * @n: Case example integer
 * Return: factorial number
 */
int factorial(int n)
{
	int fact = 1;

	if (n < 0)
		return (-1);

	else if (!n)
		return (1);

	fact = factorial(n - 1);

	return (fact * n);
}
