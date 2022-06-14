#include "main.h"

/**
 * strlen - returns the length of a string
 *
 * @s: a string parameter
 */

int _strlen(char *s)
{
	int len;
	char letter[];

	len = 0;

	while (letter[len] != '\0')
	{
		letter[len] = s[len];
		len++;
	}
	return (len);
}
