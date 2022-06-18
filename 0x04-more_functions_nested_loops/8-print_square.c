#include "main.h"

/**
 * print_square - output chars to form a square with size nxn
 *
 * @size - integer parameter for size of shape
 */

void print_square(int size)
{
	int i, j;

	i = 0;
	j = 0;

	if (size > 0)
	{
		while (i < size)
		{
			j = 0;
			_putchar('#');

			while (j < size)
			{
				_putchar('#');
				j++;
			}

			_putchar('\n');
			i++;
		}
	} else 
	{
		_putchar('\n');
	}
}
