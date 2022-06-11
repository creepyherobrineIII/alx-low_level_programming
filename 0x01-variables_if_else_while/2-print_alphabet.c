#include <stdio.h>

/**
 * main - Outputting alphabet in lowercase
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char letter;

	letter = 'a';

	for (int i = 0; i < 26; i++)
	{
		putchar(letter + i);
	}
	return (0);
}
