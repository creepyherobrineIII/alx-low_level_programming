#include "main.h"

/**
 * more_numbers - print out numbers from 0 to 14
 */

void more_numbers(void)
{
	int icount;
	int tencount;

	tencount = 0;
	icount = 0;

	while (icount <= 14)
	{
		if (icount >= 10)
		{
			tencount = 1;
			_putchar('0' + tencount);
			_putchar('0' + (icount - (10 * tencount)));
		} else
		{
			_putchar('0' + icount);
		}

		icount++;
	}
	_putchar('\n');
}
