#include "main.h"

/**
 * reverse_array - Reverses order of array
 * @a: array of integers
 * @n: number of elements in array
 * Return: void
 */

void reverse_array(int *a, int n)
{
	n--;
	int halfarrlen = n / 2;
	int temp = 0;
	int l = 0;

	for (int i = 0; i < halfarrlen; i++)
	{
		temp = a[i];
		l = a[n];
		a[i] = l;
		a[n] = temp;
		n--;
	}
}
