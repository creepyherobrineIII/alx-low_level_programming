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
			for (int j = 0; j < i; j++)
			{
				_putchar(' ');
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
