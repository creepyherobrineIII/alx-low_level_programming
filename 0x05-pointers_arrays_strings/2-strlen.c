#include "main.h"

/**
 * _strlen - returns the length of a string
 *
 * @s: a string parameter
 * Return: return length of string as int
 */

int _strlen(char *s)
{
	int len;
	char letter;

	len = 0;

	while (letter != '\0')
	{
		letter = *(s + len);
		len++;
	}
	return (len - 1);
}
