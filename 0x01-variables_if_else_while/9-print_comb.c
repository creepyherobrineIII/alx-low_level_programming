#include <stdio.h>

/**
 * main - Print combos of single digit numbers in ascending order
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	i = 0;

	while (i < 10)
	{
		putchar('0' + i);
		putchar(',');
		putchar(' ');
		i++;
	}
	printf("\n");
	return (0);
}
