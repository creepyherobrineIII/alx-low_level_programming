#include "main.h"

/**
 * print_rev - prints string to standard out in reverse
 *
 * @s: parameter for string which is being outputted in reverse
 */

void print_rev(char *s)
{
	int len;
	char g, n, r;

	g = '\0';
	n = '\n';
	len = 0;

	while (r != '\0')
	{
		r = *(s + len);
		len++;
	}

	len = len - 1;

	while (len >= 0)
	{
		g = *(s + len);
		_putchar(g);
		len--;
	}
	_putchar(n);
}
