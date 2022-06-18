#include "main.h"

/**
 * print_diagonal - output \ to std out n times
 *
 * @n:  integer parameter to determine how many chars to print
 */

void print_diagonal(int n)
{
	int i, j;

	i = 0;
	j = 0;

	if (n > 0)
	{
		while (i < n)
		{
			j = 0;
			while (j < i)
			{
				_putchar(' ');
				j++;
			}
			_putchar('\\');
			i++;
			_putchar('\n');
		}
	} else
	{
		_putchar('\n');
	}
}
