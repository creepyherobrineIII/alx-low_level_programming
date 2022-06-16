#include "main.h"

/**
 * _abs - prints the absolute value of integer
 *
 * @n: integer parameter
 * Return: abs value of integer
 */

int _abs(int n)
{
	int g;

	if (n >= 0)
	{
		g = n;
	}

	if (n < 0)
	{
		g = n - (2 * n);
	}

	return (g);
}
