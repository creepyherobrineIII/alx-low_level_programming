#include <stdio.h>

/**
 * main - Outputting alphabet in lowercase, except q and e
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
		if ((i == 4) | (i == 15))
		{
			i++;
		}
		else
		{
			putchar(letter + i);
			i++;
		}
	}
	putchar('\n');
	return (0);
}
