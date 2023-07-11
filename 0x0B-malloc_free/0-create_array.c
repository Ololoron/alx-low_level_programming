#include "main"
#include <stdlib.h>
#include <stdio.h>

/**
 * create_array - creates an array of char, and initializes
 * it with a specific char
 *
 * @size: unsigned integer
 * @c: special char to initialize
 * Return: NULL if size is 0, a pointer to the array or NULL
 * if it fails
 */
char *create_array(unsigned int size, char c)
{
	unsigned int a;
	char *s;

	s = (char *) malloc(size * sizeof(char));
	if (s == NULL)
		return (NULL);
	for (a = 0; a < size; a++)
	{
		s[a] = c;
	}
	return (s);
}
