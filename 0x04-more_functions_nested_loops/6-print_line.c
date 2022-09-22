#include "main.h"

/**
 * print_line - draws a straight line
 * @n: number of times a char
 * Return: void
 */

void print_line(int n)
{
	int l = 0;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (l < n)
		{
			_putchar('_');
			l++;
		}
		_putchar('\n');
	}
}
