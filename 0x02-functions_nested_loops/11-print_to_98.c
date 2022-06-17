#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints all numbers until reaching 98
 *
 * @n: integer parameter used as starting point
 */

void print_to_98(int n)
{
	if (n == 98)
	{
		printf("%i", n);
	}
	
	if (n < 98)
	{
		while (n <= 98)
		{
			if (n != 98)
			{
				printf("%i, ", n);
				n++;
			} else
			{
				printf("%i", n);
			}
		}
	}

	if (n > 98)
	{
		while (n >= 98)
		{
			if (n != 98)
			{
				printf("%i, ", n);
				n--;
			} else
			{
				printf("%i", n);
			}
		}
	}

	printf("\n");
}
