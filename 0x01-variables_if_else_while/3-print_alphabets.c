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
		putchar('a' + n);
		n++;
	}

	n = 0;

	while (n < 26)
	{
		putchar('A' + n);
		n++;
	}

	putchar('\n');
	return (0);
}
