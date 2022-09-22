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
	int c, i = 0;
	char temp;

	while (dest[c] != '\0')
	{
		c++;
	}

	while (i <= n)
	{
		temp = src[i];
		dest[c] = temp;
		c++;
		i++;
	}

	return (dest);
}
