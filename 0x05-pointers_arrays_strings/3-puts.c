#include "main.h"

/**
 * _puts - Returns the string length of parameter value
 * @str: char pointer
 * Return: void
 */

void _puts(char *str)
{
	int c = 0;

	while (str[c] != '\0')
	{
		_putchar(str[c]);
		c++;
	}
	_putchar('\n');
}
