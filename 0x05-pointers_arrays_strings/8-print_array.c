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

	out = 0;
	i = 0;

	while (i < n)
	{
		out = *(a + i);
		printf("%i", out);
		i++;
		if (i < n)
		{
			printf(", ");
		}
	}
	printf("\n");
}
