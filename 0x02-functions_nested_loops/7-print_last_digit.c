#include "main.h"

/**
 * print_last_digit - outputs last digit of integer
 *
 * @n: integer parameter
 *
 * Return: last digit of integer parameter
 */

int print_last_digit(int n)
{
	int r;

	if (n < 0)
	{
		n = n - (2 * n);
	}

	r = n % 10;

	_putchar('0' + r);

	return (r);
}
