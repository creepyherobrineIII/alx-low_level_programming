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

	r = n % 10;

	if (r < 0)
	{
		r = r - (2 * r);
	}

	_putchar('0' + r);

	return (r);
}
