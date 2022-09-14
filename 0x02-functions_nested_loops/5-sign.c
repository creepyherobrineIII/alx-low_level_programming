#include "main.h"

/**
 * print_sign - Prints the sign of an int
 * @n: integer value to be tested
 *
 * Return: 1(n is > 0), 0(n is 0), -1(n is < 0)
 */

int print_sign(int n)
{
if (n > 0)
{
	_putchar('+');
	return (1);
}

if (n == 0)
{
	_putchar('0');
	return (0);
}

if (n < 0)
{
	_putchar('-');
	return (-1);
}
}
