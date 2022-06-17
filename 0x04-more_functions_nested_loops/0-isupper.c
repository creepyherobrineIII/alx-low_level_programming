#include "main.h"

/**
 * _isupper - checks if a letter is uppercase
 *
 * return: 0 (lowercase or no letter), 1 (uppercase letter)
 */

int _isupper(int c)
{
	int upper;

	upper = 0;

	if ((c >= 65) &&  (c <= 90))
	{
		upper = 1;
	} else 
	{
		upper = 0;
	}

	return (upper);
}
