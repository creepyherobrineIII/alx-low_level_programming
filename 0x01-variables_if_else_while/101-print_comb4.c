#include <stdio.h>
#include <stdlib.h>

/**
 * main - Print smallest combination of three-digit numbers
 * Return: Always 0(Success)
 */

int main(void)
{
	int h = 0;
	int t = 0;
	int d = 0;

	while (h < 10)
	{
		d = 0;
		t = 0;
		while (t < 10)
		{
			d = 0;
			while (d < 10)
			{
				if ((t <= h) && (t < 9))
				{
					t++;
				}
				if (((h != 9)  && (t > h)) && (d > t))
				{
					putchar('0' + h);
					putchar('0' + t);
					putchar('0' + d);
					if (h + t + d != 24)
					{
						putchar(',');
						putchar(' ');
					}
				}
				d++;
			}
			t++;
		}
		h++;
	}
	putchar('\n');
	return (0);
}


