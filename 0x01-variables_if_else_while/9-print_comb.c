#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints single digit numbers in a combination (formatted)
 * Return: Always 0(Success)
 */

int main(void)
{
	int n = 0;

	while (n < 10)
	{
		putchar('0' + n);

		if (n != 9)
		{
			putchar(',');
			putchar(' ');
		}
		n++;
	}
	putchar('\n');

	return (0);
}
