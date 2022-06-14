#include "main.h"

/**
 * _islower - Checks if letter is lowercase and returns appropriate value
 *
 * @c: integer parameter
 *
 * Return: 0 (Not lowercase); 1 (lowercase)
 */


int _islower(int c)
{
	if ((c < 97) | (c > 122))
	{
		return (0);
	} else
		return (1);
}
