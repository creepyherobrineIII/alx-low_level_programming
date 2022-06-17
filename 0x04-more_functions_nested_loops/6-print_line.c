#include "main.h"

/**
 * print_line - output underscore to std out n times
 *
 * @n:  integer parameter to determine how many chars to print
 */

void print_line(int n)
{
	for (int i = 0; i <= n; i++)
	{
		if (n != 0)
		{
			_putchar('_');
		}
	}

	_putchar('\n');
}
