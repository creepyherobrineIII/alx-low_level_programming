#include <stdio.h>

/**
 * main - Output digits where digit combinations do not repeat
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	int g;

	g = 0;
	i = 0;

	while (i < 10)
	{
		while (g < 10)
		{
			if (g == i)
			{
				g++;
			} else
			{
				putchar('0' + i);
				putchar('0' + g);
				if (i != 8)
				{
					putchar(',');
					putchar(' ');
				}
				g++;
			}
		}
		g = i + 1;
		i++;
	}
	putchar('\n');
	return (0);
}
