#include "main.h"

/**
 * print_diagonal - output \ to std out n times
 *
 * @n:  integer parameter to determine how many chars to print
 */

void print_diagonal(int n)
{
	int i;

	i = 0;

	if (n > 0)
	{
		while (i < n)
		{
			_putchar('\');
			i++;
		}
	}

	_putchar('\n');
}
