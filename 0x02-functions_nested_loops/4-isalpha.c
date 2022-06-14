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
	if ((c < 65) | (c > 90))
	{
		if ((c > 90) & (c < 97) | (c > 122))
		{
			return (0);
		} else
		{
			return (1);
		}
	}
}
