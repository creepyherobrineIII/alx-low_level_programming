#include "main.h"

/**
 * rev_string - Reverses string value
 * @s: char pointer
 * Return: void
 */

void rev_string(char *s)
{
	int c = 0;
	int halfc;
	int i = 0;
	char r, g;

	while (s[c] != '\0')
	{
		c++;
	}
	c--;

	halfc = c / 2;

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
