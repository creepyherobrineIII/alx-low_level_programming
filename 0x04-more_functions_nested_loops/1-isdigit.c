#include "main.h"

/**
 * _isdigit - checks if a char is a digit
 *
 * @c: integer parameter
 *
 * Return: 0 (not digit), 1 (digit)
 */

int _isdigit(int c)
{
	int digit;

	digit = 0;

	if ((c >= 48) &&  (c <= 57))
	{
		digit = 1;
	} else
	{
		digit = 0;
	}

	return (digit);
}
