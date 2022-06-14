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
	int i;
	char out, nl;

	out = '\0';
	nl = '\n';
	i = 0;

	while (i < n)
	{
		out = *(a + i);
		_putchar(out);
		i++;
	}
	_putchar(nl);
}
