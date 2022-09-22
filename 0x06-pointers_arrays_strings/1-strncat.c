#include "main.h"

/**
 * _strncat - Concatenates two strings
 * @dest: destination string for appending
 * @src: string to append
 * @n: integer values for char appendage
 * Return: pointer to concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int c, g = 0;
	char temp;

	while (dest[c] != '\0')
	{
		c++;
	}

	for (int i = 0; i <= n; i++)
	{
		temp = src[i];
		dest[c] = temp;
		c++;
	}

	dest[c] = '\0';

	return (dest);
}
