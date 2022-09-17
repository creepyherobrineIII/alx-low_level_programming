#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints out lowercase alphabetin reverse
 * Return: Always 0(Success)
 */

int main(void)
{
	int n = 0;

	while (n < 26)
	{
		putchar('z' - n);
		n++;
	}
	putchar('\n');
	return (0);
}
