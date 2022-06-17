#include "main.h"

/**
 * reverse_array - reverse order of elements of aan array
 *
 * @a: integer pointer parameter
 * @n: number of elements in array
 */

void reverse_array(int *a, int n)
{
	int rev_a[n];
	int i;

	i = 0;

	while (i <= n)
	{
		rev_a[i] = *(a + (n-i));
		i++;
	}

	i = 0;

	while (i <= n)
	{
		*(a + i) = rev_a[i];
		i++;
	}
}
