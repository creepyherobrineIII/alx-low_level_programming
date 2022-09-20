#include "main.h"

/**
 * _strlen - Returns the string length of parameter value
 * @s: char pointer
 * Return: String Length (int)
 */

int _strlen(char *s)
{
	int c;

	while (*s[c] != '\0')
	{
		c++;
	}

	return (c);
}
