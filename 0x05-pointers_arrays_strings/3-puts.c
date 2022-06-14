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
		write(1, *(str + i), 1);
	}
	write(1,'\n', 1);
}	
