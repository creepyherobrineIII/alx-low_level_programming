#include "main.h"

/**
 * _strlen - Returns the string length of parameter value
 * @s: char pointer
 * Return: String Length (int)
 */

int _strlen(char *s)
{
	int c = 0;

	while (s[c] != '\0')
	{
		c++;
	}

	return (c);
}
