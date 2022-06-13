#include <stdio.h>

/**
 * main - Output 3-digit numbers without recurring digit combinations
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	int g;
	int j;

	g = 0;
	i = 0;
	j = 0;

	while (i < 10)
	{
		g = i + 1;
		j = g + 1;

		while (g < 10)
		{
			j = g + 1;
			while (j < 10)
			{
				putchar('0' + i);
				putchar('0' + g);
				putchar('0' + j);

				if (i != 7)
				{
					putchar(',');
					putchar(' ');
				}
				j++;
			}
			j = g + 1;
			g++;
		}
		i++;
	}

	putchar('\n');
	return (0);
}
