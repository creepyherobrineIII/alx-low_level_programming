#include "main.h"

/**
 * _isupper - checks if letter is uppercase
 * @c: integer value of char to be checked
 * Return: 1(c is uppercase), otherwise)
 */

int _isupper(int c)
{
	int ret;

	if ((c > 64) && (c < 91))
	{
		ret = 1;
	}
	else
		ret = 0;

	return (ret);
}
