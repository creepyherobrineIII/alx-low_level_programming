#include "main.h"

/**
 * reverse_array - reverse order of elements of aan array
 *
 * @a: integer pointer parameter
 * @n: number of elements in array
 */

void reverse_array(int *a, int n)
{
	int i, j;

	i = 0;
	j = 0;

	n = n - 1;

	while (i < n)
	{
		j = a[i];
		a[i] = a[n];
		a[n] = j;
		i++;
		n--;
	}
}
