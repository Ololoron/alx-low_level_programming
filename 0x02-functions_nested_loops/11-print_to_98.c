#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - count the natural numbers from n to 98.
 * @n: value to count from.
 *
 */
void print_to_98(int n)
{
	int i; //Declare a new int i
	
	// Opens a conditional statement now that certain 
	// Values of n are 98 or above or bellow 
	if (n == 98) 
	{
		printf("98");
	}
	// For values bellow 98
	else if (n < 98)
	{
		for (i = n ; i <= 98 ; i++)
		{
			printf("%d", i);
			if (i < 98)
				printf(", "); // prints a comma
		}
	}
	// For values above 98
	else if (n > 98)
	{
		for (i = n ; i >= 98 ; i--)
		{
			printf("%d", i);
			if (i > 98)
				printf(", ");

		}
	}
	// Prints a new line
	printf("\n");
}

