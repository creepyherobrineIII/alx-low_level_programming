#include <stdio.h>

/**
 * main - Output alphabet using function in seperate files
 *
 * Return: Always 0
 */

void print_alphabet(void)
{
	int i;

	i = 0;

	while (i < 26)
	{
		putchar('a' + i);
		i++;
	}
	putchar('\n');
}

int main(void)
{
	print_alphabet();
	return (0);
}
