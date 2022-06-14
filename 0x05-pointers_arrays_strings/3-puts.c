#include "main.h"

int _strlen(char *s);

/**
 * _puts - prints string to standard out
 *
 * @str: parameter for string which is being outputted
 */

void _puts(char *str)
{
	int len;
	int i;
	char g,n;

	g = '\0';
	n = '\n';
	len = _strlen(str);
	i = 0;

	while (i <= len)
	{
		g = *(str + i);
		_putchar(g);
		i++;
	}
	_putchar(n);
}	
