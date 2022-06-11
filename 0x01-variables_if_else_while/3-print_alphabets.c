#include <stdio.h>

/**
 * main - Print lowercase and uppercase letters
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char letter;
	char CLetters;
	int i;

	i = 0;
	letter = 'a';
	CLetters = 'A';

	while (i < 26)
	{
		putchar(letter + i);
		i++;
	}

	i = 0;

	while (i < 26)
	{
		putchar(CLetters + i);
		i++;
	}
	putchar('\n');
	return (0);
}
