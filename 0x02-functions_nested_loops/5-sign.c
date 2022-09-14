#include "main.h"

/**
 * print_sign - Prints the sign of an int
 * @n: integer value to be tested
 *
 * Return: 1(n is > 0), 0(n is 0), -1(n is < 0)
 */

int print_sign(int n)
{
int rs; 
if (n > 0)
{
	_putchar('+');
	rs = 1;
}

if (n == 0)
{
	_putchar('0');
	rs = 0;
}

if (n < 0)
{
	_putchar('-');
	rs = -1;
}

return (rs);
}
