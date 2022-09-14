#include "main.h"

/**
 * jack_bauer - Prints the minutes and hours in a day of Jack Bauer's
 *
 * Return : None
 */

void jack_bauer(void)
{
	int hf = 0;
	int hs = 0;
	int mf = 0;
	int ms = 0;

	while (hf <= 2)
	{
		hs = 0;
		if (hf < 2)
		{
			while (hs <= 9)
			{
				mf = 0;
				while (mf <= 5)
				{
					ms = 0;
					while (ms <= 9)
					{
						putchar('0' + hf);
						putchar('0' + hs);
						putchar(':');
						putchar('0' + mf);
						putchar('0' + ms);
						putchar('\n');
						ms++;
					}
					mf++;
				}
				hs++;
			}
		}
		if (hf == 2)
		{
			while (hs < 4)
			{
				mf = 0;
				while (mf <= 5)
				{
					ms = 0;
					while (ms <= 9)
					{
						putchar('0' + hf);
						putchar('0' + hs);
						putchar(':');
						putchar('0' + mf);
						putchar('0' + ms);
						putchar('\n');
						ms++;
					}
					mf++;
				}
				hs++;
			}
		}
		hf++;
	}
}
