#include "main.h"

/**
 * times_table - Prints out 9 times table
 *
 * Return: void
 */

void times_table(void)
{
int m1, m2, res;

while (m1 <= 9)
{
	m2 = 0;
	while (m2 <= 9)
	{
		res = m1 * m2;
		if (res >= 10)
		{
			_putchar('0' + m1);
			_putchar('0' + (res % 10));
			_putchar(',');
			_putchar(' ');
		}
		else
		{
			_putchar('0' + res);
			_putchar(',');
			_putchar(' ');
		}

		if (m2 == 9)
		{
			_putchar('\n');
		}

		m2++;
	}
	m1++;
}
}
