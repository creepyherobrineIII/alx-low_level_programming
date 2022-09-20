#include "main.h"

/**
 * swap_int - Swap two integer values
 * @a: integer pointer for first val
 * @b: integer pointer for second val
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
