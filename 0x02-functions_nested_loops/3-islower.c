#include "main.h"
/**
 * _islower - This function checks for lowercase characters.
 * @c: character to test
 * Return:1 if it is a lowercase letter, 0if it is not a lowercase letter.
 */
int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);

}
