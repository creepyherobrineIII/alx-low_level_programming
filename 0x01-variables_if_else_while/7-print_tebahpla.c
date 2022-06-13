#include <stdio.h>

/**
 * main - Outputting alphabet in lowercase in reverse
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char letter;
	int i;

	i = 25;
	letter = 'a';

	while (i > -1)
	{
		putchar(letter + i);
		i--;
	}
	putchar('\n');
	return (0);
}
