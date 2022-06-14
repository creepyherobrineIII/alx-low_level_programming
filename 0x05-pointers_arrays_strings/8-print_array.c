#include <stdio.h>
#include "main.h"

/**
 * print_array - prints out n number of elements from array
 *
 * @a: array pointer parameter
 *
 * @n: number of elements to be outputted
 */

void print_array(int *a, int n)
{
	int i, out;
	char nl;

	out = 0;
	nl = '\n';
	i = 0;

	while (i < n)
	{
		out = *(a + i);
		printf("%i", out);
		_putchar(',');
		_putchar(' ');
		i++;
	}
	_putchar(nl);
}
