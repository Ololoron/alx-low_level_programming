#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - concatenates 2 strings
 *
 * @s1: First string
 * @s2: Second string.
 * @n: unsinged integer
 * Return: pointer to a newly located point in memory.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *point;
	unsigned int i = 0, j = 0, k;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i])
	{
		i++;
	}
	while (s2[j])
	{
		j++;
	}
	if (n >= j)
		n = j;
	j = 0;
	point = malloc(sizeof(char) * (i + n + 1));
	if (point == NULL)
		return (NULL);
	for (k = 0; k < i; k++)
	{
		point[k] = s1[k];
	}
	for (; k < (i + n); k++)
	{
		point[k] = s2[k - i];
	}
	point[k] = '\0';
	return (point);
}
