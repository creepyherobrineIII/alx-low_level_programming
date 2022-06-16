#include "main.h"

/**
 * _isalpha - Checks if letter is part of alphabet and returns relevant value
 *
 * @c: integer parameter
 *
 * Return: 0 (not part of alphabet); 1 (part of alphabet)
 */


int _isalpha(int c)
{
	int i;

	i = 0;

	if ((c > 64) && (c < 91))
	{
		i = 1;
	}

	if ((c > 96) && (c < 123))
	{
		i = 1;
	}

	return (i);
}
