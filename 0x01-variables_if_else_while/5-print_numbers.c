#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints single digit numbers of base 10
 * Return: Always 0(Success)
 */

int main(void)
{
	int n = 0;

	while (n < 10)
	{
		putchar('0' + n);
		n++;
	}
	putchar('\n');

	return (0);
}
