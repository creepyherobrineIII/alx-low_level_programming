#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * swap_int - A function swapping int values
 *
 * @a: int value to be swapped, passed as parameter
 * @b: int value to be swapped, passed as parameter
 */

void swap_int(int *a, int *b)
{
	int c, d;

	c = 0;
	d = 0;

	c = *a;
	d = *b;

	*a = d;
	*b = c;
}
