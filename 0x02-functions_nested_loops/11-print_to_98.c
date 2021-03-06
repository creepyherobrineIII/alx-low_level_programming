#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints all numbers until reaching 98
 *
 * @n: integer parameter used as starting point
 */

void print_to_98(int n)
{
	int u;

	u = n;

	if (n == 98)
	{
		printf("%i", n);
	}
	
	if (n < 98)
	{
		while (n <= 98)
		{
			if (n == 98)
			{
				printf("%i", u);
			} else
			{
				printf("%i, ", u);
			}
			u++;
		}
	}

	if (n > 98)
	{
		while (n >= 98)
		{
			if (n != 98)
			{
				printf("%i, ", n);
			} else
			{
				printf("%i", n);
			}
			n--;
		}
	}

	printf("\n");
}
