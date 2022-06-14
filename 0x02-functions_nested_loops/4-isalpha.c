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
	if ((c < 97) | (c > 122))
	{
		if ((c < 65) | (c > 90))
		{
			return (0);
		}
	} else
		return (1);
}
