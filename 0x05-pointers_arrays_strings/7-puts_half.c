#include "main.h"

/**
 * puts_half - prints string to stdout, but only half of string
 *
 * @str: parameter for string which is being outputted
 */

void puts_half(char *str)
{
	int len, half_len;
	char g, n, r;

	g = '\0';
	n = '\n';
	len = 0;

	while (r != '\0')
	{
		r = *(str + len);
		len++;
	}

	len--;

	if ((len % 2) == 1)
	{
		len--;
		half_len = (len / 2);
		half_len++;
	} else
		half_len = (len / 2);


	while (half_len <= len)
	{
		g = *(str + half_len);
		_putchar(g);
		half_len++;
	}
	_putchar(n);
}
