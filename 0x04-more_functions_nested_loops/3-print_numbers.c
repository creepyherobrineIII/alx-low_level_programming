#include "main.h"

/**
 * print_numbers - outputs single digit numbers
 */

void print_numbers(void)
{
	int count;

	count = 0;

	while (count <= 9)
	{
		_putchar('0' + count);
		count++;
	}
	_putchar('\n');
}
