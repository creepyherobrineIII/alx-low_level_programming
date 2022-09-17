#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints smallest combination of double digit numbers
 * Return: Always 0(Success)
 */

int main(void)
{
	int t, d = 0;

	while (t < 10)
	{
		d = 0;
		while (d < 10)
		{
			if (d <= t)
			{
				d++;
			}

			if ((t != 9) && (d > t))
			{
				putchar('0' + t);
				putchar('0' + d);

				if ((d + t != 17))
				{
					putchar(',');
					putchar(' ');
				}
				d++;
			}
		}
		t++;
	}
	putchar('\n');
	return (0);
}
