#include "main.h"
/**
 * _abs - calculate the absolute value of the number from zero.
 * @i: the integer to be converted.
 * Return: absolute value of the input number.
 */
int _abs(int i)
{
	int a;

	if (i < 0)
		a = (i * -1);
	else
		a = i;
	return (a);
}

