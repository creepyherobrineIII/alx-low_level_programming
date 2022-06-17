#include "main.h"

/**
 * more_numbers - print out numbers from 0 to 14
 */

void more_numbers(void)
{
	int icount;
	int tencount;
	int secnum;

	tencount = 0;
	icount = 0;
	secnum = 0;

	while (icount <= 14)
	{
		if (icount >= 10)
		{
			tencount = 1;
			secnum = icount - (10 * tencount);
			_putchar('0' + tencount);
			_putchar('0' + secnum);
		} else
		{
			_putchar('0' + icount);
		}

		icount++;
	}
	_putchar('\n');
}
