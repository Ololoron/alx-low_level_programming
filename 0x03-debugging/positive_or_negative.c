#include "main.h"
/**
 * main - Prints a random number and states whether it
 * is positive or negative.
 *
 */
void positive_or_negative(int i)
{
 	if (i > 0)
               printf("%d is positive\n", i);
        else if (i < 0)
		printf("%d is negative\n", i);
        else
                printf("%d is zero\n", i);

}
