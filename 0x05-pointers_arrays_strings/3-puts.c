#include "main.h"

/**
 * _puts - prints string to standard out
 *
 * @str: parameter for string which is being outputted
 */

void _puts(char *str)
{
	int len;
	int i;
	char g,n,r;

	g = '\0';
	n = '\n';
	len = 0;
	i = 0;

	while (r != '\0')
	{
		r = *(str + len);
		len++;
	}

	len = len - 1;

	while (i <= len)
	{
		g = *(str + i);
		_putchar(g);
		i++;
	}
	_putchar(n);
}	
