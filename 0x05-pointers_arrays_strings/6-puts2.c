#include "main.h"

/**
 * puts2 - Outputs every second character in string
 * @str: char pointer
 * Return: void
 */

void puts2(char *str)
{
	int c = 0;

	while (str[c] != '\0')
	{
		_putchar(str[c]);
		c++;
	}
	_putchar('\n');
}
