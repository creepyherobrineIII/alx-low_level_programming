#include <stdio.h>

/**
 * main - Outputting alphabet in lowercase
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char letter;
	int i;

	i = 0;
	letter = 'a';

	while (i < 26)
	{
		putchar(letter + i);
		i++;
	}
	putchar("\n");
	return (0);
}
