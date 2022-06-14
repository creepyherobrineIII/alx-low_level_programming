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


	len = _strlen(str);
	i = 0;

	while (i <= len)
	{
		_putchar(*(str + i));
	}

}	
