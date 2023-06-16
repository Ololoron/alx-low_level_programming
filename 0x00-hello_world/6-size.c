#include <stdio.h>

/**
 * main - Empty
 * This program prints the size of various types.
 * Return: Always 0 (success)
 */
int main(void)
{
	char c;
	int i;
	long l;
	float f;
	double d;

	printf("Size of a char:%u byte(s)\n", (unsigned int)sizeof(c));
	printf("Size of an int:%u byte(s)\n", (unsigned int)sizeof(i));
	printf("Size of a long int: %u byte(s)\n", (unsigned int)sizeof(l));
	printf("Size of a long long int: %u byte(s)\n", (unsigned int)sizeof(d));
	printf("Size of a float: %u byte(s)\n", (unsigned int)sizeof(f));
	return (0);
}
