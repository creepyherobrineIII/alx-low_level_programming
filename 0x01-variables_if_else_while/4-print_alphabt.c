#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints out lowercase alphabet
 * Return: Always 0(Success)
 */

int main(void)
{
	int n = 0;

	while (n < 26)
	{
		if ((n == 4) || (n == 16))
		{
			n++
		}
		else
		{
			putchar('a' + n);
			n++;
		}
	}
	putchar('\n');
	return (0);
}
