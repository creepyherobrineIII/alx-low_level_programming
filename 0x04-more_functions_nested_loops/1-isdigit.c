#include "main.h"

/**
 * _isdigit - checks if letter is uppercase
 * @c: integer value of char to be checked
 * Return: 1(c is digit), 0 (otherwise)
 */

int _isdigit(int c)
{
	int ret;

	if ((c > 47) && (c < 58))
	{
		ret = 1;
	}
	else
		ret = 0;

	return (ret);
}
