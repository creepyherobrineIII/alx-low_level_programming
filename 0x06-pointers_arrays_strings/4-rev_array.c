#include "main.h"

/**
 * reverse_array - Reverses order of array
 * @a: array of integers
 * @n: number of elements in array
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int halfarrlen;
	int temp = 0;
	int l, i = 0;

	n--;

	halfarrlen = n / 2;
	while (i < halfarrlen)
	{
		temp = a[i];
		l = a[n];
		a[i] = l;
		a[n] = temp;
		n--;
		i++;
	}
}
