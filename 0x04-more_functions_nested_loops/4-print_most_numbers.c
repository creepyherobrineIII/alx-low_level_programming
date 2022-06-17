#include "main.h"

/**
 * print_most_numbers - outputs single digit numbers excpet 2 & 4
 */

void print_most_numbers(void)
{
	int count;

	count = 0;

	while (count <= 9)
	{
		if ((count == 2) || (count == 4))
		{
			count++;
		}
		_putchar('0' + count);
		count++;
	}
	_putchar('\n');
}
