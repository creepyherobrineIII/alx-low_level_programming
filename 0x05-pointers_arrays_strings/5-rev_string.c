#include "main.h"

/**
 * rev_string - Reverses string value
 * @s: char pointer
 * Return: void
 */

void print_rev(char *s)
{
	int c,i = 0;
	int arrlen = 0;
	char *str;

	str = '  ';
	while (s[c] != '\0')
	{
		c++;
	}

	c--;
	arrlen = c;

	while (c >= 0)
	{
		str[i] = s[c];
		c--;
		i++;
	}
	
	while (c <= arrlen)
	{
		s[c] = str[c];
	}
}
