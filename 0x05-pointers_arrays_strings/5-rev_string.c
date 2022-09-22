#include "main.h"

/**
 * rev_string - Reverses string value
 * @s: char pointer
 * Return: void
 */

void print_rev(char *s)
{
	int c = 0;
	int i = 0;
	char r, g;

	while (s[c] != '\0')
	{
		c++;
	}
	c--;

	int halfc = c / 2;

	while (c >= halfc)
	{
		r = s[c];
		g = s[i];
		s[c] = g;
		s[i] = r;
		c--;
		i++;
	}
}
