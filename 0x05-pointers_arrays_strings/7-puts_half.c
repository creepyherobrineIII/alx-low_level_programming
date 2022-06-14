#include "main.h"

/**
 * puts_half - prints string to stdout, but only half of string
 *
 * @str: parameter for string which is being outputted
 */

void puts_half(char *str)
{
	int len, half_len;
	char g, r;

	g = '\0';
	len = 0;

	while (r != '\0')
	{
		r = *(str + len);
		len++;
	}

	if ((len % 2) == 1)
	{
		half_len = ((len - 1) / 2);
	} else
	{
		half_len = (len / 2);
	}

	while (half_len < len)
	{
		g = *(str + half_len);
		_putchar(g);
		half_len++;
	}
}
