#include "main.h"

/**
 * print_sign - prints the sign of a number
 *
 * @n: integer whose sign shall be determined
 *
 * Return: 0 (if n is zero), 1 (if n is greater than zero), -1 (if n is less th
 * an zero)
 */


int print_sign(int n)
{
	int i;

	if (n > 0)
	{
		_putchar('+');
		i = 1;
	}

	if (n == 0)
	{
		_putchar('0');
		i = 0;
	}

	if (n < 0)
	{
		_putchar('-');
		i = -1;
	}

	return (i);
}
