#include "main.h"

/**
 * _pow_recursion - x raised the power of y
 * @x: base integer
 * @y: Power integer
 * Return: The value of x raised to power y
 */
int _pow_recursion(int x, int y)
{
	int pow = 1;

	if (y < 0)
		return (-1);
	if (!y)
		return (1);
	pow = _pow_recursion(x, y - 1);

	return (pow * x);
}

