#include "main.h"

/**
 * jack_bauer - prints out the minutes in a day
 */

void jack_bauer(void)
{
	int h1, m1, h2, m2;

	h1 = 0;
	m1 = 0;
	h2 = 0;
	m2 = 0;

	while (h1 <= 2)
	{
		h2 = 0;
		m1 = 0;
		m2 = 0;

		if (h1 == 2)
		{
			while (h2 < 4)
			{
				m1 = 0;
				m2 = 0;

				while (m1 <= 5)
				{
					m2 = 0;

					while (m2 <= 9)
					{
						_putchar('0' + h1);
						_putchar('0' + h2);
						_putchar(':');
						_putchar('0' + m1);
						_putchar('0' + m2);
						_putchar('\n');
						m2++;
					}

					m1++;
				}

				h2++;
			}
		} 

		while (h2 <= 9)
		{
			m1 = 0;
			m2 = 0;

			while (m1 <= 5)
			{
				m2 = 0;

				while (m2 <= 9)
				{
					_putchar('0' + h1);
					_putchar('0' + h2);
					_putchar(':');
					_putchar('0' + m1);
					_putchar('0' + m2);
					_putchar('\n');

					m2++;
				}

				m1++;
			}

			h2++;
		}

		h2++;

	}
}
